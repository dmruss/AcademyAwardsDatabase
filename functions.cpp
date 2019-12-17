#include "functions.h"

using namespace std;
//Movie Constructors
Movie::Movie() {
	name = " ";
	genre1 = " ";
	genre2 = " ";
	release = " ";
	synopsis = " ";
	year = 0;
	nominations = 0;
	duration = 0;
	metacritic = 0;
	rating = 0.0;
	//movieCount++;
};

///
Movie::Movie(string _name, string _genre1, string _genre2, string _release, string _synopsis,
	int _year, int _nominations, int _duration, int _metacritic, float _rating)
{
	name = _name;
	genre1 = _genre1;
	genre2 = _genre2;
	release = _release;
	synopsis = _synopsis;
	year = _year;
	nominations = _nominations;
	duration = _duration;
	metacritic = _metacritic;
	rating = _rating;
	//movieCount++;
};

Movie addMovie() {
	string _name, _genre1, _genre2, _release, _synopsis;
	int _year, _nominations, _duration, _metacritic;
	float _rating;

	cout << "Movie name: ";
	cin >> _name;
	
	cout << "Genre 1: ";
	cin >> _genre1;
	
	cout << "Genre 2: ";
	cin >> _genre2;
	cout << "Release month: ";
	cin >> _release;
	cout << "Enter a synopsis: ";
	cin >> _synopsis;
	cout << "Year: ";
	cin >> _year;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _year;
	}
	cout << "Number of nominations: ";
	cin >> _nominations;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _nominations;
	}
	cout << "Duration (minutes): ";
	cin >> _duration;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _duration;
	}
	cout << "Metacritic score: ";
	cin >> _metacritic;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _metacritic;
	}
	cout << "Rating: ";
	cin >> _rating;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _rating;
	}
	return Movie( _name,  _genre1,  _genre2,  _release,  _synopsis,
		 _year,  _nominations,  _duration,  _metacritic,  _rating);
}


void sortMovies(string field, vector<Movie>& movies) {
	if (field == "name" || field == "Name") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;
			while (j >= 0 && movies[j].getName() > item.getName())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "genre1" || field == "Genre1") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;
			while (j >= 0 && movies[j].getGenre1() > item.getGenre1())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "genre2" || field == "Genre2") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;
			while (j >= 0 && movies[j].getGenre2() > item.getGenre2())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "release" || field == "Release") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;
			while (j >= 0 && movies[j].getRelease() > item.getRelease())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "year" || field == "Year") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;

			while (j >= 0 && movies[j].getYear() > item.getYear())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "nominations" || field == "Nominations") {
		int i, j;
		Movie item;
		for (i = 1; i < movies.size(); i++)
		{
			item = movies[i];
			j = i - 1;
			while (j >= 0 && movies[j].getNominations() > item.getNominations())
			{
				movies[j + 1] = movies[j];
				j = j - 1;
			}
			movies[j + 1] = item;
		}
	}
	else if (field == "duration" || field == "Duration") {
	int i, j;
	Movie item;
	for (i = 1; i < movies.size(); i++)
	{
		item = movies[i];
		j = i - 1;
		while (j >= 0 && movies[j].getDuration() > item.getDuration())
		{
			movies[j + 1] = movies[j];
			j = j - 1;
		}
		movies[j + 1] = item;
	}
	}
	else if (field == "metacritic" || field == "Metacritic") {
	int i, j;
	Movie item;
	for (i = 1; i < movies.size(); i++)
	{
		item = movies[i];
		j = i - 1;	
		while (j >= 0 && movies[j].getMetacritic() > item.getMetacritic())
		{
			movies[j + 1] = movies[j];
			j = j - 1;
		}
		movies[j + 1] = item;
	}
	}
	else if (field == "rating" || field == "Rating") {
	int i, j;
	Movie item;
	for (i = 1; i < movies.size(); i++)
	{
		item = movies[i];
		j = i - 1;
		while (j >= 0 && movies[j].getRating() > item.getRating())
		{
			movies[j + 1] = movies[j];
			j = j - 1;
		}
		movies[j + 1] = item;
	}
	}
	else return;
}

