// This program displays a hot beverage menu and prompts the user to
// make a selection. A switch statement determines which item the user
// has chosen. A do-while loop repeats until the user selects item E
// from the menu.

/*
Eric Landeis
PRG218
dowhile.cpp
*/


/*
Exercise 1: Fill in the indicated code to complete the above program. Then
compile and run the program several times with various inputs. Try all the
possible relevant cases and record your results.
***Completed missing code

Exercise 2: What do you think will happen if you do not enter A, B, C, D
or E? Try running the program and inputting another letter.
***It returns the invalid text "The choice was invalid. Try again please."

Exercise 3: Replace the line
if (validBeverage == true)
with the line
if (validBeverage)
and run the program again. Are there any differences in the execution of
the program? Why or why not?
***Therer is no difference in the execution.  If validBeverage is false,
then (false == true) evaluates to false, just as false evaluates to false.
This is the same for true, so either way is acceptable.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number; // Fill in the code to define an integer variable called number,
    float cost; // a floating point variable called cost,
    char beverage; // and a character variable called beverage
    bool validBeverage;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        cout << endl << endl;
        cout << "Hot Beverage Menu" << endl << endl;
        cout << "A: Coffee $1.00" << endl;
        cout << "B: Tea $ .75" << endl;
        cout << "C: Hot Chocolate $1.25" << endl;
        cout << "D: Cappuccino $2.50" << endl << endl << endl;
        cout << "Enter the beverage A,B,C, or D you desire" << endl;
        cout << "Enter E to exit the program" << endl << endl;
        cin >> beverage; // Fill in the code to read in beverage
        switch(beverage)
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D': validBeverage = true;
            break;
            default: validBeverage = false;
        }
        if (validBeverage)
        {
            cout << "How many cups would you like?" << endl;
            cin >> number; // Fill in the code to read in number
        }

        // Fill in the code to begin a switch statement that is controlled by beverage
        switch(beverage)
        {
            case 'a':
            case 'A': cost = number * 1.0;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for tea ( $0.75 a cup)
            case 'b':
            case 'B': cost = number * .75;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for hot chocolate ($1.25 a cup)
            case 'c':
            case 'C': cost = number * 1.25;
            cout << "The total cost is $ " << cost << endl;
            break;

            // Fill in the code to give the case for cappuccino ($2.50 a cup)
            case 'd':
            case 'D': cost = number * 2.5;
            cout << "The total cost is $ " << cost << endl;
            break;

            case 'e':
            case 'E': cout << " Please come again" << endl;
            break;
            default:cout << "The choice was invalid.";// Fill in the code to write a message
            // indicating an invalid selection.
            cout << " Try again please." << endl;
        }
    } while(toupper(beverage) != 'E');// Fill in the code to finish the do-while statement with the
    // condition that beverage does not equal E or e.
    
    return 0;// Fill in the appropriate return statement
}