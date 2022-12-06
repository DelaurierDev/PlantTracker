#ifndef H_USER
#define H_USER

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// all definitions in "user.cpp"

class user {
private:
	char yOrNoTwo; // used to make sure the user wants that to be their code
	int login; // stores login code
	int controlTwo; // used for exception handling
	int l , lr; // used for checking login code
public:
	void firstTime(char);
	//This is the function used for if the user input 'y' when asked if it is their first time using the program. it prompts them to enter a login code and stores it in a file.
	void loginTo();
	//This is the function used for if the user input 'n' when asked if it is their first time using the program. it checks the file for their login and grants them access.
};










#endif H_USER
