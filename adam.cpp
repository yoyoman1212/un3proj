#include "stdafx.h"
#include <iostream>
#include <string>

#include "Colour.h"
#include "adam.h"

using namespace std; 

int a_main(int count, int dis_size, string sresult[24]) { 

	string* found_chars = new string [count] ;

	for (int i = 0; i < count; i++)  // count is brough from Bryce's file to know the number of characters that filled searhc parameters
		found_chars[i] = sresult[i]; // To not have oversized array copy all elements into new array
	
	for (int i = 0; i < dis_size; i++) { // Number was always 48 greater than command prompt number,
										 // solution was removing value of 48 each time
		if (i == count) // makes sure that the maximum number of elements printed is equal to the number of search results or count
			return 0;

		else
			cout << green << found_chars[i] << white << endl; //Added green to make the name "pop" more

		

	}

	return 0;

}
