/**
*
* \file     main.cpp, Header.h, Counter.cpp
* \author   Cyrus Lomibao
* \class    Computer Programming I, CIT-1154-C02
* \date     2018-12-03
* \brief    Program that works the same way as a Grocery Store Counter
*
* This Little Red Counter/Grocery Store Counter program is documented
*
*  Pre-Condition: User enters a button indicated in the button list.
*
*  Post-Condition: This program has a built-in class that adds a unit of digit(money)
*                  based on the button entered by the user. It will keep adding units
*                  until the counter reaches $99.99, which will make the counter tell
*                  the user to reset it and start from $0.00.
*
**/

#include "Header.h"
#include <iostream>
#include <ostream>
#include <cmath>
#include <cstdlib>

Counter:: Counter(double numerals)
    {
        digit = 0.00;
        total = numerals;
    }
// incr1, incr10, incr100, incr1000 member functions which serves as the mutator functions for Counter class
void Counter:: incr1()
    {
        digit += 0.01;
    }


void Counter:: incr10()
    {
        digit += 0.10;
    }


void Counter:: incr100()
    {
        digit += 01.00;
    }


void Counter:: incr1000()
    {
        digit += 10.00;
    }

// overflow member function that determines if digit has passsed over argument which is $99.99
bool Counter:: overflow()
    {
        bool full;

        if(digit > total)
            {
                return full = true;
            }
        else
            {
                return full = false;
            }
    }

// reset member function which gets the counter to start from $0.00
void Counter:: reset()
    {
        digit = 0.00;
    }

// amount member function that serves as the accessor function for Counter class
double Counter:: amount()
    {
        return digit;
    }