void printMovie(Movie aMovie) {
	std::cout << '|' << setw(46) << left << "Title" << '|'
		<< setw(10) << "Year" << '|'
		<< setw(20) << "Nominations" << '|'
		<< setw(10) << "Rating" << '|'
		<< setw(10) << "Duration" << '|'
		<< setw(15) << "Genre 1" << '|'
		<< setw(15) << "Genre 2" << '|'
		<< setw(15) << "Release" << '|'
		<< setw(15) << "Metacritic" << '\n';

	std::cout << '|' << setw(46) << left << aMovie.getName() << '|'
		<< setw(10) << aMovie.getYear() << '|'
		<< setw(20) << aMovie.getNominations() << '|'
		<< setw(10) << aMovie.getRating() << '|'
		<< setw(10) << aMovie.getDuration() << '|'
		<< setw(15) << aMovie.getGenre1() << '|'
		<< setw(15) << aMovie.getGenre2() << '|'
		<< setw(15) << aMovie.getRelease() << '|'
		<< setw(15) << aMovie.getMetacritic() << '\n'
		<< aMovie.getSynopsis() << "\n\n";
}

void printMovies(vector<Movie>& movies) {
	
	

	for (int i = 0; i < movies.size(); i++) {
		
		std::cout << '|' << setw(46) << left << "Title" << '|'
			<< setw(10) << "Year" << '|'
			<< setw(20) << "Nominations" << '|'
			<< setw(10) << "Rating" << '|'
			<< setw(10) << "Duration" << '|'
			<< setw(15) << "Genre 1" << '|'
			<<setw(15) << "Genre 2" << '|'
			<< setw(15) << "Release" << '|'
			<< setw(15) << "Metacritic" << '\n';

		std::cout << '|' << setw(46) << left << movies[i].getName() << '|'
			<< setw(10) << movies[i].getYear() << '|'
			<< setw(20) << movies[i].getNominations() << '|'
			<< setw(10) << movies[i].getRating() << '|'
			<< setw(10) << movies[i].getDuration() << '|'
			<< setw(15) << movies[i].getGenre1() << '|'
			<< setw(15) << movies[i].getGenre2() << '|'
			<< setw(15) << movies[i].getRelease() << '|'
			<< setw(15) << movies[i].getMetacritic() << '\n' 
			<< movies[i].getSynopsis() << "\n\n";
	}
}

