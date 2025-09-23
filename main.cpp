// Joshua Oberlin
// 9-16-2025
// main.cpp file for trading cards project

#include "card.h"
#include <iostream>
#include <string>

int main(){

    std::cout<<"Welcome to the Trading Card collection tool"<<std::endl;

    Card newcard;

    newcard.printCard();

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