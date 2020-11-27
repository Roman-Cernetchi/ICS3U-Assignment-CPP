// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Sep 2019
// This program calculates the area of a pentagon

#include <iostream>
#include <cmath>

int main() {
    // Declaring variables
    int base;
    int height;
    float area;

    // input
    std::cout << "Finding surface area of a pentagon. " << std::endl;
    std::cout << "Enter the base of the pentagon (cm): ";
    std::cin >> base;
    std::cout << "Enter the height of the pentagon (cm): ";
    std::cin >> height;

    // process
    area = (0.5)*base*height;

    // output
    std::cout << "" << std::endl;
    std::cout << "The area is " << (area) << "cm^2" << std::endl;
}
