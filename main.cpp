//ConsoleApplication1.cpp : Defines the entry point for the console application.
//main.cpp done by bryce
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

	int search_fails = 0;

	char accepted_chars[] = "abcdefghijklmnopqrstuvwxyz:76.";

	char letter = tolower(*c[1]);

	if (argc < 3) {
		cerr << "Usage: " << c[0] << " letter #lines" << endl;
		return 1;
	}

	for (int i = 0; i < 30; i++) 
		if (letter != accepted_chars[i])
			search_fails++;

	if (search_fails == 30) {
		cerr << "Error: Invalid character entered." << endl;
		return 3;
	}

	int numlines;
	numlines = atoi(c[2]);

	b_main(letter);

	a_main(counter, numlines, search_results);

	return 0;

}
