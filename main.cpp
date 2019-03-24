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

// Must include the following include libraries for program to function
#include "Header.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    Counter clicker(99.99);
    char button;
    bool isDone = false;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << endl <<"Little Red Counter Program" << endl;
    cout << "by Cyrus Lomibao" << endl;
    cout << endl;

    // Prompt for user to enter a button based on the list of buttons presented
    cout << "Button List:" << endl;
    cout << "-----------" << endl;
    cout << "A - Penny" << endl;
    cout << "B - Dimes" << endl;
    cout << "C - Dollar" << endl;
    cout << "D - Tens of Dollars" << endl;
    cout << "E - Reset" << endl;
    cout << "F - Exit" << endl;
    cout << endl;

    // Program outputs starting point of Counter then asks for a button
    cout << "Money spent: $" << setw(5) << setfill('0') << clicker.amount() << endl;
    cout << endl;

    // do-while loop which keeps on looping as long as user enters letters other than F/f.
    do{

            cout << "Press a button: " << endl;
            cin >> button;

            // Switch branches which will add units of numbers based on the users button choice
            switch(button)
                {
                    case 'A':
                    case 'a':
                        {
                            // After incrementing, program then runs through an if-else statement where it checks the member function "overflow"
                            // and processes if the counter has went over its limit
                            clicker.incr1();
                            if (clicker.overflow())
                                {
                                    cout << "You have surpassed the counter limit!" << endl;
                                    cout << "Press E to reset the counter." << endl;
                                    cout << endl;
                                }

                            else
                                {
                                    cout << "Money spent: $" << setw(5) << setfill('0') << clicker.amount() << endl << endl;

                                }
                            break;
                        }
                    case 'B':
                    case 'b':
                        {
                            clicker.incr10();
                            if (clicker.overflow())
                                {
                                    cout << "You have surpassed the counter limit!" << endl;
                                    cout << "Press E to reset the counter." << endl;
                                    cout << endl;
                                }

                            else
                                {
                                    cout << "Money spent: $" << setw(5) << setfill('0') << clicker.amount() << endl << endl;
                                }
                            break;
                        }
                    case 'C':
                    case 'c':
                        {
                            clicker.incr100();
                            if (clicker.overflow())
                                {
                                    cout << "You have surpassed the counter limit!" << endl;
                                    cout << "Press E to reset the counter." << endl;
                                    cout << endl;
                                }

                            else
                                {
                                    cout << "Money spent: $" << setw(5) << setfill('0') << clicker.amount() << endl << endl;
                                }
                            break;
                        }
                    case 'D':
                    case 'd':
                        {
                            clicker.incr1000();
                            if (clicker.overflow())
                                {
                                    cout << "You have surpassed the counter limit!" << endl;
                                    cout << "Press E to reset the counter." << endl;
                                    cout << endl;
                                }

                            else
                                {
                                    cout << "Money spent: $" << setw(5) << setfill('0') << clicker.amount() << endl << endl;
                                }
                            break;
                        }
                    case 'E':
                    case 'e':
                        {
                            // Pressing E will cause the program to start from $0.00
                            clicker.reset ();
                            cout << endl << "Counter cleared!" << endl << endl;
                            break;
                        }
                    case 'F':
                    case 'f':
                        {
                            isDone = true;
                            break;
                        }

                }

     // do-while loop will exit when 'F' is entered
    }while(!isDone);

    cout << endl << "Thank you for using the Little Red Counter!" << endl;

    return 0;

}
