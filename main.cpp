//ConsoleApplication1.cpp : Defines the entry point for the console application.
#include "stdafx.h";
#include <iostream>

#include "bryce.h";
#include "adam.h";

using namespace std;

int main(int argc, char* c[], int l) {
	
	if (argc < 3) {
		cerr << "Usage: " << c[0] << " LETTER #LINES" << endl;
		return 1;
	}

	b_main();

	a_main();

	return 0;

}
