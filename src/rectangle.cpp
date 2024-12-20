#include "../include/rectangle.h"
#include <iostream>
#include <limits>


void Rectangle::create(){
    std::cout<<"Enter height of the Rectangle: ";
    while(!(std::cin>>height)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input invalid, please try again.";

    }
    std::cout<<"Enter width of the Rectangle: ";
    while(!(std::cin>>width)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input invalid, please try again.";

    }
}
void Rectangle::print() const{
    std::cout<<"Rectangle with height: "<<height<<" and width: "<<width<<std::endl;

}
