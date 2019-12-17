//
// Created by 1211l on 11/21/2019.
//

#ifndef FINALPROJECT_FUNCTION_H
#define FINALPROJECT_FUNCTION_H

#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;




class Movie {

private:
	string name, genre1, genre2, release, synopsis;
	int year, nominations, duration, metacritic;
	float rating;



public:
	//static int movieCount;

	//Constructors
	Movie();
	Movie(string _name, string _genre1, string _genre2, string _release, string _synopsis,
		int _year, int _nominations, int _duration, int _metacritic, float _rating);

	//Accessor Functions
	string getName() { return name; }
	string getGenre1() { return genre1; }
	string getGenre2() { return genre2; }
	string getRelease() { return release; }
	string getSynopsis() { return synopsis; }
	int getYear() { return year; }
	int getNominations() { return nominations; }
	int getDuration() { return duration; }
	int getMetacritic() { return metacritic; }
	float getRating() { return rating; }
	//int getMovieCount() { return movieCount; }

	//Mutator Functions
	void setName(string _name) { name = _name; }
	void setGenre1(string _genre1) { genre1 = _genre1; }
	void setGenre2(string _genre2) { genre2 = _genre2; }
	void setRelease(string _release) { release = _release; }
	void setSynopsis(string _synopsis) { synopsis = _synopsis; }
	void setYear(int _year) { year = _year; }
	void setNominations(int _nominations) { nominations = _nominations; }
	void setDuration(int _duration) { duration = _duration; }
	void setMetacritic(int _metacritic) { metacritic = _metacritic; }
	void setRating(float _rating) { rating = _rating; }


	

};

Movie addMovie();
void sortMovies(string field, vector<Movie>& movies);
void printMovies(vector<Movie>& movies);
void searchMoviesComplete(string terms, string field, vector<Movie>& movies);

void printMovie(Movie aMovie);
void readFromFile(vector<Movie>& movies);
void editMovie(vector<Movie>& movies, vector<int> results);
void searchMoviesPartial(string terms, string field, vector<Movie>& movies);
void writeMoviesToFile(vector<Movie>& movies);



class Actor {

private:
	string name, film, award;
	int year, winner;




public:
	//static int movieCount;

	//Constructors
	Actor();
	Actor(string _name, string _film, string _award, int _year, int _winner);

	//Accessor Functions
	string getName() { return name; }
	string getFilm() { return film; }
	string getAward() { return award; }
	int getYear() { return year; }
	int getWinner() { return winner; }


	//Mutator Functions
	void setName(string _name) { name = _name; }
	void setFilm(string _film) { film = _film; }
	void setAward(string _award) { award = _award; }
	void setYear(int _year) { year = _year; }
	void setWinner(int _winner) { winner = _winner; }









};

void printActors(vector<Actor>& actors);
void sortActors(string field, vector<Actor>& actors);
Actor addActor();
void searchActorsComplete(string terms, string field, vector<Actor>& actors);

void printActor(Actor aActors);
void readFromFileActors(vector<Actor>& actors);
void editActor(vector<Actor>& actors, vector<int> results);
void searchActorsPartial(string terms, string field, vector<Actor>& actors);
void writeActorsToFile(vector<Actor>& actors);


bool menu(int& choice, bool& done, vector<Actor>& actors, vector<Movie>& movies); //Menu function

#endif //FINALPROJECT_FUNCTION_H

