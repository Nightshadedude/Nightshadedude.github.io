// This program will write the name, address and telephone
// number of the programmer.

/*
Eric Landeis
PRG218
name.cpp
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName = "First";
    string lastName = "Last";
    string streetAddress = "123 Main Street";
    string city = "Some City";
    string state = "ST";
    string zip = "00000";
    string mdn = "000-000-0000";

    // Fill in this space to write your first and last name
    cout << "Programmer: " << firstName << " " << lastName << endl;
    
    // Fill in this space to write your address (on new line)
    // Spacing for Exercise 3
    // cout << "Street address: " << streetAddress << endl;
    cout << "            " << streetAddress << endl;
    
    // Fill in this space to write you city, state and zip (on new line)
    // Extra new line for Exercise 2
    // cout << "City, ST, Zip: " << city << ", " << state << ", " << zip << endl << endl;
    cout << "            " << city << ", " << state << ", " << zip << endl << endl;
    
    // Fill in this space to write your telephone number (on new line)
    cout << "     Phone: " << mdn << endl;
    
    return 0;
}