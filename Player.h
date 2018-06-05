//
// Created by might on 3/20/2018.
//

#ifndef PJ5_PLAYER_H
#define PJ5_PLAYER_H

#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

enum Rubber {Hard, Soft};

//Unrelated Class
class Player {
    //Variables to be accesed
    string first_name;
    string last_name;
    int number;
    int skill;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: first and last name, number
     * Effects: creates both variables with empty strings, and number =0
    */
    Player();

    /**
    * non-Default Constructor
    * Requires: nothing
    * Modifies: first/last name, and num
    * Effects: sets each variable to the following inputs
    */
    Player(string firstname, string lastname, int num);

    //Setters
    /**
     * First Name Setter
     * Requires: nothing
     * Modifies: First Name
     * Effects: sets first name to input
    */
    void set_first_name(string player_first_name);

    /**
    * Last Name Setter
    * Requires: nothing
    * Modifies: Last Name
    * Effects: sets Last name to input
    */
    void set_last_name(string player_last_name);

    /**
    * Player Number  Setter
    * Requires: nothing
    * Modifies: player number
    * Effects: sets number to input
    */
    void set_number(int player_number);
    /**
    * Player skill  Setter
    * Requires: nothing
    * Modifies: player skill
    * Effects: sets skill to input
    */

    void set_skill(int ski);

    //Getters
    /**
     * First Name Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns First Name
    */

    string get_first_name();

    /**
     * Last Name Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns Last name
    */
    string get_last_name();

    /**
     * Num Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns number
    */
    int get_number();

    /**
     * skill Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns skill
    */
    int get_skill();


};


//parent class
class Shoe{
    //variables
protected:
    string brand;
    string shoe_name;
    int size;
    string color;
    double price;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: all shoe variables
     * Effects: creates all variables with empty strings, and numbers =0
    */
    Shoe();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: all varibales
     * Effects: sets varibales to inputs
    */
    Shoe(string brand, string shoename, int size, string color, double price);

    /**
     * Brand Setter
     * Requires: nothing
     * Modifies: Brand
     * Effects: sets Brand to input
    */
    void setBrand(string brand);

    /**
     * Shoe name Setter
     * Requires: nothing
     * Modifies: shoe Name
     * Effects: sets shoe name to input
    */
    void setShoeName(string name);

    /**
     * size Setter
     * Requires: nothing
     * Modifies: size
     * Effects: sets size to input
    */
    void setSize(int size);

    /**
     * Color Setter
     * Requires: nothing
     * Modifies: Color
     * Effects: sets color to input
    */
    void setColor(string color);

    /**
     * Price Setter
     * Requires: nothing
     * Modifies: Price
     * Effects: sets price to input
    */
    void setPrice(double price);

    /**
     * Brand Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns brand
    */
    string getBrand();

    /**
     * shoe name Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns shoe name
    */
    string getShoeName();

    /**
     * size Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns size
    */
    int getSize();

    /**
     * color Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns color
    */
    string getColor();

    /**
     * price Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns price
    */
    double getPrice();



};

//child class
class BasketballShoe : public Shoe{
    //variables
protected:
    //these are out of 3
    int traction; //compenent will be used to determine if user will break someones ankles
    int impact;
    int court_feel;
    int durability;
public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: traction, impact, court_feel, durability
     * Effects: creates all variables and set to 0
    */
    BasketballShoe();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: traction, impact, court_feel, durability
     * Effects: creates all variables and set to input
    */
    BasketballShoe(int trac, int imp, int court,int dura);

    /**
     *  Traction Setter
     * Requires: nothing
     * Modifies: traction
     * Effects: sets traction to input
    */
    void setTraction(int trac);

    /**
     *  impact Setter
     * Requires: nothing
     * Modifies:impact
     * Effects: sets impact to input
    */
    void setImpact(int imp);

    /**
     * courtfeel Setter
     * Requires: nothing
     * Modifies: courtfeel
     * Effects: sets courtfeel to input
    */
    void setCourtFeel(int court);

    /**
     * durability Setter
     * Requires: nothing
     * Modifies: durability
     * Effects: sets durability to input
    */
    void setDurability(int dura);

    /**
     * traction Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns traction
    */
    int getTraction();

    /**
     *  impact Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns impact
    */
    int getImpact();

    /**
     * courtfeel Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns courtfeel
    */
    int getCourtFeel();

    /**
     * durability Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns
    */
    int getDurability();

};

//component class
class Traction{
protected:
    int bite; //random from 1-3
    int trac; //depends on shoes
    int softness; //random from 1-3
    double average;

public:
    /**
     * Default Constructor
     * Requires: nothing
     * Modifies: bite, trac, softness
     * Effects: creates all variables set to =0
    */
    Traction();

    /**
     * non-Default Constructor
     * Requires: nothing
     * Modifies: trac, bite, softness
     * Effects: sets all to inputs, and calculates shoe overall fitness
    */
    Traction(int trac);

    /**
     * Bite  Setter
     * Requires: nothing
     * Modifies: bite
     * Effects: sets bite to input
    */
    void setBite(int bit);

    /**
     * trac Setter
     * Requires: nothing
     * Modifies: trac
     * Effects: sets trac to input
    */
    void setTrac(int tra);
    /**
     * softness Setter
     * Requires: nothing
     * Modifies: softness
     * Effects: sets softness to input
    */
    void setSoftness(int Soft);

    /**
     * Bite  Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns Bite
    */
    int getBite();

    /**
     * trac Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns trac
    */
    int getTrac();

    /**
     * softness Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns softness
    */
    int getSoftness();

    /**
     * average Getter
     * Requires: nothing
     * Modifies: nothing
     * Effects: returns average
    */
    double getAverage();

};
#endif //PJ5_PLAYER_H
