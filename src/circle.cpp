#include "../include/circle.h"
#include <iostream>
#include<limits>


// Circle Class that inherits from Shape

void Circle::create(){
    std::cout << "Enter radius of the circle: ";
    while(!(std::cin>>radius)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        std::cout<<"Input invalid, please try again.";

        }

}

void Circle::print() const{
        std::cout << "Circle with radius: " << radius <<std::endl;
}

