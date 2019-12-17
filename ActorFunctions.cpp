#include "functions.h"
using namespace std;
//Actor Constructors
Actor::Actor() {
	name = " ";
	film = " ";
	award = " ";
	winner = 0;
	year = 0;
	
	//movieCount++;
};

///
Actor::Actor(string _name, string _film, string _award, int _winner, int _year)
{
	name = _name;
	film = _film;
	award = _award;
	year = _year;
	winner = _winner;
	
};

Actor addActor() {
	string _name, _film, _award;
	int _winner, _year;


	cout << "Actor/Actress name: ";
	cin >> _name;

	cout << "Year: ";
	cin >> _year;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _year;
	}
	cin.ignore();
	cout << "Film: ";
	getline(cin, _film);
	cout << "Award: ";
	getline(cin, _award);
	cout << "Win (1) or Lose (0): ";
	cin >> _winner;
	while (!cin) {
		cout << "Please enter a valid menu number\n";
		cin.clear();
		cin.ignore();
		cin >> _winner;
	}
	
	return Actor(_name,  _film,  _award,  _year,  _winner);
}


void sortActors(string field, vector<Actor>& actors) {
	if (field == "name" || field == "Name") {
		int i, j;
		Actor item;
		for (i = 1; i < actors.size(); i++)
		{
			item = actors[i];
			j = i - 1;
			while (j >= 0 && actors[j].getName() > item.getName())
			{
				actors[j + 1] = actors[j];
				j = j - 1;
			}
			actors[j + 1] = item;
		}
	}
	else if (field == "film" || field == "Film") {
		int i, j;
		Actor item;
		for (i = 1; i < actors.size(); i++)
		{
			item = actors[i];
			j = i - 1;
			while (j >= 0 && actors[j].getFilm() > item.getFilm())
			{
				actors[j + 1] = actors[j];
				j = j - 1;
			}
			actors[j + 1] = item;
		}
	}
	else if (field == "award" || field == "Award") {
		int i, j;
		Actor item;
		for (i = 1; i < actors.size(); i++)
		{
			item = actors[i];
			j = i - 1;
			while (j >= 0 && actors[j].getAward() > item.getAward())
			{
				actors[j + 1] = actors[j];
				j = j - 1;
			}
			actors[j + 1] = item;
		}
	}
	else if (field == "year" || field == "Year") {
		int i, j;
		Actor item;
		for (i = 1; i < actors.size(); i++)
		{
			item = actors[i];
			j = i - 1;
			while (j >= 0 && actors[j].getYear() > item.getYear())
			{
				actors[j + 1] = actors[j];
				j = j - 1;
			}
			actors[j + 1] = item;
		}
	}
	else if (field == "winner" || field == "Winner") {
		int i, j;
		Actor item;
		for (i = 1; i < actors.size(); i++)
		{
			item = actors[i];
			j = i - 1;

			while (j >= 0 && actors[j].getWinner() > item.getWinner())
			{
				actors[j + 1] = actors[j];
				j = j - 1;
			}
			actors[j + 1] = item;
		}
	}
	
	else return;
}

void printActor(Actor aActor) {
	std::cout << '|' << setw(10) << left << "Year" << '|'
		<< setw(45) << "Award" << '|'
		<< setw(4) << "Winner" << '|'
		<< setw(35) << "Name" << '|'
		<< setw(45) << "Film" << '\n';

	std::cout << '|' << setw(10) << left << aActor.getYear() << '|'
		<< setw(45) << aActor.getAward() << '|'
		<< setw(4) << aActor.getWinner() << '|'
		<< setw(35) << aActor.getName() << '|'
		<< setw(45) << aActor.getFilm() << "\n\n";
}

