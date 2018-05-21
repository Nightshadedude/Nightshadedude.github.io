// This program finds the average time spent programming by a student
// each day over a three day period.

/*
Eric Landeis
PRG218
nested.cpp
*/

/*
Exercise 1: Note that the inner loop of this program is always executed exactly
three times—once for each day of the long weekend. Modify the code so
that the inner loop iterates n times, where n is a positive integer input by
the user. In other words, let the user decide how many days to consider
just as they choose how many students to consider.
***Completed

Exercise 2: Modify the program from Exercise 1 so that it also finds the average
number of hours per day that a given student studies biology as well as
programming. For each given student include two prompts, one for each
subject. Have the program print out which subject the student, on average,
spent the most time on.
***Completed

*/

#include <iostream>
using namespace std;
int main()
{
    int numStudents;
    float numPrgHours, prgTotal, prgAverage, numBioHours, bioTotal, bioAverage;
    int student,day = 0; // these are the counters for the loops
    cout << "This program will find the average number of hours a day"
    << " that a student spent programming over a long weekend\n\n";
    cout << "How many students are there ?" << endl << endl;
    cin >> numStudents;
    for(student = 1; student <= numStudents; student++)
    {
        int numDays;
        cout << "How many days did student " << student
        << " work over the long weekend?" << endl << endl;
        cin >> numDays;
        prgTotal = 0;
        bioTotal = 0;
        for(day = 1; day <= numDays; day++)
        {
            cout << "Please enter the number of programming hours worked by student "
            << student <<" on day " << day << "." << endl;
            cin >> numPrgHours;
            prgTotal = prgTotal + numPrgHours;

            cout << "Please enter the number of biology hours worked by student "
            << student <<" on day " << day << "." << endl;
            cin >> numBioHours;
            bioTotal = bioTotal + numBioHours;
        }
        prgAverage = prgTotal / numDays;
        bioAverage = bioTotal / numDays;
        cout << endl;
        cout << "The average number of hours per day spent programming by ";
        cout << "student " << student << " is " << prgAverage << endl;
        cout << "The average number of hours per day spent on biology by ";
        cout << "student " << student << " is " << bioAverage << endl;
        
        if(prgTotal == bioTotal) {
            cout << "This means the student spent equal time on programming and biology.";
        }
        else if(prgTotal > bioTotal){
            cout << "This means the student spent more time on programming.";
        }
        else{
            cout << "This means the student spent more time on biology.";
        }
        
        
        cout << endl << endl << endl;
    }   
    return 0;
}
