// Copyright (c) 2019 Navin Baleko All rights reserved.
//
// Created by: Navin Balekomebole
// Created on: Feb 2022
// This program uses a 2D array

#include <iostream>
#include <time.h>


template <int rows, int cols>
int sumOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function adds up all the elements in  a 2D array

    int total = 0;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }

    return total;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    int sum = 0;
    const int rows = 2;
    const int columns = 5;
    int a2DArray[rows][columns];

    srand(time(NULL));

    // input

    // So, ...
    //   In C++ you can't define array's size using variable.
    //   this is why you see const int rows = 2; above,
    //   so the size of the array can never change

    for(int rowElement = 0; rowElement < rows; rowElement++) {
        for(int columnElement = 0; columnElement < columns; columnElement++ ) {
            aSingleRandomNumber = (rand() % 10) + 1;
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << ", ";
        }
        std::cout << std::endl;
    }

    sum = sumOfNumbers(a2DArray);
    std::cout << "The sum of all the numbers is: " << sum << std::endl;

}