/*
Eric Landeis
PRG218
while.cpp
*/

#include <iostream>

using namespace std;

int main()
{
    char letter = 'x'; // Exercise 3: this can be changed from a to x for a do while loop 
    
    do { //Exercise 3: changed from while loop to do..while loop
        
        /*
        Exercise 1: This program is not user friendly. Run it a few times and explain
        why.
        
        Answer: The program never gives the user the exit option, so unless 'x' is randomly
        guessed, this appears to be an infinite loop to the user.
        */
        cout << "Please enter a letter.  (Use x to exit)" << endl; //Exercise 2: Add to the code so that the program is more user friendly.
        cin >> letter;
        cout << "The letter you entered is " << letter << endl;
    } while (letter != 'x');
    
    return 0;
}