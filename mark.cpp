// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: November 2019
// This is a program which converts your mark from a number to a percent..

#include <iostream>
#include <string>


int Calculations(char mark[]) {
    // this finction converts your mark

    int percent;

    // Process
    switch (mark[0]) {
        case '4' :
            if ((mark[1] == '+') && (mark[2] == '+')) {
                percent = 100;
            } else if (mark[1] == '+') {
                percent = 95;
            } else if (mark[1] == '-') {
                percent = 80;
            } else {
                percent = 87;
            }
            break;
        case '3' :
            if (mark[1] == '+') {
                percent = 77;
            } else if (mark[1] == '-') {
                percent = 70;
            } else {
                percent = 73;
            }
            break;
        case '2' :
            if (mark[1] == '+') {
                percent = 67;
            } else if (mark[1] == '-') {
                percent = 60;
            } else {
                percent = 63;
            }
            break;
        case '1' :
            if (mark[1] == '+') {
                percent = 57;
            } else if (mark[1] == '-') {
                percent = 50;
            } else {
                percent = 53;
            }
            break;
        case 'R' :
            percent = 30;
            break;
        default :
            percent = -1;
    }
    return percent;
}

main() {
    // this function gets the mark from the user

    char markAsNumber[] = "  ";
    int finalPercent = 0;

    std::cout << "Input your mark: ";
    std::cin >> markAsNumber;
    std::cout << "" << std::endl;

    // call functions
    // Process
    if (markAsNumber[1] != '+' && markAsNumber[1] != '-' &&
        markAsNumber[1] != 0) {
        finalPercent = -1;
    } else {
        finalPercent = Calculations(markAsNumber);
    }

    // Output
    if (finalPercent == -1) {
        std::cout << "Invalid number." << std::endl;
    } else {
        std::cout << "Your mark is " << finalPercent << "%" << std::endl;
    }
}
