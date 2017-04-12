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
// Use command prompt with key seach item, space, number of items from search result to display as head
int main(int argc, char* c[]) {

	int search_fails = 0;

	char accepted_chars[] = "abcdefghijklmnopqrstuvwxyz:76";

	char letter = tolower(*c[1]);

	if (argc < 3) {
		cerr << "Usage: " << c[0] << " letter #lines" << endl;
		return 1;
	}

	for (int i = 0; i < 29; i++) 
		if (letter != accepted_chars[i])
			search_fails++;

	if (search_fails == 29) {
		cerr << "Error: Invalid character entered." << endl;
		return 3;
	}

	b_main(letter);

	a_main(counter, *c[2], search_results); // Adam, uses Bryce's retrieved data to complete head task
						// alongside predetermined data from command prompt 

	return 0;

}
