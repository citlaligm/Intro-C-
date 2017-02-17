/*
 * Movie.h
 *
 *  Created on: Feb 16, 2017
 *      Author: ggonzalez
 */

#ifndef MOVIE_H_
#define MOVIE_H_
#include <string>
using namespace std;
class Movie{
//Instance data should be private to enforce data integrity
private:
	string movieName;
	int movieYear;
	string movieRate;

//list of function prototypes
public:
	//constructors
	Movie();
	Movie(string name, int year, string rate);

	//destructor
	//~Movie();

	//accessor Methods
	string getName();
	int getYear();
	string getRate();

	//mutator methods
	void setName(string nameMovie);
	void setYear(int yearMovie);
	void setRate(int rateMovie);

};


#endif /* MOVIE_H_ */
