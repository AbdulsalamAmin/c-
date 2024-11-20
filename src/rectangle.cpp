#include "../include/rectangle.h"
#include <iostream>
#include <limits>
using namespace std;


void Rectangle::create(){
    cout<<"Enter height of the Rectangle: ";
    while(!(cin>>height)){
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout<<"Input invalid, please try again.";

    }
    cout<<"Enter width of the Rectangle: ";
    while(!(cin>>width)){
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout<<"Input invalid, please try again.";

    }
}
void Rectangle::print() const{
    cout<<"Rectangle with height: "<<height<<" and width: "<<width<<endl;

}
