// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: November 2019
// This program converts Celsius to Farenheight

#include <iostream>

void conversion() {
    // This function converts Celsius to Farenheight

    float Tf;
    float Tc;

    // Input
    std::cout << "Enter a temperature in Celsius to convert: ";
    std::cin >> Tc;

    // Process
    Tf = (9.0/5.0)*Tc+32;

    // Output
    std::cout << "This temperature in Farenheight is: "<< Tf << "°"
              << std::endl;
}

main() {
    // This function calls other functions

    // Call function
    conversion();
}
