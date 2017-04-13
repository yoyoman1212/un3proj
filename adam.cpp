#include "stdafx.h"
#include <iostream>
#include <string>

#include "Colour.h"
#include "adam.h"

using namespace std; 

int a_main(int count, int dis_size, string sresult[24]) {

	string* found_chars = new string[count];
	string select;


	for (int i = 0; i < count; i++)  // count is brough from Bryce's file to know the number of characters that filled search parameters
		found_chars[i] = sresult[i]; // To not have oversized array and be able ot do tail copy all elements into new array
	
	cout << blue << "Would you like to display " << yellow << "head" << blue << " with " << dis_size << " elements or " << yellow << "tail" << blue
		<< " with " << dis_size << " elements?: " << green; // head and tail highlighed in different colours as they are options
	cin >> select; 

	if (select == "head") // first 'dis_size" elements of the array
		for (int i = 0; i < dis_size; i++) {

			if (i == count) // makes sure that the maximum number of elements printed is equal to the number of search results or count
				return 0;

			else
				cout << green << found_chars[i] << white << endl;

		}

	else if (select == "tail") // last 'dis_size" elements of the array
		for (int i = count - 1; i > -1; i--) { // -1 because array starts at[0] not [1]

			if (i < count - dis_size) 
				return 0;

			else
				cout << green << found_chars[i] << white << endl;
		}

	else { // if input is not "head" or "tail"
		cout << red << "That was not a valid selection" << endl;
		cout << "Ending Program..." << white << endl;
		return 0;
	}

}
