//ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h";
#include <iostream>
#include <string>

#include "bryce.h";
#include "adam.h";

using namespace std;

char search_key;

int main(int argc, char* c[], int l) {
	
	if (argc < 3) {
		cerr << "Usage: " << c[0] << " LETTER #LINES" << endl;
		return 1;
	}

	b_main(*c[1]);

	a_main(counter, *c[2], search_results);

	return 0;

}
