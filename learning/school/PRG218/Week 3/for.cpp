// This program has the user input a number n and then finds the
// mean of the first n positive integers


/*
Eric Landeis
PRG218
for.cpp
*/

/*
Exercise 1: Why is the typecast operator needed to compute the mean in the
statement mean = static_cast(float)(total)/value;? What do you think
will happen if it is removed? Modify the code and try it. Record what happens.
Make sure that you try both even and odd cases. Now put static_cast<float>
total back in the program.
***With casting: The mean average of the first 4 positive integers is 2.5
Without casting: The mean average of the first 4 positive integers is 2


Exercise 2: What happens if you enter a float such as 2.99 instead of an integer
for value? Try it and record the results.
***The int only takes the integer part of the number and drops anything after the decimal
1.99
The mean average of the first 1 positive integers is 1
3.14
The mean average of the first 3 positive integers is 2
99.9999999
The mean average of the first 99 positive integers is 50

Exercise 3: Modify the code so that it computes the mean of the consecutive
positive integers n, n+1, n+2, . . . , m, where the user chooses n and m.
For example, if the user picks 3 and 9, then the program should find the
mean of 3, 4, 5, 6, 7, 8, and 9, which is 6.
*/
#include <iostream>
using namespace std;
int main()
{
    int value; // value is some positive number n
    int total = 0; // total holds the sum of the first n positive numbers
    int number; // the amount of numbers
    float mean; // the average of the first n positive numbers
    cout << "Please enter a positive integer" << endl;
    cin >> value;
    if (value > 0)
    {
        for (number = 1; number <= value; number++)
        {
            total = total + number;
        } // curly braces are optional since there is only one statement
        mean = static_cast<float>(total) / value; // note the use of the typecast
        // operator here
        cout << "The mean average of the first " << value
        << " positive integers is " << mean << endl;
    }
    else
    cout << "Invalid input - integer must be positive" << endl;
    return 0;
}
