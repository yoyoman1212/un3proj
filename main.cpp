//ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h";
#include <iostream>
#include <ctype.h>
#include <string>

#include "Colour.h"
#include "bryce.h";
#include "adam.h";

using namespace std;

char search_key;

int main(int argc, char* c[]) {
	//done by bryce
	int search_fails = 0;
	int search_fails_2 = 0;

	char accepted_chars[] = "abcdefghijklmnopqrstuvwxyz:76.";
	char accepted_chars_2[] = "0123456789";

	char letter = tolower(*c[1]);
	char number = *c[2];

	if (argc < 3) {
		cerr << "Usage: " << c[0] << " letter #lines" << endl;
		return 1;
	}

	for (int i = 0; i < 30; i++) 
		if (letter != accepted_chars[i])
			search_fails++;

	if (search_fails == 30) {
		cerr << "Error: Invalid character entered for arg 1. See usage" << endl;
		return 3;
	}

	for (int i = 0; i < 10; i++)
		if (number != accepted_chars_2[i])
			search_fails_2++;

	if (search_fails_2 == 10) {
		cerr << "Error: Invalid character entered for arg 2. See usage." << endl;
		return 4;
	}

	//done by adam + bryce
	int numlines;
	numlines = atoi(c[2]);

	b_main(letter);

	a_main(counter, numlines, search_results);

	return 0;

}
