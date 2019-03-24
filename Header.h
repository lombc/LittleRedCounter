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
#include <iostream>
#include <ostream>
#include <cmath>

#ifndef header_h
#define header_h


class Counter
    {
        public:
            Counter(double numerals); // Default constructor

            void reset();
            double amount();
            bool overflow();

            void incr1();       // Increments digit by 0.01
            void incr10();      // Increments digit by 0.10
            void incr100();     // Increments digit by 1.00
            void incr1000();    // Increments digit by 10.00

        private:
            double digit;   // Numerical variables are made private so that programmers can only access it through use of member functions
            double total;


    };

#endif