void editMovie(vector<Movie>& movies, vector<int> results) {
	int choice;
	bool done = false;
	cout << "Enter the number of the movie to edit or\n";
	cout << "0. Return to previous menu\n";

	cin >> choice;
	while (!cin || choice > results.size()) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> choice;
	}
	if (choice == 0)
		return;
	int movieToEdit = results[choice - 1];

	printMovie(movies[movieToEdit]);


	while (!done) {
		cout << "Enter the number of your choice\n";
		std::cout << "1. Edit Title\n"
			<< "2. Edit Year\n"
			<< "3. Edit Nominations\n"
			<< "4. Edit Rating\n"
			<< "5. Edit Duration\n"
			<< "6. Edit Genre 1\n"
			<< "7. Edit Genre 2\n"
			<< "8. Edit Release\n"
			<< "9. Edit Metacritic\n"
			<< "10. Edit Synopsis\n"
			<< "11. Return to previous menu" << '\n';
		cin >> choice;
		while (!cin || choice == 0 || choice > 11) {
			cout << "Please enter a valid menu number\n";
			cin.clear();
			cin.ignore();
			cin >> choice;
		}


		switch (choice) {
		case 1:
		{
			string newTitle;
			cout << "Enter a new title: \n";
			cin.ignore();
			getline(cin, newTitle);
			movies[movieToEdit].setName(newTitle);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
			


		case 2:
		{
			int newYear;
			cout << "Enter a new year: \n";
			cin >> newYear;
			while (!cin) {
				cout << "Please enter a valid number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}
			movies[movieToEdit].setYear(newYear);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 3:
		{
			int newNom;
			cout << "Enter a new nomination number: \n";
			cin >> newNom;
			while (!cin) {
				cout << "Please enter a valid number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}
			movies[movieToEdit].setNominations(newNom);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 4:
		{
			float newRating;
			cout << "Enter a new rating: \n";
			cin >> newRating;
			while (!cin) {
				cout << "Please enter a valid number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}
			movies[movieToEdit].setRating(newRating);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 5:
		{
			int newDuration;
			cout << "Enter a new duraiton (minutes): \n";
			cin >> newDuration;
			movies[movieToEdit].setDuration(newDuration);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 6:
		{
			string newGenre;
			cout << "Enter a new genre: \n";
			cin >> newGenre;
			movies[movieToEdit].setGenre1(newGenre);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 7:
		{
			string newGenre;
			cout << "Enter a new genre: \n";
			cin >> newGenre;
			movies[movieToEdit].setGenre2(newGenre);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 8:
		{
			string newRelease;
			cout << "Enter a new release month: \n";
			cin >> newRelease;
			movies[movieToEdit].setRelease(newRelease);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 9:
		{
			int newMeta;
			cout << "Enter a new title: \n";
			cin >> newMeta;
			movies[movieToEdit].setMetacritic(newMeta);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}
		case 10:
		{
			string newSyn;
			cout << "Enter a new title: \n";
			cin.ignore();
			getline(cin, newSyn);
			movies[movieToEdit].setSynopsis(newSyn);
			cout << "The updated record is: \n";
			printMovie(movies[movieToEdit]);
			break;
		}

		case 11:
			done = true;
			break;
		default:
			cout << "Please enter a valid menu choice\n";
		}

	}
	
}


void writeMoviesToFile(vector<Movie>& movies) {
	ofstream outfile;
	outfile.open("MovieOutfile.csv");
	outfile << "Name" << ','
		<< "Year" << ','
		<< "Nominations" << ','
		<< "Rating" << ','
		<< "Duration" << ','
		<< "Genre 1" << ','
		<< "Genre 2" << ','
		<< "Release" << ','
		<< "Metacritic" << ','
		<< "Synopsis" << '\n';
	for (int i = 0; i < movies.size(); i++) {
		outfile << movies[i].getName() << ','
			<< movies[i].getYear() << ','
			<< movies[i].getNominations() << ','
			<< movies[i].getRating() << ','
			<< movies[i].getDuration() << ','
			<< movies[i].getGenre1() << ','
			<< movies[i].getGenre2() << ','
			<< movies[i].getRelease() << ','
			<< movies[i].getMetacritic() << ','
			<< movies[i].getSynopsis() << '\n';
	}
	outfile.close();


}

void searchMoviesComplete(string term, string field, vector<Movie>& movies) {
	vector<int> results;
	if (field == "name" || field == "Name") {
		int c = 1;
		


		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getName() == term) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "year" || field == "Year") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			string yearstring = to_string(movies[i].getYear());
			
			if (yearstring == term)
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
			c++;
			results.push_back(i);
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "nominations" || field == "Nominations") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			string nominationstring = to_string(movies[i].getNominations());
			
			if (nominationstring == term) {
				cout << "Movie number: " << c << '\n';
					printMovie(movies[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "rating" || field == "Rating") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			string ratingstring = to_string(movies[i].getRating());
			
			if (ratingstring == term) {
				cout << "Movie number: " << c << '\n';
					printMovie(movies[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "duration" || field == "Duration") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			string durationstring = to_string(movies[i].getDuration());
			
			if (durationstring == term) {
				cout << "Movie number: " << c << '\n';
					printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "genre" || field == "Genre") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getGenre1() == term || movies[i].getGenre2() == term) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "release" || field == "Release") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getRelease() == term) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	
	else if (field == "metacritic" || field == "Metacritic") {
		int c = 1;
		
		for (int i = 0; i < movies.size(); i++) {
			string metastring = to_string(movies[i].getMetacritic());
			
			if (metastring == term) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
}

//Citing source from 
//https://stackoverflow.com/questions/29461786/partial-string-search-in-c
//for .find() and npos
void searchMoviesPartial(string term, string field, vector<Movie>& movies) {
	vector<int> results;
	if (field == "name" || field == "Name") {
		int c = 1;



		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getName().find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "year" || field == "Year") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			string year = to_string(movies[i].getYear());
			
			if (year.find(term) != string::npos)
				cout << "Movie number: " << c << '\n';
			printMovie(movies[i]);
			c++;
			results.push_back(i);
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "nominations" || field == "Nominations") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			string termInt = to_string(movies[i].getNominations());
			
			if (termInt.find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "rating" || field == "Rating") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			string ratingstring = to_string(movies[i].getRating());
			
			if (ratingstring.find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "duration" || field == "Duration") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			string durationstring = to_string(movies[i].getDuration());
			
			if (durationstring.find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "genre1" || field == "genre2") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getGenre1().find(term) != string::npos || movies[i].getGenre2().find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}
	else if (field == "release" || field == "Release") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getRelease().find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}

	else if (field == "metacritic" || field == "Metacritic") {
		int c = 1;

		for (int i = 0; i < movies.size(); i++) {
			string metastring = to_string(movies[i].getMetacritic());
			
			if (metastring.find(term) != string::npos) {
				cout << "Movie number: " << c << '\n';
				printMovie(movies[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editMovie(movies, results);
	}

	else if (field == "synopsis" || field == "Synopsis") {
	int c = 1;

	for (int i = 0; i < movies.size(); i++) {
		
		if (movies[i].getSynopsis().find(term) != string::npos) {
			cout << "Movie number: " << c << '\n';
			printMovie(movies[i]);
			c++;
			results.push_back(i);
		}
	}
	if (c == 1) {
		cout << "No records match that search criteria\n";
		return;
	}
		editMovie(movies, results);
	}
}
/*void Movie::searchMoviesPartial(string term, string field, vector<Movie>& movies) {
	vector<Movie> results;
	if (field == "name" || field == "Name") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getName() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "year" || field == "Year") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getYear() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "nominations" || field == "Nominations") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getNominations() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "rating" || field == "Rating") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getRating() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "duration" || field == "Duration") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getDuration() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "genre" || field == "Genre") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getGenre1() == term || movies[i].getGenre2() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "release" || field == "Release") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getRelease() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
	else if (field == "metacritic" || field == "Metacritic") {
		for (int i = 0; i < movies.size(); i++) {
			if (movies[i].getMetacritic() == term)
				results.push_back(movies[i]);
		}
		printMovies(results);
	}
}*/


bool menu(int& choice, bool& done, vector<Actor>& actor, vector<Movie>& movie) {
	string term, field;
	string search;


	switch (choice) {
	case 1://READ
	{
		
		readFromFile(movie);
		sortMovies("name", movie);
		readFromFileActors(actor);
		sortActors("name", actor);
		
		cout << "Finished reading files." << '\n';

		break;
	}
	case 2://ADD

		//Add Records
		//Choose to add to movies or to actors
		while (!done) {
			cout << "Enter the number:\n";
			cout << "1. Add Movie record\n";
			cout << "2. Add Actor record\n";
			cout << "3. Return to main menu\n";
			cin >> choice;
			while (!cin || choice == 0 || choice > 3) {
				cout << "Please enter a valid menu number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}

			switch (choice) {
			case 1://Movie add
			{
				movie.push_back(addMovie());
				break;
			}

			case 2://Actor add
			{
				actor.push_back(addActor());
				break;
			}
			case 3:
				done = true;
				break;
			default:
				cout << "Please enter a valid choice\n";
			}
		}
		done = false;
		break;
	case 3://SEARCH
		//Check for null
		if (movie.size() == 0) { cout << "Please add files before searching\n"; break; }
		//Search Records
		//Choose movies or actors

		//SUBMENU 1 Loop - Actor vs. Movie choice
		while (!done) {
			choice = 0;
			cout << "Enter the number of your choice\n";
			cout << "1. Search Movies\n";
			cout << "2. Search Actors\n";
			cout << "3. Return to Main Menu\n";
			cin >> choice;
			while (!cin || choice == 0 || choice > 3) {
				cout << "Please enter a valid menu number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}
			switch (choice) {
			case 1: //MOVIES

				//SUBMENU 2 Loop Movie Complete/Partial
				while (!done) {
					cout << "Enter the number of your choice\n";
					cout << "1. Complete Search for Movie Field\n";
					cout << "2. Partial Search for Movie Field\n";
					cout << "3. Return to Previous Menu\n";
					cin >> choice;
					while (!cin || choice == 0 || choice > 3) {
						cout << "Please enter a valid menu number\n";
						cin.clear();
						cin.ignore();
						cin >> choice;
					}


					switch (choice) {
					case 1: //MOVIE -  COMPLETE
					{
						string term;
						while (!done) {
							cout << "Enter the number of your choice\n";
							cout << "1. Search Titles\n"
								<< "2. Search Years\n"
								<< "3. Search Nominations\n"
								<< "4. Search Ratings\n"
								<< "5. Search Durations\n"
								<< "6. Search Genre 1s\n"
								<< "7. Search Genre 2s\n"
								<< "8. Search Releases\n"
								<< "9. Return to Previous Menu\n" << '\n';
							cin >> choice;
							while (!cin || choice == 0 || choice > 9) {
								cout << "Please enter a valid menu number\n";
								cin.clear();
								cin.ignore();
								cin >> choice;
							}
							switch (choice) {
							case 1:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "name", movie);
								break;
							case 2:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "year", movie);
								break;
							case 3:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "nominations", movie);
								break;
							case 4:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "rating", movie);
								break;
							case 5:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "duration", movie);
								break;
							case 6:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "genre1", movie);
								break;

							case 7:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "genre2", movie);
								break;
							case 8:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesComplete(term, "release", movie);
								break;
							case 9:
								done = true;
								break;
							default:
								cout << "Please enter a valid menu option\n";
							}



						}
						done = false;
						break;


					}
					case 2:  //MOVIE-PARTIAL
					{
						string term;
						while (!done) {
							cout << "Enter the number of your choice\n";
							cout << "1. Search Titles\n"
								<< "2. Search Years\n"
								<< "3. Search Nominations\n"
								<< "4. Search Ratings\n"
								<< "5. Search Durations\n"
								<< "6. Search Genre 1s\n"
								<< "7. Search Genre 2s\n"
								<< "8. Search Releases\n"
								<< "9. Search Synopsis\n"
								<< "10. Return to Previous Menu\n" << '\n';
							cin >> choice;
							while (!cin || choice == 0 || choice > 10) {
								cout << "Please enter a valid menu number\n";
								cin.clear();
								cin.ignore();
								cin >> choice;
							}
							switch (choice) {
							case 1:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "name", movie);
								break;
							case 2:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "year", movie);
								break;
							case 3:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "nominations", movie);
								break;
							case 4:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "rating", movie);
								break;
							case 5:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "duration", movie);
								break;
							case 6:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "genre1", movie);
								break;

							case 7:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "genre2", movie);
								break;
							case 8:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "release", movie);
								break;
							case 9:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchMoviesPartial(term, "synopsis", movie);
								break;
							case 10:
								done = true;
								break;
							default:
								cout << "Please enter a valid menu option\n";
							}



						}
						done = false;
						break;


					}
					case 3://Previous Menu
						done = true;
						break;
					default:
						cout << "Please enter a valid choice\n";
					}
				}//end SUBMENU 2 - Movie Complete/Partial 
				done = false;
				break;
			case 2: //ACTORS

				//SUBMENU 2 Loop - Actor Complete/Partial
				while (!done) {
					cout << "Enter the number of your choice\n";
					cout << "1. Complete\n";
					cout << "2. Partial\n";
					cout << "3. Return to Previous Menu\n";
					cin >> choice;
					while (!cin || choice == 0 || choice > 3) {
						cout << "Please enter a valid menu number\n";
						cin.clear();
						cin.ignore();
						cin >> choice;
					}


					switch (choice) {
					case 1: //ACTOR-COMPLETE
					{
						string term;
						while (!done) {
							cout << "Enter the number of your choice\n";
							cout << "1. Search Years\n"
								<< "2. Search Winners\n"
								<< "3. Search Names\n"
								<< "4. Search Films\n"
								<< "5. Return to Previous Menu\n" << '\n';
							cin >> choice;
							while (!cin || choice == 0 || choice > 5) {
								cout << "Please enter a valid menu number\n";
								cin.clear();
								cin.ignore();
								cin >> choice;
							}
							switch (choice) {
							case 1:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsComplete(term, "year", actor);
								break;
							case 2:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsComplete(term, "winner", actor);
								break;
							case 3:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsComplete(term, "name", actor);
								break;
							case 4:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsComplete(term, "film", actor);
								break;
							case 5:
								done = true;
								break;
							
							default:
								cout << "Please enter a valid menu option\n";
							}



						}
						done = false;
						break;


					}
					case 2: //ACTOR-PARTIAL
					{
						string term;
						while (!done) {
							cout << "Enter the number of your choice\n";
							cout << "1. Search Years\n"
								<< "2. Search Award\n"
								<< "3. Search Name\n"
								<< "4. Search Film\n"
								<< "5. Return to Previous Menu\n" << '\n';
							cin >> choice;
							while (!cin || choice == 0 || choice > 5) {
								cout << "Please enter a valid menu number\n";
								cin.clear();
								cin.ignore();
								cin >> choice;
							}
							switch (choice) {
							case 1:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsPartial(term, "year", actor);
								break;
							case 2:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsPartial(term, "award", actor);
								break;
							case 3:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsPartial(term, "name", actor);
								break;
							case 4:
								cout << "Enter the search term: ";
								cin.ignore();
								getline(cin, term);
								searchActorsPartial(term, "film", actor);
								break;
							case 5:
								done = true;
								break;
							
							default:
								cout << "Please enter a valid menu option\n";
							}



						}
						done = false;
						break;


					}
					case 3://Return to previous menu
						done = true;
						break;
					default:
						cout << "Please enter a valid choice\n";
					}
				}//end SUBMENU 2 Loop - Actor Complete/Partial
				done = false;
				break;
			case 3:
				done = true;
				break;
			default:
				cout << "Please enter a valid search option\n";

			}
		}//SUBMENU 1 Loop - Actor/Movie choice
		done = false;
		break;

	case 4://SORT
		//Check for Null
		if (movie.size() == 0) { cout << "Please add files before sorting\n"; break; }

		//SUBMENU 1 Loop - Movie/Actor Choice
		while (!done) {
			cout << "Enter the number:\n";
			cout << "1. Sort Movies\n";
			cout << "2. Sort Actors\n";
			cout << "3. Return to main menu\n";
			cin >> choice;
			while (!cin || choice == 0 || choice > 3) {
				cout << "Please enter a valid menu number\n";
				cin.clear();
				cin.ignore();
				cin >> choice;
			}


			switch (choice)
			{
				///SORT MOVIES////////////////////////////////
			case 1:

				//SUBMENU 2 Loop - Movie Field Choice
				while (!done) {

					cout << "Enter the number of your choice:\n";
					cout << "1. Sort Movies by Name\n";
					cout << "2. Sort Movies Genre 1\n";
					cout << "3. Sort Movies by Genre 2\n";
					cout << "4. Sort Movies by Release Month\n";
					cout << "5. Sort Movies by Year\n";
					cout << "6. Sort Movies by Duration\n";
					cout << "7. Sort Movies by Rating\n";
					cout << "8. Sort Movies by Metacritic Rating\n";
					cout << "9. Return to previous menu\n";
					cin >> choice;
					while (!cin || choice == 0 || choice > 9) {
						cout << "Please enter a valid menu number\n";
						cin.clear();
						cin.ignore();
						cin >> choice;
					}
					switch (choice) {
					case 1:
					{
						sortMovies("name", movie);
						printMovies(movie);

						break;
					}
					case 2:
					{
						sortMovies("genre1", movie);
						printMovies(movie);
						break;
					}
					case 3:
					{
						sortMovies("genre2", movie);
						printMovies(movie);
						break;
					}
					case 4:
					{
						sortMovies("release", movie);
						printMovies(movie);
						break;
					}

					case 5:
					{
						sortMovies("year", movie);
						printMovies(movie);
						break;
					}
					case 6:
					{
						sortMovies("duration", movie);
						printMovies(movie);
						break;
					}
					case 7:
					{
						sortMovies("rating", movie);
						printMovies(movie);
						break;
					}
					case 8:
					{
						sortMovies("metacritic", movie);
						printMovies(movie);
						break;
					}
					case 9:
						done = true;
						break;
					default:
						cout << "Enter a valid number\n";
					}
				}//End SUBMENU 2 Loop - Movie Field Choice
				done = false;
				break;

				//SORT ACTORS/////////////
			case 2:

				//SUBMENU 2 Loop - Actor Field Choice
				while (!done) {
					cout << "Enter the number of your choice\n";
					cout << "1. Sort by Name\n";
					cout << "2. Sort By Year\n";
					cout << "3. Sort by Winners\n";
					cout << "4. Sort by Film\n";
					cout << "5. Return to previous menu\n";
					cin >> choice;
					while (!cin || choice == 0 || choice > 5) {
						cout << "Please enter a valid menu number\n";
						cin.clear();
						cin.ignore();
						cin >> choice;
					}
					switch (choice) {
					case 1:
						sortActors("name", actor);
						printActors(actor);

						break;

					case 2:
					{
						sortActors("year", actor);
						printActors(actor);

						break;
					}

					case 3:
					{
						sortActors("winner", actor);
						printActors(actor);

						break;
					};
					case 4:
					{
						sortActors("film", actor);
						printActors(actor);

						break;
					}
					case 5:
						done = true;
						break;
					default:
						cout << "Enter valid number\n";
					}
				}//End SUBMENU 2 Loop - Actor Field Choice
				done = false;
				break;

				//PREVIOUS MENU////////////////////
			case 3:
				done = true;
				break;


			default:
				cout << "Enter a valid number\n";
			}




		}//end SUBMENU 1 Loop - Movie/Actor Choice

		break;

	case 5://SAVE
		if (movie.size() == 0) { cout << "Please add files before saving\n"; break; }
		//Save Records to File

		writeMoviesToFile(movie);
		writeActorsToFile(actor);
		cout << "Movies have been written to file 'MovieOutfile.csv'\n";
		cout << "Actors have been written to file 'Actor-Actress-Outfile.csv'\n";
		break;
	case 6://EXIT
		done = true;
		std::cout << "Goodbye\n";
		return done;
	default:
		std::cout << "Please enter a valid menu choice\n";
	}//end main menu switch

	done = false;


	return done;
}//Menu function



