#include "../include/circle.h"
#include <iostream>
#include<limits>
using namespace std;


// Circle Class that inherits from Shape

void Circle::create(){
    cout << "Enter radius of the circle: ";
    while(!(cin>>radius)){

        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout<<"Input invalid, please try again.";

        }

}

void Circle::print() const{
        cout << "Circle with radius: " << radius << endl;
}

