#include <iostream>
#include "functions.h"




int main() {
	
	int choice = 0;
	bool done = false;
	vector<Movie> movies;
	vector<Actor> actors;


	//Menu Loop
	while (!done) {
		cout << "Choose a menu item\n";
		cout << "1. Read Data from File\n";
		cout << "2. Add Record\n";
		cout << "3. Search and Modify Records\n";
		cout << "4. Display and Sort Records\n";
		cout << "5. Save Records to File\n";
		cout << "6. Exit\n";
		cin >> choice;
		while (!cin || choice == 0 || choice > 6) {
			cout << "Please enter a valid menu number\n";
			cin.clear();
			cin.ignore();
			cin >> choice;
		}
		done = menu(choice, done, actors, movies);
	}
	
	

	return 0;
}

