// This program illustrates the use of a sentinel in a while loop.
// The user is asked for monthly rainfall totals until a sentinel
// value of -1 is entered. Then the total rainfall is displayed.

/*
Eric Landeis
PRG218
while.cpp
*/

/*
Exercise 4: Complete the program above by filling in the code described in the
statements in bold so that it will perform the indicated task.
**Completed inline per comments. 

Exercise 5: Run the program several times with various input. Record your
results. Are they correct? What happens if you enter –1 first? What happens
if you enter only values of 0 for one or more months? Is there any numerical
data that you should not enter?
**

Exercise 6: What is the purpose of the following code in the program above?
if (month == 1)
cout << "No data has been entered" << endl;
*/


#include <iostream>

using namespace std;

int main()
{
    // Fill in the code to define and initialize to 1 the variable month
    float total = 0, rain, month = 1;
    
    cout << "Enter the total rainfall for month " << month << endl;
    cout << "Enter -1 when you are finished" << endl;
    cin >> rain;// Fill in the code to read in the value for rain
    // Fill in the code to start a while loop that iterates
    // while rain does not equal -1
    while(rain != -1)
    {
        total += rain; // Fill in the code to update total by adding it to rain
        month++; // Fill in the code to increment month by one
        cout << "Enter the total rainfall in inches for month " << month << endl;
        cout << "Enter -1 when you are finished" << endl;
        // Fill in the code to read in the value for rain
    }
    
    if (month == 1)
    cout << "No data has been entered" << endl;
    else
    cout << "The total rainfall for the " << month-1<< " months is "<< total << " inches." << endl;
    
    return 0;
}