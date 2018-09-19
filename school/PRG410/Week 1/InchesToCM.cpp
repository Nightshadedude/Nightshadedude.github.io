//Convert Feet and Inches to CM

#include<iostream>

using namespace std;

const double CENTIMETERS_PER_INCH = 2.54;

const int INCHES_PER_FOOT = 12;

int main()
{
    int feet, inches;
    int totalInches;
    double centimeter;
    
    cout << "Enter two integers, one for feet and one for inches: ";
    cin >> feet >> inches;
    cout << endl;
    
    cout << "The numbers you entered are " << feet
    << " feet and " << inches << " inches." << endl;
    
    totalInches = feet * INCHES_PER_FOOT + inches;
    
    cout << "The total number of inches is " << totalInches << " inches." << endl;
    
    centimeter = CENTIMETERS_PER_INCH * totalInches;
    
    cout << "The total number of centimeters is " << centimeter
    << " centimeters." << endl;
    
	return 0;
}