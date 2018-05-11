// This program will output the circumference and area
// of the circle with a given radius.

/*
Eric Landeis
PRG218
rectanglearea.cpp
*/

#include <iostream>
using namespace std;

const int LENGTH = 8;
const int WIDTH = 3;

int main(){
    int area; // definition of area of rectangle
    
    int perimeter; // definition of circumference
    
    perimeter = (2 * LENGTH) + (2 * WIDTH); // computes perimeter
    
    area = LENGTH * WIDTH; // computes area
 
    cout << "The area of the rectangle is " << area << endl; // Exercise 2   
    cout << "The perimeter of the rectangle is " << perimeter << endl; // Exercise 2
    
    return 0; 
}