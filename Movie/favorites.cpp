/*
favorites.cpp
Feb 16, 2017
josemacenteno
*/
#include <iostream>
#include "Movie.h"
#include <string>
using namespace std;


void printMovies(Movie);

void askUser(string& name, int& year, string& rate)
{
	cout<<"What's the name of your favorite movie:"<<endl;
	cin >> name ;
	cin.ignore();
	cout <<"What year was released:"<<endl;
	cin >> year ;
	cin.ignore();
	cout<<"What is the rating  (G, PG, R, M)"<<endl;
	cin >> rate ;
	cin.ignore();
}

int main()
{
	int year;
	string name, rate;

	askUser(name, year, rate);
	Movie movie1(name, year, rate);

	askUser(name, year, rate);
	Movie movie2(name, year, rate);

	askUser(name, year, rate);
	Movie movie3(name, year, rate);

	cout<<"Your favorite movies are:\n"<< endl;
	printMovies(movie1);
	printMovies(movie2);
	printMovies(movie3);


return 0;

}


void printMovies(Movie movie)
{

	cout<<"Title:"<< movie.getName()<< endl;
	cout<<"\nIt was released in: "<<movie.getYear()<<"\n";
	cout<<"It is rated: "<<movie.getRate()<<endl<<endl;
}
