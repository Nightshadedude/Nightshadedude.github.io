// This program will take a number and divide it by 2.
/*
Eric Landeis
PRG218
runprob.cpp
*/

#include <iostream>
using namespace std; 

int main() 
{
    float number;
    int divider;
    divider = 2;
    
    /*
    output with divider = 0:
        Hi there
        Please input a number and then hit return
        1
        Half of your number is inf
        
    I was expecting a divide by zero error, but got an infinite error instead.
    */
    
    cout << "Hi there" << endl;
    cout << "Please input a number and then hit return" << endl;
    
    cin >> number;
    
    number = number / divider;
    cout << "Half of your number is " << number << endl;
    
    return 0; 
}