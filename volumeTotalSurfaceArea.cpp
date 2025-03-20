// Copyright (c) Year Your Name All rights reserved.
// .
// Created by: Boluwatife dada
// Date: march 17, 2025
// This program calculates the volume and total surface area of a rectangular prism

#include <iostream>

int main() {
    std::cout << "Hello, i will calculate the volume and total surface area of a rectangular prism";
    std::cout << "\nwould you like me to calculate the volume and total surface area of a rectangular prism";

    float length;
    std::cout << "\nwhat is the length?: ";
    std::cin >> length;
    float width;
    std::cout << "what is the width?: ";
    std::cin >> width;
    float height;
    std::cout << "what is the height?: ";
    std::cin >> height;

    float area = 2 * ((width * length) + (height * length) + (height * width));
    float volume = width * height * length;

    std::cout << "\nThe volume is " << volume;
    std::cout << "\nThe area is " << area;
}