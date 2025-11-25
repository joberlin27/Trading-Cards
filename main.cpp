// Joshua Oberlin
// 9-16-2025
// main.cpp file for trading cards project

#include "card.h"
#include <iostream>
#include <string>

int main(){

    std::cout<<"Welcome to the trading card collection tool thing"<<std::endl;

    std::cout<<"Add new card? y/n"<<std::endl;
    char answer;
    std::cin>>answer;

    if (answer == 'y'){

        //DECLARATION

        std::string name;
        std::string condition; //mint, near mint, poor, etc.
        int year;
        double price;
        std::string status; //for sale, not for sale, shipped, sold

        //INPUT

        std::cout<<"Name of the card?"<<std::endl;
        std::getline(std::cin, name);

        std::cout<<"What is the card's condition?"<<std::endl;
        std::getline(std::cin, condition);

        std::cout<<"What year was the card published?"<<std::endl;
        std::cin>>year;

        std::cout<<"Price of the card?"<<std::endl;
        std::cin>>price;

        std::cout<<"What is the card's status?"<<std::endl;
        std::getline(std::cin, status);

        Card newCard(name, condition, year, price, status);



    }



    



    //newcard.printCard();

}


/*TODO

- Type of file to save the cards to. json? sql light?

- Workarounds for std::cin getline

- Data type to store cards when reading from the file or input. Vector? (X)

- How to read data from a file, modify it, then overwrite file. (pending file choice)

- Other features to implement that are relevant to array v2 (namespaces, lambdas)

- Useful libraries - Qt?

THE BIG FIVE: copy, move constructor, move assignment operator, copy assignment 

*/