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
**Completed
//Run 1
Month:input
1:1
2:2
3:3
4:-1
The total rainfall for the 3 months is 6 inches.
//Run 2
1:-1
No data has been entered
//Run 3
1:0
2:0
3:0
4:0
5:3
6:-1
The total rainfall for the 5 months is 3 inches.
//Run 4 - bad inputs
1:-2
2:2
3:A <-Caused infinte loop, last output before process killed was:
Enter -1 when you are finished
Enter the total rainfall in inches for month 68233
//Run 5 - bad inputs 
1:999999999999999999999999999999999999999
^caused another infinte loop due to exceeding the float's capacity
(3.40282e+38:1.17549e-38 per "cout << std::numeric_limits<float>::max() << ":"<< std::numeric_limits<float>::min() << endl;")

Exercise 6: What is the purpose of the following code in the program above?
if (month == 1)
cout << "No data has been entered" << endl;
**This is for when the program is exited (-1 on initial rainfall amount)
prior to any input.  Since month is initialized at 1, if nothing is entered, this
line catches the 1 and outputs that there was no rainfall data.

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
        cin >> rain;// Fill in the code to read in the value for rain
    }
    
    if (month == 1)
    cout << "No data has been entered" << endl;
    else
    cout << "The total rainfall for the " << month-1<< " months is "<< total << " inches." << endl;
    
    return 0;
}