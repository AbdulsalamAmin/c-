#include <iostream>
#include <vector>
#include <memory>
#include <limits>
#include "../include/circle.h"
#include "../include/square.h"
#include "../include/rectangle.h"

int main() {
    // unique_ptr for memory management of shape
    std::vector<std::unique_ptr<Shape>> shapes;
    int choice = 0;

    // Main Loop for Displaying menu
    while(choice != 4){
        std::cout << "\nMenu:\n";
        std::cout << "1. Show shape list\n";
        std::cout << "2. Create shape\n";
        std::cout << "3. Print existing shapes\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        if(std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
        }

        switch (choice) {
        case 1:
            std::cout << "Shapes available:\n";
            std::cout << "1. Circle\n";
            std::cout << "2. Square\n";
            std::cout << "3. Rectangle\n";
            break;
        case 2: {
            int shapeChoice;
            std::cout << "Select a shape to create:\n";
            std::cout << "1. Circle\n";
            std::cout << "2. Square\n";
            std::cout << "3. Rectangle\n";
            std::cin >> shapeChoice;

            if (shapeChoice == 1) {
                std::unique_ptr<Shape>circle = std::make_unique<Circle>();
                circle->create();
                shapes.push_back(std::move(circle));
            } else if (shapeChoice == 2) {
                std::unique_ptr<Shape> square = std::make_unique<Square>();
                square->create();
                shapes.push_back(std::move(square));
            } else if (shapeChoice == 3) {
                std::unique_ptr<Shape> rectangle = std::make_unique<Rectangle>();
                rectangle->create();
                shapes.push_back(std::move(rectangle));
            } else {
                std::cout << "Invalid choice!\n";
            }
            break;
        }
        case 3:
            // printing the details all existing shapes
            std::cout << "Existing shapes:\n";
            for (const auto& shape : shapes) {
                shape->print();
            }
            break;
        case 4:
            // existing the program
            std::cout << "Exiting...\n";
            break;
        default:
            // handling invalid choice
            std::cout << "Invalid choice! Please try again.\n";
        }
    };

    return 0;
}
