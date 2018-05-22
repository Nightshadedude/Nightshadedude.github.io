/*
 * myMovie.h
 *
 *  Created on: Week 4
 *      Author: Eric Landeis
 *       Class: PRG218
 *
 */

#ifndef MYMOVIE_H_
#define MYMOVIE_H_
#include <string>
using namespace std;

class myMovie{
private:
	string name;
	int year;
	string rating;

public:
	myMovie();
	myMovie(string, int, string);
	~myMovie();
	
	void setName(string);
	string getName();
	
	void setYear(int);
	int getYear();
	
	void setRating(string);
	string getRating();
};

#endif /* MYMOVIE_H_ */