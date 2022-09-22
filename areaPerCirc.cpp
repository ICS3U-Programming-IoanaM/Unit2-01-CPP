// !/ usr / bin / env python
// Copyright(c) 2022 Ioana Marinescu All rights reserved.
// Created By : Ioana Marinescu

// Date: Sept. 21, 2022
// calculates the area and circumference of a circle with a radius of 3

#include <cmath>
#include <iostream>

int main() {
    // constants
    const int RADIUS = 3;

    // area and circumference calculations
    float area = M_PI * pow(RADIUS, 2);
    float circumference = 2 * M_PI * RADIUS;

    // prints out results
    std::cout << "For a circle with a radius of 3cm" << std::endl;
    std::cout << "The circumference is: " << area << "cm^2" << std::endl;
    std::cout << "The are is: " << circumference << "cm" << std::endl;
}
