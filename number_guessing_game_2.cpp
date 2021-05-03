// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Mon/May3/2021
// This program a Number Guessing Game


#include <iostream>
#include <random>


int main() {
    // this function checks if the number guessed is correct or wrong

    int guessedNumber;
    int someRandomNumber;

    std::cout << "hey,guess the number if you can!\n" << std::endl;

    // input
    std::cout << "Enter the number between 0 - 9:"
    << std::endl;
    std::cin >> guessedNumber;

    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0,9]
    someRandomNumber = idist(rgen);

    std::cout << someRandomNumber << std::endl;

    // process & output
    if (guessedNumber == someRandomNumber) {
        // output
        std::cout << "You guessed correct!" << std::endl;
    } else {
        // output
        std::cout << "You guessed wrong!" << std::endl;
    }



     std::cout << "\n\nDone." << std::endl;
}