//Old Menu Loop
/*bool menu(int choice, bool& done, vector<Movie>& movies) {
	string term, field;
	string search;
	switch (choice) {
	case 1:

		readFromFile(movies);
		//if (success)  cout << "Data has been read from files\n"; 
		cout << movies.size() << " have been read from the file\n";
		break;
	case 2:

		//Add Records
		//Choose to add to movies or to actors
		
		movies.push_back(Movie::addMovie());
		break;
	case 3:
		if (movies.size() == 0) { cout << "Please add files before searching\n"; break; }
		//Search Records
		//Choose movies or actors
		cout << "1. Complete\n";
		cout << "2. Partial\n";
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Which field would you like to search?\n";
			cout << "(Name, genre, release, year, duration, rating, metacritic)\n";
			cin >> field;
			cout << "Enter search: ";

			cin.ignore();
			getline(cin, term);
			Movie::searchMoviesComplete(term, field, movies);
			break;
		case 2:
			cout << "Which field would you like to search?\n";
			cout << "(Name, genre, release, year, duration, rating, metacritic)\n";
			cin >> field;
			cout << "Enter search: ";

			cin.ignore();
			getline(cin, term);
			//Movie::searchMoviesPartial(term, field, movies);
			break;
		default:
			cout << "Please enter a valid choice\n";
		}
		
		break;
	case 4:
		if (movies.size() == 0) { cout << "Please add files before sorting\n"; break; }
		//Sort By Field
		//choose movies or actors
		
		cout << "Which field would you like to sort by?\n";
		cout << "Name, genre1, genre2, release, year, duration, rating, metacritic\n";
		cin >> search;
		
		Movie::sortMovies(search, movies);
		Movie::printMovies(movies);

		break;
	case 5:
		if (movies.size() == 0) { cout << "Please add files before saving\n"; break; }
		//Save Records to File
		break;
	case 6:
		done = true;
		std::cout << "Goodbye\n";
		break;
	default:
		std::cout << "Please enter a valid menu choice\n";

	}
	return done;
}//Menu function*/


