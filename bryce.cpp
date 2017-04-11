#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "bryce.h"

using namespace std;

string search_results[24];
string characters[24];

void char_search(char key);

int b_main(char search_key) {

	string line;
	int i = 0;
	

	ifstream infile("owchars.txt");

	if (infile.is_open()) {

		while (getline(infile, characters[i])) {
			i++;
		}
		infile.close();

	}
	else {
		cout << "Error: File not open" << endl;
		return 2;
	}
	for (int i = 0; i < 24; i++) {

		cout << characters[i] << endl;

	}

	cout << "Searching for characters..." << endl;

	char_search(search_key);

	for (int i = 0; i < 24; i++) {
		if (search_results[i] != "")
			cout << search_results[i] << endl;
	}
	return 0;

}

void char_search(char key) {
	int counter = 0;
	for (int i = 0; i < 24; i++) {

		if (characters[i].find_first_of(key) != -1) {
			//cout << characters[i] << endl;
			search_results[counter] = characters[i];
			counter++;
		}

	}

}
