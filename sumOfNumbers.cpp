// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Nov 5, 2023
// This program will ask the user
// for a integer and it will tell them the sum
// of all the numbers added to it with try catch

#include <iostream>
#include <string>

int main() {
    // Declare userNumString
    std::string userNumString;

    // initialize counter and sum variables
    int counter = 0;
    int sum = 0;

    // Get the userNumString and display a message about the program
    std::cout << "This program will ask the user";
    std::cout << " for a integer and it will tell them the sum";
    std::cout << " of all the numbers added to it.";
    std::cout << "\nEnter your integer: ";
    std::cin >>
        userNumString;

    try {
        // Convert userNumString to int
        int userNumInt = std::stoi(userNumString);

        // check if user number is negative
        if (userNumInt < 0) {
            // display that user number is not positive
            std::cout << userNumInt << " is not a positive int." << std::endl;

        } else {
            while (counter <= userNumInt) {
                // calculate sum
                sum = sum + counter;
                // increment counter
                counter = counter + 1;

                // display how may times it loops
                std::cout << "The loop ran " << counter
                << " times." << std::endl;
            }

            // display sum
            std::cout << "\nThe sum of the numbers from 0 to "
            << userNumInt << " = " << sum << std::endl;
        }
    } catch (std::invalid_argument) {
        // Display that the user int was not valid

        std::cout << userNumString << " is not a valid integer." << std::endl;
    }
}
