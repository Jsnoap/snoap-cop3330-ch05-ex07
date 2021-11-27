/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jordan Snoap
 */

#include "std_lib_facilities.h"

// Program does arithmetic and finds if there are real roots
void quadForm(double a, double b, double c)
{
    double insideSquareRoot = pow(b,2) - 4* a * c;
    double rootOne, rootTwo;
    // Check for real roots and print corresponding message/exit program if not.
    if (insideSquareRoot < 0)
    {
        cout << "For the values entered there are no real roots!\n";
        exit(1);
    }
    else 
    {
        rootOne = ((-1.0 * b) + sqrt(insideSquareRoot)) / (2 * a);
        rootTwo = ((-1.0 * b) - sqrt(insideSquareRoot)) / (2 * a);

        printf("The roots of the entered values are %.2f and %.2f\n", rootOne, rootTwo);
    }
}

// Accepts user input of a, b, and c values for the quadratic formula
int main()
{
    double a, b, c;

    cout << "Welcome to the Quadratic Formula Program!\n";
    cout << "Please enter your \"a\" value: ";
    cin >> a;

    cout << "Please enter your \"b\" value: ";
    cin >> b;

    cout << "Please enter your \"c\" value: ";
    cin >> c;

    quadForm(a,b,c);
}