void printActors(vector<Actor>& actors) {



	for (int i = 0; i < actors.size(); i++) {

		std::cout << '|' << setw(10) << left << "Year" << '|'
			<< setw(30) << "Award" << '|'
			<< setw(17) << "Winner" << '|'
			<< setw(20) << "Name" << '|'
			<< setw(20) << "Film" << '\n';

		std::cout << '|' << setw(10) << left << actors[i].getYear() << '|'
			<< setw(30) << actors[i].getAward() << '|'
			<< setw(17) << actors[i].getWinner() << '|'
			<< setw(20) << actors[i].getName() << '|'
			<< setw(20) << actors[i].getFilm() << "\n\n";
	}
}

void editActor(vector<Actor>& actors, vector<int> results) {
	int choice;
	bool done = false;
	cout << "Enter the number of the actor to edit or\n";
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
	int actorToEdit = results[choice - 1];

	printActor(actors[actorToEdit]);


	while (!done) {
		cout << "Enter the number of your choice\n";
		std::cout << "1. Edit Year\n"
			<< "2. Edit Award\n"
			<< "3. Edit Winner\n"
			<< "4. Edit Name\n"
			<< "5. Edit Film\n"
			<< "6. Return to previous menu" << '\n';
		cin >> choice;
		while (!cin || choice == 0 || choice > 6) {
			cout << "Please enter a valid menu number\n";
			cin.clear();
			cin.ignore();
			cin >> choice;
		}


		switch (choice) {
		case 1:
		{
			int newYear;
			cout << "Enter a new year: \n";
			cin.ignore();
			cin >> newYear;
			while (!cin) {
				cout << "Please enter a valid menu number\n";
				cin.clear();
				cin.ignore();
				cin >> newYear;
			}
			actors[actorToEdit].setYear(newYear);
			cout << "The updated record is: \n";
			printActor(actors[actorToEdit]);
			break;
		}



		case 2:
		{
			string newAward;
			cout << "Enter a new award: \n";
			cin >> newAward;
			
			actors[actorToEdit].setAward(newAward);
			cout << "The updated record is: \n";
			printActor(actors[actorToEdit]);
			break;
		}
		case 3:
		{
			int newWinner;
			cout << "Enter a winner number (1 = win, 0 = lose): \n";
			cin >> newWinner;
			while (!cin || newWinner > 1) {
				cout << "Please enter a valid number\n";
				cin.clear();
				cin.ignore();
				cin >> newWinner;
			}
			actors[actorToEdit].setWinner(newWinner);
			cout << "The updated record is: \n";
			printActor(actors[actorToEdit]);
			break;
		}
		case 4:
		{
			string newName;
			cout << "Enter a new name: \n";
			cin >> newName;
			while (!cin) {
				cout << "Please enter a valid number\n";
				cin.clear();
				cin.ignore();
				cin >> newName;
			}
			actors[actorToEdit].setName(newName);
			cout << "The updated record is: \n";
			printActor(actors[actorToEdit]);
			break;
		}
		case 5:
		{
			string newFilm;
			cout << "Enter a new film name: \n";
			cin >> newFilm;
			actors[actorToEdit].setFilm(newFilm);
			cout << "The updated record is: \n";
			printActor(actors[actorToEdit]);
			break;
		}
		case 6:
			done = true;
			break;
		
		default:
			cout << "Please enter a valid menu choice\n";
		}

	}

}


void writeActorsToFile(vector<Actor>& actors) {
	ofstream outfile;
	outfile.open("Actor-Actress-Outfile.csv");
	outfile << "Year" << ','
		<< "Award" << ','
		<< "Winner" << ','
		<< "Name" << ','
		<< "Film" << ','
		<< '\n';
	for (int i = 0; i < actors.size(); i++) {
		outfile << actors[i].getYear() << ','
			<< actors[i].getAward() << ','
			<< actors[i].getWinner() << ','
			<< actors[i].getName() << ','
			<< actors[i].getFilm() << ','
			<< '\n';
	}
	outfile.close();


}

