// This program demonstrates the use of characters and strings
/*
Eric Landeis
PRG218
stringchar.cpp
*/
 
 
#include <iostream>
#include <string>

using namespace std; 

// Definition of constants
const string FAVORITESODA = "Dr. Dolittle"; // use double quotes for strings
const char BESTRATING = 'A'; // use single quotes for characters 

int main() {
    char rating, expertRating; // 2nd highest product rating
    string favoriteSnack; // most preferred snack
    int numberOfPeople; // the number of people in the survey
    int topChoiceTotal; // the number of people who prefer the top choice 
    
    // Fill in the code to do the following:
    favoriteSnack = "crackers"; // Assign the value of "crackers" to favoriteSnack
    rating = 'B'; // Assign a grade of 'B' to rating
    expertRating = 'A';
    numberOfPeople = 250; // Assign the number 250 to the numberOfPeople
    topChoiceTotal = 148; // Assign the number 148 to the topChoiceTotal 
    
    /*  Exercise 3:
        It is not possible to change the FAVORITESODA as it is currently since the "const"
        indicates that this is a constant, and therefore unchangeable.
        
        attempting to change the value of the const variable (or object) will
        result in an error such as:
            error: passing ‘const string...FAVORITESODA = "Error";
    */
    //   FAVORITESODA = "Error"; //<- this causes the above error
    
    /*  Exercise 4:
        It is possible to continually change the value of favoriteSnack since it
        standard variable. The following line compiles and the output reflects
        chips as the value of variable
    */    
    //  favoriteSnack = "chips";  //<- this does not cause an error
 
    // Fill in the blanks of the following:
    cout << "The preferred soda is " << FAVORITESODA << endl;
    cout << "The preferred snack is " << favoriteSnack << endl;
    cout << "Out of " << numberOfPeople << " people " << topChoiceTotal << " chose these items!" << endl;
    cout << "Each of these products were given a rating of " << expertRating;
    cout << " from our expert tasters" << endl;
    cout << "The other products were rated no higher than a " << rating << endl; 

    return 0;
} 
 