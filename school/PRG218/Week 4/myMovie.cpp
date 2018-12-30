/*
 * myMovie.cpp
 *
 *  Created on: Week 4
 *      Author: Eric Landeis
 *       Class: PRG218
 */

#include "myMovie.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

time_t t = time(NULL); //gets time from ctime lib
tm* timePtr = localtime(&t); // sets time to local offset
int currentYear = timePtr->tm_year + 1900; // year member of time is set as # years since 1900


//default constructor
myMovie::myMovie() {
	string movieName = "";
	int year = 1900;
	string rating = "G";
}

myMovie::myMovie(string name, int year, string rating)
{
	this->name = name;
	while(year < 1888 || year > currentYear) //did current year vs 2017 since this should always be present
	//also changed 1950 to 1888 allow for all films
	{
		cout<<"invalid year, please re-enter between 1888 and present:" << endl;
		cin>>year;
		cin.ignore();
	}
	this->year = year;
	this->rating = rating;
}

myMovie::~myMovie() {
	// TODO Auto-generated destructor stub
}

string myMovie::getName()
{
	return name;
}

void myMovie::setName(string name)
{
	this->name = name;
}

int myMovie::getYear()
{
	return year;
}

void myMovie::setYear(int year)
{
	while(year < 1888 || year > currentYear)
	{
		cout<<"invalid year, please re-enter between 1888 and present:" << endl;
		cin>>year;
		cin.ignore();
	}
	this->year = year;
}

string myMovie::getRating()
{
	return rating;
}

void myMovie::setRating(string rating)
{
	this->rating = rating;
}

void myMovie::getAll()
{
	cout << "Movie title: " << name << endl;
	cout << "It was released in: " << year << endl;
	cout << "It is rated: " << rating << endl << endl;
}