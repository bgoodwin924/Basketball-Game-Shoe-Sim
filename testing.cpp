//
// Created by might on 3/22/2018.
//
#include <iostream>
#include "Player.h"

int main() {
    //Player class test
    //==============================================
    Player p("Brandon","Goodwin",20);
    //Should print Brandon Goodwin 20
    cout<<p.get_first_name();
    cout<<p.get_last_name();
    cout<<p.get_number()<<endl;
    p.set_first_name("John");
    p.set_last_name("Rodriguez");
    p.set_number(21);
    p.set_skill(55);
    //should print John Rodriguez 21 55
    cout<<p.get_first_name();
    cout<<p.get_last_name();
    cout<<p.get_number();
    cout<<p.get_skill()<<endl;
    //=================================================
    //Shoe class test
    Shoe s("Brand1","Shoe1",12,"green",10.23);
    //should print above inputs
    cout<<s.getBrand();
    cout<<s.getShoeName();
    cout<<s.getSize();
    cout<<s.getColor();
    cout<<s.getPrice()<<endl;
    //should print out new parameters
    s.setSize(5);
    s.setShoeName("poop");
    s.setPrice(34.54);
    s.setColor("red");
    s.setBrand("Yike");
    cout<<s.getBrand();
    cout<<s.getShoeName();
    cout<<s.getSize();
    cout<<s.getColor();
    cout<<s.getPrice()<<endl;
    //====================================
    //BasketballShoe test
    BasketballShoe b(1,1,1,1);
    //prints 1111
    cout<<b.getTraction();
    cout<<b.getImpact();
    cout<<b.getCourtFeel();
    cout<<b.getDurability()<<endl;
    b.setTraction(2);
    b.setImpact(2);
    b.setCourtFeel(2);
    b.setDurability(2);
    //prints 2222
    cout<<b.getTraction();
    cout<<b.getImpact();
    cout<<b.getCourtFeel();
    cout<<b.getDurability()<<endl;
    //=========================
    //traction test
    Traction t(4);
    cout<<t.getBite();
    cout<<t.getSoftness()<<endl;  //these should be random
    t.setBite(1);
    t.setSoftness(1);
    t.setTrac(1);
    cout<<t.getBite();
    cout<<t.getSoftness();
    cout<<t.getTrac();
    //shopuld print111

}
