#include "../include/square.h"
#include <iostream>
#include <limits>


void Square::create() {
    std::cout << "Enter side length of the square: ";
    while(!(std::cin>>side)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input invalid, please try again.";

    }
}

void Square::print() const  {
    std::cout << "Square with side length: " << side << std::endl;
}
