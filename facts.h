#ifndef H_FACTS
#define H_FACTS

#include <iostream>
#include <cstdlib>
using namespace std;

// all definitions in "facts.cpp"

class facts {
	int factNum; // used for random fact
	int factControl = 0; // used for exception handling
public:

	void fact();
	// this is a function that generates a random number between 1 - 5 and then prints out a random tip or fact to the user based off of which number the generator outputs.

};


#endif H_FACTS
