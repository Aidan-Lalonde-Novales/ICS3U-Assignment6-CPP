// Copyright (c) 2022 Aidan Lalonde-Novales All rights reserved

// Created by Aidan Lalonde-Novales
// Created on 2022-06-01
// This program calculates the volume of a square based pyramid

#include <iostream>
#include <iomanip>
#include <cmath>

float PyramidVolume(float baseEdge, float height) {
    // this function calculates volume of a square based pyramid
    float volume;

    // process
    volume = pow(baseEdge, 2) * (height / 3);

    return volume;
}


int main() {
    // this function gets input, calls a function, gives output
    std::string baseEdgeString;
    float baseEdge;
    std::string heightString;
    float height;
    float volume;

    std::cout << "This program calculates the volume " <<
    "of a square based pyramid." << std::endl;
    std::cout << "" << std::endl;

    // input
    std::cout << "Enter the length of the base edge (cm): ";
    std::cin >> baseEdgeString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightString;

    try {
        baseEdge = std::stof(baseEdgeString);
        height = std::stof(heightString);
        if (baseEdge >= 0 && height >= 0) {
            // call function
            volume = PyramidVolume(baseEdge, height);
            // output
            std::cout << std::setprecision(4) << "\nThe volume is " << volume
            << " cm³." << std::endl;
        } else {
            std::cout <<
            "\nYour numbers cannot be negative. Please try again."
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nYour numbers are invalid. Please try again."
        << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
