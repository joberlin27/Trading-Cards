// Joshua Oberlin
// 9-16-2025
// CPP file for Card class

#include "card.h"
#include <iostream>
#include <string>



Card::Card(){
    std::cout<<"Constructor test"<<std::endl;
    
    std::cout<<"Name of card?"<<std::endl;
    std::cin>>name;

    std::cout<<"Type of card?"<<std::endl;
    std::cin>>type;

    std::cout<<"What's the card's condition?"<<std::endl;
    std::cin>>condition;

    std::cout<<"How rare is the card?"<<std::endl;
    std::cin>>rarity;

    std::cout<<"What year was the card published?"<<std::endl;
    std::cin>>year;

    std::cout<<"How much was the card purchased for?"<<std::endl;
    std::cin>>purchase_price;

    std::cout<<"How much will the card sell for?"<<std::endl;
    std::cin>>asking_price;

    std::cout<<"What style is the card?"<<std::endl;
    std::cin>>style;

    std::cout<<"What's the card's listing status?"<<std::endl;
    std::cin>>status;

    std::cout<<"What's the grading of the card?"<<std::endl;
    std::cin>>grade;

    std::cout<<"What day was the card acquired?"<<std::endl;
    std::cin>>date_added;

    std::cout<<"Any notes?"<<std::endl;
    std::cin>>notes;

}

void::Card::printCard(){

    std::cout<<"Printing card info..."<<std::endl;

    std::cout<<"Card name: "<<name<<std::endl;
    std::cout<<"Type: "<<type<<std::endl;
    std::cout<<"Condition: "<<condition<<std::endl;
    std::cout<<"Rarity: "<<rarity<<std::endl;
    std::cout<<"Year released: "<<year<<std::endl;
    std::cout<<"Purchase price: "<<purchase_price<<std::endl;
    std::cout<<"Asking price: "<<asking_price<<std::endl;
    std::cout<<"Style: "<<style<<std::endl;
    std::cout<<"Status: "<<status<<std::endl;
    std::cout<<"Grade: "<<grade<<std::endl;
    std::cout<<"Date purchased"<<date_added<<std::endl;
    std::cout<<"Notes"<<notes<<std::endl;

    std::cout<<"Print complete!"<<std::endl;
}
