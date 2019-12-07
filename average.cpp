// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program gets 10 random numbers then finds the average using an array

#include <iostream>
#include <ctime>


int main() {
    // This function gets random numbers then finds the average using an array

    // Random number seed
    unsigned int seed = time(NULL);

    // Variables and arrays
    int Number;
    int sum = 0;
    float average;
    int ListArray[10];

    // Process
    for (int repeater = 0; repeater < 10; repeater++) {
        Number = rand_r(&seed) % 100;
        std::cout << "Random Number " << repeater << " is " << Number
                  << std::endl;
        ListArray[repeater] = Number;
        sum = sum + ListArray[repeater];
    }

    average = sum/10.0;

    // Output
    std::cout << "The average of the numbers is: " << average << std::endl;
}
