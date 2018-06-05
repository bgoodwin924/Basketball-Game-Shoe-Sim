//
// Created by might on 3/20/2018.
//

#include "Player.h"

//Player is created
Player::Player() {
    first_name="";
    last_name="";
    number=0;
    skill=0;
}

//Player is created and given name and number
Player::Player(string firstname, string lastname, int num) {
    first_name=firstname;
    last_name=lastname;
    number=num;
    srand(time(NULL));
    int min = 0;
    int max = 100;
    skill = (min + (rand() % (int)(max - min + 1)));
    //cout<<skill<<endl;

}

//sets first name
void Player::set_first_name(string player_first_name) {
    first_name=player_first_name;
}

//sets last name
void Player::set_last_name(string player_last_name) {
    last_name=player_last_name;
}

//sets number
void Player::set_number(int player_number) {
    number=player_number;
}

void Player::set_skill(int ski) {
    skill=ski;
}
//gets first name
string Player::get_first_name() {
    return first_name;
}

//gets last name
string Player::get_last_name() {
    return last_name;
}

//gets number
int Player::get_number() {
    return number;
}

int Player::get_skill() {
    return skill;
}

Shoe::Shoe(){
    brand="";
    shoe_name="";
    size=0;
    color="Green";
    price=0.0;
}

Shoe::Shoe(string bran, string shoename, int siz, string col, double cost){
    brand=bran;
    shoe_name=shoename;
    size=siz;
    color=col;
    price=cost;
}

void Shoe::setBrand(string bran){
    brand=bran;
}

void Shoe::setShoeName(string name){
    shoe_name=name;
}

void Shoe::setSize(int siz){
    size=siz;
}

void Shoe::setColor(string col){
    color=col;
}

void Shoe::setPrice(double cost){
    price=cost;
}

string Shoe::getBrand(){
    return brand;
}

string Shoe::getShoeName(){
    return shoe_name;
}

int Shoe::getSize(){
    return size;
}

string Shoe::getColor(){
    return color;
}

double Shoe::getPrice(){
    return price;
}

BasketballShoe::BasketballShoe() {
    traction=0;
    impact=0;
    court_feel=0;
    durability=0;
}


BasketballShoe::BasketballShoe(int trac, int imp, int court,int dura){
    traction=trac;
    impact=imp;
    court_feel=court;
    durability=dura;
}

void BasketballShoe::setTraction(int trac){
    traction=trac;
}
void BasketballShoe::setImpact(int imp){
    impact=imp;
}
void BasketballShoe::setCourtFeel(int court){
    court_feel=court;
}
void BasketballShoe::setDurability(int dura){
    durability=dura;
}
int BasketballShoe::getTraction(){
    return traction;
}
int BasketballShoe::getImpact(){
    return impact;
}
int BasketballShoe::getCourtFeel(){
    return court_feel;
}
int BasketballShoe::getDurability(){
    return durability;
}

Traction::Traction(){
    bite=0;
    softness=0;
    trac=0;
}
Traction::Traction(int tra){
    trac=tra;
    int min = 1;
    int max = 3;
    bite = (min + (rand() % (int)(max - min + 1)));
    softness = (min + (rand() % (int)(max - min + 1)));
    average=(bite+softness+trac)/3;
}

void Traction::setBite(int bit){
    bite=bit;
}
void Traction::setTrac(int tra){
    trac=tra;
}
void Traction::setSoftness(int Soft){
    softness=Soft;
}
int Traction::getBite(){
    return bite;
}
int Traction::getTrac(){
    return trac;
}
int Traction::getSoftness(){
    return softness;
}
double Traction::getAverage(){
    return average;
}