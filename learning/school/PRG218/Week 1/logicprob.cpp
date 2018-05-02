// This program takes two values from the user and then swaps them
// before printing the values. The user will be prompted to enter
// both numbers.
/*
Eric Landeis
PRG218
logicprob.cpp
*/

#include <iostream>
using namespace std;

int main()
{
    float firstNumber;
    float secondNumber;
    
    // Prompt user to enter the first number.
    cout << "Enter the first number" << endl;
    cout << "Then hit enter" << endl;
    cin >> firstNumber;
    
    // Prompt user to enter the second number.
    cout << "Enter the second number" << endl;
    cout << "Then hit enter" << endl;
    cin >> secondNumber;
    
    // Echo print the input.
    cout << endl << "You input the numbers as " << firstNumber << " and " << secondNumber << endl;
    
    // Now we will swap the values.
    firstNumber = secondNumber;
    secondNumber = firstNumber;
    /*Output after first run:
        Enter the first number
        Then hit enter
        1
        Enter the second number
        Then hit enter
        2
        You input the numbers as 1 and 2
        After swapping, the values of the two numbers are 2 and 2
        
    Logic error is because a temp variable is needed to hold the first number's
    value so it can be placed into the secondNumber variable.  Example:
    float tempNumber;
    tempNumber = firstNumber;
    firstNumber = secondNumber;
    secondNumber = tempNumber;
    */
    

    // Output the values.
    cout << "After swapping, the values of the two numbers are " << firstNumber << " and " << secondNumber << endl;
    
    return 0;
}