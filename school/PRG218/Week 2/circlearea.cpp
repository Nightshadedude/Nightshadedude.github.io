// This program will output the circumference and area
// of the circle with a given radius.

/*
Eric Landeis
PRG218
circleapp.cpp
*/

#include <iostream>
using namespace std;

const double PI = 3.14;
const double RADIUS = 5.4;

int main(){
    int area; // definition of area of circle
    
    int circumference; // definition of circumference
    
    circumference = 2 * PI * RADIUS; // computes circumference
    
    area = PI * RADIUS * RADIUS; // computes area
    
    // Fill in the code for the cout statement that will output (with description)
    // the 
    cout << "Circumference = " << circumference << endl; // Exercise 2
    
    // Fill in the code for the cout statement that will output (with description)
    // the area of the circle
    cout << "Area = " << area << endl; // Exercise 2

    /* Exercise 3
    As floats:
    Circumference = 33.912
    Area = 91.5624
    
    As ints:
    Circumference = 33
    Area = 91
    */
    
    return 0; 
}