void readFromFile(vector<Movie>& movies) {


	ifstream infile("pictures.csv");
	string _name, _genre1, _genre2, _release, _synopsis;
	string _year, _nominations, _duration, _metacritic;
	string _rating;

	int _yearint, _nominationsint, _durationint, _metacriticint;
	float _ratingfloat;

	string line;
	//cin.ignore();
	getline(infile, line);
	while (!infile.eof())
	{
		
		getline(infile, line);
		stringstream s(line);
		getline(s, _name, ',');
		getline(s, _year, ',');
		stringstream ss1(_year);
		ss1 >> _yearint;


		getline(s, _nominations, ',');
		stringstream ss2(_nominations);
		ss2 >> _nominationsint;


		getline(s, _rating, ',');
		stringstream ss3(_rating);
		ss3 >> _ratingfloat; 

		getline(s, _duration, ',');
		stringstream ss4(_duration);
		ss4 >> _durationint;

		getline(s, _genre1, ',');
		getline(s, _genre2, ',');
		getline(s, _release, ',');
		getline(s, _metacritic, ',');
		stringstream ss5(_metacritic);
		ss5 >> _metacriticint;

		getline(s, _synopsis, ',');

		movies.push_back(Movie(_name, _genre1, _genre2, _release, _synopsis,
			_yearint, _nominationsint, _durationint, _metacriticint, _ratingfloat));
	}

	infile.close();

	/* Need to read in from actor csv
	vector<Actor> actors;
	ifstream infile("actor-actress.csv");
	*/

}
