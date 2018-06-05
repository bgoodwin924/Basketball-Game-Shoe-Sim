#include <iostream>
#include "Player.h"

int main() {
    cout <<"Congrats on making the Catamount Basketball Team!"<<endl;
    string FN,LN;
    int num;
    int ans;
    int size;
    cout <<"What is your first name?"<<endl;
    cin >> FN;
    while (FN.find_first_of("0123456789") != -1)
    {
        cout << "Names Don't have numbers in them, try again:" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin>>FN;
    }
    cout << "What is your last name?" << endl;
    cin >> LN;
    while (LN.find_first_of("0123456789") != -1)
    {
        cout << "Names Don't have numbers in them, try again:" << endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin>>LN;
    }
    cout << "What number would you like to wear?" << endl;
    cin >> num;
    while(cin.fail()){
        cout<<"That is not a number, try again"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin>>num;
    }
    Player you(FN,LN,num);
    cout <<"If you are going to play basketball for the team, you are going to need a fresh pair of kicks!"<<endl;
    cout <<"Here is a list of shoes that you are allowed to use. Choose wisely!"<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(1) Nike: Kobe A.D  $150"<<endl;
    cout <<"Summary: The Mamba Mentality requires the ability to find equilibrium between passion, fearlessness, optimism, and honesty, as well as the ability to detach oneself from the world. It doesn't come to players naturally. Through exceptional performance, the latest Kobe A.D. is designed to help you push past your limits so you can channel these emotions and carry on Kobe's legacy."<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(2) Nike: Kyrie 4  $120"<<endl;
    cout <<"Summary: The Kyrie 4 Men's Basketball Shoe is ultra-flexible, responsive and supportive. It's designed for Kyrie Irving's sudden changes of direction and smooth yet rapid playing style."<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(3) Nike KD10 $150"<<endl;
    cout <<"Summary: Always ready to play, always ready to compete, Kevin Durant's tenth shoe is as versatile and responsive as KD. Zoned Flyknit provides breathability and stretch, while Nike Zoom Air cushioning returns impact energy back to your foot for ultra-responsiveness"<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(4) Adidas: Crazy Explosive 2017 $105"<<endl;
    cout <<"Summary: Blow past defenders with an explosive first step. These basketball shoes are made for players who thrive on unpredictability. The forged adidas Primeknit upper provides optimal stability for sharp footwork while staying ultra-light for quickness. boost™ helps harness your raw energy."<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"(5) Adidas: Harden Vol.2 $140"<<endl;
    cout <<"Summary: Gas, brake, cook. James Harden freezes defenders with a signature mix of Euro steps, hesitations and lightning-quick crossovers. These Harden Vol. 2 basketball shoes are designed for players with quick footwork and acceleration. A breathable, sock-like upper and lightweight support gives you stability and control when you change directions and create separation. Energized cushioning Boost is our most responsive cushioning ever: The more energy you give, the more you get Targeted support Forgefiber in the upper features heat-pressed, TPU-coated fibers to provide support and lightweight durability Change directions Fractal traction pattern allows for quick start and stop movements Sideways movement Engineered forefoot for lateral stability"<<endl;
    cout <<"========================================================================="<<endl;
    cout <<"Enter in the number of the shoe that you would like to use!"<<endl;
    cin >> ans;
    //Validation
    while(cin.fail()){
        cout<<"That is not a number"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin>>ans;
    }
    while((ans<1) || (ans>5)){
        cout <<"Please choose a number from 1-5: "<<endl;
        cin >> ans;
    }
    //user's choices
    BasketballShoe b;
    cin.clear();
    switch(ans) {
        case 1: {
            cout << "Good choice, now what size shoe do you wear?" << endl;
            cin.clear();
            cin >> size;
            while (cin.fail()) {
                cout << "That is not a number, try again" << endl;
                cin.clear();
                cin.ignore(256, '\n');
                cin >> size;
            }

            //Fill Shoe variables
            b.setBrand("Nike"); b.setColor("Green"); b.setPrice(150); b.setShoeName("Kobe A.D"); b.setSize(size);
            //Basketball Shoe variables
            b.setTraction(3); b.setImpact(2);b.setCourtFeel(2);b.setDurability(2);
        }
        break;
        case 2: {
            cout << "Good choice, now what size shoe do you wear?" << endl;
            cin.clear();
            cin >> size;
            while (cin.fail()) {
                cout << "That is not a number, try again" << endl;
                cin.clear();
                cin.ignore(256, '\n');
                cin >> size;
            }

            //Fill Shoe variables
            b.setBrand("Nike"); b.setColor("Green"); b.setPrice(120); b.setShoeName("Kyrie 4"); b.setSize(size);
            //Basketball Shoe variables
            b.setTraction(3); b.setImpact(1);b.setCourtFeel(3);b.setDurability(2);
        }
            break;
        case 3: {
            cout << "Good choice, now what size shoe do you wear?" << endl;
            cin.clear();
            cin >> size;
            while (cin.fail()) {
                cout << "That is not a number, try again" << endl;
                cin.clear();
                cin.ignore(256, '\n');
                cin >> size;
            }

            //Fill Shoe variables
            b.setBrand("Nike"); b.setColor("Green"); b.setPrice(150); b.setShoeName("KD10"); b.setSize(size);
            //Basketball Shoe variables
            b.setTraction(3); b.setImpact(3);b.setCourtFeel(2);b.setDurability(3);
        }
            break;
        case 4: {
            cout << "Good choice, now what size shoe do you wear?" << endl;
            cin.clear();
            cin >> size;
            while (cin.fail()) {
                cout << "That is not a number, try again" << endl;
                cin.clear();
                cin.ignore(256, '\n');
                cin >> size;
            }

            //Fill Shoe variables
            b.setBrand("Adidas"); b.setColor("Green"); b.setPrice(150); b.setShoeName("Crazy Explosive 2017"); b.setSize(size);
            //Basketball Shoe variables
            b.setTraction(2); b.setImpact(3);b.setCourtFeel(2);b.setDurability(3);
        }
            break;
        case 5: {
            cout << "Good choice, now what size shoe do you wear?" << endl;
            cin.clear();
            cin >> size;
            while (cin.fail()) {
                cout << "That is not a number, try again" << endl;
                cin.clear();
                cin.ignore(256, '\n');
                cin >> size;
            }

            //Fill Shoe variables
            b.setBrand("Adidas"); b.setColor("Green"); b.setPrice(150); b.setShoeName("Harden Vol.2"); b.setSize(size);
            //Basketball Shoe variables
            b.setTraction(3); b.setImpact(3);b.setCourtFeel(3);b.setDurability(3);
        }
            break;
    }
    cout<<"Now we will simulate your first game. Your shoe choice has an impact on how well you play"<<endl;
    cout<<"*Ball is inbounded to you*"<<endl;
    cout<<"*You bring the ball up and get ready for the shot*"<<endl;
    Traction t(b.getTraction());
    double overall=t.getAverage()*you.get_skill();
    //cout<<t.getAverage()<<endl;
    //cout<<you.get_skill()<<endl;
    //cout<<overall<<endl;
    if(overall >0 && overall <=100){
        cout<<"Number "<<you.get_number()<<" slipped and missed the shot, better luck next time"<<endl;
    }else if(overall>100 && overall<=200){
        cout<<"Number "<<you.get_number()<<" slipped a little, but still made the shot. Good!"<<endl;
    }else if(overall>200 && overall <=300){
        cout<<"Number "<<you.get_number()<<" stopped on a dime and drilled the shot, great job!!"<<endl;
    }else{
        cout<<"Something went wrong"<<endl;
    }
}