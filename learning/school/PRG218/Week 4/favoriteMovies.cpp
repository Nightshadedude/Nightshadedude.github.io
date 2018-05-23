/*
 * favoriteMovies.cpp
 *
 *  Created on: Week 4
 *      Author: Eric Landeis
 *       Class: PRG218
 */

// header myMovie.h
// implementation myMovie.cpp
 
#include <iostream>
#include "myMovie.h"
using namespace std;

int main()
{
	char movieName[50], movieRating[6];
	int year;
	int numMovies;
	
	cout << "How many of your top movies do you want to enter?" << endl;
	cin >> numMovies;
	cin.ignore();
	cout << endl;
	
	myMovie movieArray[numMovies];
	
	for(int i = 0; i < numMovies; i++)
	{
		myMovie tempMovie;

		cout<<"What is the title for movie " << i+1 << ":" << endl;
		cin.getline(movieName,50);
		tempMovie.setName(movieName);

		cout<<"What year was it released?" << endl;
		cin>>year;
		cin.ignore();
		tempMovie.setYear(year);
		
		cout<<"What is the rating (G, PG, PG-13, R, M, NR):" << endl;
		cin.getline(movieRating,6);
		tempMovie.setRating(movieRating);
		
		movieArray[i] = tempMovie;
	}
	//reminder to self.  change input to loops over array (setting)
	//add class method to output all data in a formatted way
	//add loop to main to loop over array and output with new method
	// http://www.tutorialdost.com/Cpp-Programming-Tutorial/34-Cpp-Class-Array.aspx
	

	//print out all movies in the array:
	cout << "Your top " << numMovies << " favorite movies are:" << endl;

	for(int i = 0; i < numMovies; i++)
	{
		movieArray[i].getAll();
	}
}
