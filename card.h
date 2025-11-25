// Joshua Oberlin
// 9-16-2025
// Header file for card class

#ifndef CARD_H
#define CARD_H

#include <string>


class Card {

private:
    std::string name;
    std::string condition; //mint, near mint, poor, etc.
    int year;
    double price;
    std::string status; //for sale, not for sale, shipped, sold

public:

    Card(std::string newname, std::string newcond, int newyear, double newprice, std::string newstatus);     //constructor

    /*
    ~Card();                                //destructor
    Card(const Card& other);                //copy constructor
    Card& operator= (const Card& other);    //copy assignment operator
    Card(Card&& other) noexcept;            //move constructor
    Card& operator=(Card&& other) noexcept; //move assignment operator

*/

    //getters

    std::string getName() {return name;}
    std::string getCondition() {return condition;}
    int getYear() {return year;}
    double getPurchasePrice() {return price;}
    std::string getStatus() {return status;}
    
    //setters

    void setName (std::string n) {name = n;}
    void setCondition(std::string c) {condition = c;}
    void setYear(int y) {year = y;}
    void setPurchasePrice(double newprice) {price = newprice;}
    void setStatus (std::string s) {status = s;}

    //other functions

    void printCard();

};



#endif