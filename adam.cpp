#include "stdafx.h"
#include <iostream>
#include <string>

#include "Colour.h"
#include "adam.h"

using namespace std; 

int a_main(int count, char dis_size, string sresult[24]) {

	int atoi(char dis_size);

	string* found_chars = new string [count] ;

	for (int i = 0; i < count; i++)  // count is brough from Bryce's file to know the number of characters that filled searhc parameters
		found_chars[i] = sresult[i]; // To not have oversized array copy all elements into new array
	
	for (int i = 0; i < dis_size - 48; i++) { // Number was always 48 greater than command prompt number,
										      // solution was removing value of 48 each time
		if (found_chars[i] != "0") 
			cout << green << found_chars[i] << white << endl; //Added green to make the name "pop" more

		else if (found_chars[i] == "0") // combination of this and previous if statement only print the number of 
			return 0;                   // character from search results defined by the command prompt 

	}

	return 0;

}
