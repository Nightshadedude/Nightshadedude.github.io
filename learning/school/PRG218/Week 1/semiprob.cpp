// This program demonstrates a compile error.
/*
Eric Landeis
PRG218
semiprob.cpp
*/

#include <iostream>
using namespace std; 

int main() 
{
    int number;
    float total;

    cout << "Today is a great day for Lab"; // missing semicolon added
    
    /* missing semicolon from after Lab" caused the following error:
        semiprob.cpp: In function ‘int main()’:
        semiprob.cpp:17:5: error: expected ‘;’ before ‘cout’
            cout << endl << "Let's start off by typing a number of your choice" << endl;
            ^
    */
    
    cout << endl << "Let's start off by typing a number of your choice" << endl;

    cin >> number;

    total = number * 2;

    cout << total << " is twice the number you typed" << endl;

    return 0;
}