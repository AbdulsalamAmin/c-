#include "../include/square.h"
#include <iostream>
#include <limits>
using namespace std;


void Square::create() {
    cout << "Enter side length of the square: ";
    while(!(cin>>side)){
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(),'\n');
        cout<<"Input invalid, please try again.";

    }
}

void Square::print() const  {
    cout << "Square with side length: " << side << endl;
}