void searchActorsComplete(string term, string field, vector<Actor>& actors) {
	vector<int> results;
	if (field == "name" || field == "Name") {
		int c = 1;



		for (int i = 0; i < actors.size(); i++) {
			if (actors[i].getName() == term) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "year" || field == "Year") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			string yearstring = to_string(actors[i].getYear());
			
			if (yearstring == term) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "award" || field == "Award") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			
			if (actors[i].getAward() == term) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "winner" || field == "Winner") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			string winnerString = to_string(actors[i].getWinner());
			
			if (winnerString == term) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "film" || field == "Film") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			
			if (actors[i].getFilm() == term) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	
}


//Citing source from 
//https://stackoverflow.com/questions/29461786/partial-string-search-in-c
//for .find() and npos
void searchActorsPartial(string term, string field, vector<Actor>& actors) {
	vector<int> results;
	if (field == "name" || field == "Name") {
		int c = 1;



		for (int i = 0; i < actors.size(); i++) {
			if (actors[i].getName().find(term) != string::npos) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "year" || field == "Year") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			string yearstring = to_string(actors[i].getYear());
			
			if (yearstring.find(term) != string::npos) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "award" || field == "Award") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {

			if (actors[i].getAward().find(term) != string::npos) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "winner" || field == "Winner") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {
			string winnerString = to_string(actors[i].getWinner());
			
			if (winnerString.find(term) != string::npos) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}

		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}
	else if (field == "film" || field == "Film") {
		int c = 1;

		for (int i = 0; i < actors.size(); i++) {

			if (actors[i].getFilm().find(term) != string::npos) {
				cout << "Actor number: " << c << '\n';
				printActor(actors[i]);
				c++;
				results.push_back(i);
			}
		}
		if (c == 1) {
			cout << "No records match that search criteria\n";
			return;
		}
		editActor(actors, results);
	}

}






//Old Menu Loop
/*bool menu(int choice, bool& done, vector<Actor>& actors) {
	string term, field;
	string search;
	switch (choice) {
	case 1:

		readFromFile(actors);
		//if (success)  cout << "Data has been read from files\n";
		cout << actors.size() << " have been read from the file\n";
		break;
	case 2:

		//Add Records
		//Choose to add to actors or to actors

		actors.push_back(Actor::addMovie());
		break;
	case 3:
		if (actors.size() == 0) { cout << "Please add files before searching\n"; break; }
		//Search Records
		//Choose actors or actors
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
			Actor::searchactorsComplete(term, field, actors);
			break;
		case 2:
			cout << "Which field would you like to search?\n";
			cout << "(Name, genre, release, year, duration, rating, metacritic)\n";
			cin >> field;
			cout << "Enter search: ";

			cin.ignore();
			getline(cin, term);
			//Actor::searchactorsPartial(term, field, actors);
			break;
		default:
			cout << "Please enter a valid choice\n";
		}

		break;
	case 4:
		if (actors.size() == 0) { cout << "Please add files before sorting\n"; break; }
		//Sort By Field
		//choose actors or actors

		cout << "Which field would you like to sort by?\n";
		cout << "Name, genre1, genre2, release, year, duration, rating, metacritic\n";
		cin >> search;

		Actor::sortactors(search, actors);
		Actor::printactors(actors);

		break;
	case 5:
		if (actors.size() == 0) { cout << "Please add files before saving\n"; break; }
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


void readFromFileActors(vector<Actor>& actors) {


	ifstream infile("actor-actress.csv");
	string _name, _award, _film;
	string _year, _winner;
	

	int _yearint, _winnerint;


	string line;
	
	getline(infile, line);//remove first line
	while (getline(infile, _year, ','))
	{
		stringstream ss1(_year);
		ss1 >> _yearint;

		getline(infile, _award, ',');
		
		getline(infile, _winner, ',');
		stringstream ss2(_winner);
		ss2 >> _winnerint;

		getline(infile, _name, ',');
		getline(infile, _film);

		actors.push_back(Actor( _name,  _film,  _award, _winnerint, _yearint));
	}

	infile.close();

	/* Need to read in from actor csv
	vector<Actor> actors;
	ifstream infile("actor-actress.csv");
	*/

}
