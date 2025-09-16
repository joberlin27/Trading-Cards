// Joshua Oberlin
// 9-16-2025
// Header file for card class

#ifndef CARD_H
#define CARD_H

#include <string>


class Card {

private:
    std::string name;
    std::string type; //pokemon, baseball, etc.
    std::string condition; //mint, near mint, poor, etc.
    std::string rarity;     //rare, common, etc.
    int year;
    double purchase_price;
    double asking_price;
    std::string style;  //holo, reverse holo
    std::string status; //for sale, not for sale, shipped, sold
    int grade;
    std::string date_added;
    std::string notes;

public:

    //getters
    std::string getName() {return name;}
    std::string getType() {return type;}
    std::string getCondition() {return condition;}
    std::string getRarity() {return rarity;}
    int getYear() {return year;}
    double getPurchasePrice() {return purchase_price;}
    double getAskingPrice() {return asking_price;}
    std::string getStyle() {return style;}
    std::string getStatus() {return status;}
    int getGrade() {return grade;}
    std::string getDate() {return date_added;}
    std::string getNotes() {return notes;}
    
    //setters
    void setName (std::string n) {name = n;}
    void setType (std::string t) {type = t;}
    void setCondition(std::string c) {condition = c;}
    void setRarity(std::string r) {rarity = r;}
    void setYear(int y) {year = y;}
    void setPurchasePrice(double pp) {purchase_price = pp;}
    void setAskingPrice(double ap) {asking_price = ap;}
    void setStyle (std::string s) {style = s;}
    void setStatus (std::string s) {status = s;}
    void setGrade (int g) {grade = g;}
    void setDate (std::string d) {date_added = d;}
    void setNotes (std::string n) {notes = n;}
    

};

























#endif