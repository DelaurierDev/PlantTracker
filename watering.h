#ifndef H_WATERING
#define H_WATERING

#include <iostream>

using namespace std;

// all definitions in "watering.cpp"

class watering {
private:
	int wChoice = 0; // used for user control
	int wControl = 0; // used for exception handling
	int m; // used to store the month value
	int d; // used to store the day value
	
public:
	void getPlantType(int*);
	// This is the function that is used to get what type of plant the user is looking to water.
	void setDate(int, int);
	// This is the function used to set that date into the class scope to use for further manipulation.
	void validateDate(int*);
	// This is a function used to validate that the user input a correct date.
	void printDate();
	// This is a function used to print the date and the value of control I was using to make sure everything was working properly.
	void waterDate();
	// This is the function used to calculate when the user should water their plants next, and prints it out to the user.
	watering(); // constructor
	~watering(); // destructor
};


#endif H_WATERING
