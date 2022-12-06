// Luc DeLaurier
// Computer Science II
// 3 August 2022
// Capstone Project
// 
// This is Luc DeLaurier's Capstone Project for Computer Science 2.  This is a project that is designed to implement 4 of the complex coding concepts that we have learned this semester.
// It is a plant application that provides general information about plants, when to water your plants, and tips and tricks about plants.
// The 4 concepts that I used using classes, constructors and destructors, pointers, and exception handling.  You can find the code for those here.
// classes: lines 31-34 in "main.cpp" as well as in their respective implementation files
// contructors and destructors: lines 233 - 237 in "watering.cpp"
// pointers: in the getPlantType and validateDate functions in "watering.cpp"
// exception handling: all throughout the project, usually in the form of do while loops with nested if else statements


#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "plant.h"
#include "user.h"
#include "watering.h"
#include "facts.h"

using namespace std;

int control = 0;
int* c ;

int main()
{
    c = &control; // pointer initialization
    plants myPlant; // creating class objects
    user myUser;
    watering myWater;
    facts myFact;
    // declaring variables
    int choice = 0; // used for exception handling.
    int month; // used for storing month value
    int day; // used for storing day value
    char yOrNo; // used for user control

    //This is the login portion of the program
    cout << "Hello!\nWelcome to Luc DeLaurier's plant application!\nPlease Select an option to get started.\n";
    do {
        cout << "Is this your first time here? (Y or N)\n";
        cin >> yOrNo;
        if (yOrNo == 'y' || yOrNo == 'Y') {
           
            myUser.firstTime('n');
            control = 1;

        }
        else if (yOrNo == 'n' || yOrNo == 'N') {
            myUser.loginTo();
            control = 1;
        }
        else {
            system("cls");
            cout << "Please enter a valid option.\n";
        }
    } while (control == 0);
    //This is the menu portion of the program and where the main program does its work.
    do {
        control = 2;
        
        
        cout << "Welcome in!  What can I help you with today?\n\n 1. Information about plants.\n\n 2. When should I water my plants next?\n\n 3. Tips & Fun Facts \n\n 4. Exit\n\n";
        cin >> choice;
        system("cls");

        switch (choice) {
        case 1:
            myPlant.plantInformation();
            control = 1;
            break;
        case 2:
            myWater.getPlantType(c);
            switch (control) {
            case 1:
                break;
            case 2:
                do {
                    cout << "When was the last time you watered your plant? (MMDD): \n\n Month: ";
                    cin >> month;
                    cout << " Day: ";
                    cin >> day;
                    myWater.setDate(month, day);
                    myWater.validateDate(c);
                    
                    myWater.waterDate();
                } while (control == 2);
               
            }
            control = 1;
            break;
        case 3:
            myFact.fact();
            control = 1;
            break;
        case 4:
            cout << "Thank you for using Luc DeLaurier's Plant Application!  Please come again soon!\n";
            break;
        default:
            system("cls");
            cout << "\nPlease enter a valid option.\n\n";
            control = 1;
            break;
        }

        
    } while (control == 1);

    system("PAUSE");
}




