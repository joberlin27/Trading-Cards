// Joshua Oberlin
// 9-16-2025
// CPP file for Card class

#include "card.h"
#include <iostream>
#include <string>



Card::Card(std::string newname, std::string newcond, int newyear, double newprice, std::string newstatus){

    name = newname;
    condition = newcond;
    year = newyear;
    price = newprice;
    status = newstatus;

}

void::Card::printCard(){

    std::cout<<"Printing card info..."<<std::endl;
    std::cout<<"Card name: "<<name<<std::endl;
    std::cout<<"Condition: "<<condition<<std::endl;
    std::cout<<"Year released: "<<year<<std::endl;
    std::cout<<"Price: "<<price<<std::endl;
    std::cout<<"Status: "<<status<<std::endl;;

    std::cout<<"Print complete!"<<std::endl;
}
