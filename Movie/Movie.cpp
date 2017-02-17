/*
Movie.cpp
Feb 16, 2017
josemacenteno
*/
#include "Movie.h"
#include <iostream>
using namespace std;

//contains the body of the function prototypes listed in the header file.

	//default constructor
Movie::Movie(){
	movieName = "";
	movieYear = 1800;
	movieRate = "G";
}

Movie::Movie(string name, int year, string rate)
{
	movieName = name;
	movieRate = rate;
	while(year<1800 || year>2017)
	{
		cout<<"Invalid year please enter a year between 1800 and 2017:"<<endl;
		cin>>year;
		cin.ignore();

	}
	movieYear = year;
	movieRate = rate;

}
//destructor method
//Movie::~Movie();

//accesor Methods
string Movie::getName()
{
	return movieName;
}

int Movie::getYear()
{
	return movieYear;
}

string Movie::getRate()
{
	return movieRate;
}

//mutator methods
void Movie::setName(string nameMovie)
{
	movieName = nameMovie;
	movieYear = 1800;
	movieRate = "G";
}

void Movie::setYear(int yearMovie)
{

	movieYear = yearMovie;

}

void Movie::setRate(int rateMovie)
{
	movieRate = rateMovie;

}

