#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "bryce.h"

using namespace std;

string search_results[24];
string characters[24];
int counter = 0;

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

	char_search(search_key);

	return 0;

}

void char_search(char key) {
	
	for (int i = 0; i < 24; i++) {

		if (characters[i].find_first_of(key) != -1) {
			search_results[counter] = characters[i];
			counter++;
		}

	}

}
