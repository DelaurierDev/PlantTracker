#include <iostream>
#include <fstream>
#include <string>
#include "user.h"

using namespace std;

// description of what functions do in "user.h"

    void user::firstTime(char yOrNoTwo) {
        
        system("cls");
        while (yOrNoTwo == 'n' || yOrNoTwo == 'N') {
            if (login <= 1000 || login >= 9999) {
                cout << "Please enter a user login number of 4 digits:\n";
                cin >> login;
            }
            else if (login >= 1000 || login <= 9999) {
                do {
                cout << "Are you sure you want " << login << " to be your login number? (Y or N)\n";
                cin >> yOrNoTwo;
                
                    if (yOrNoTwo == 'n' || yOrNoTwo == 'N') {
                        login = 0;
                        controlTwo = 1;
                    }
                    else if (yOrNoTwo == 'y' || yOrNoTwo == 'Y') {
                        system("cls");
                        cout << "You're all set up!  Remeber that number and you can use it to login next time you're here :)\n";
                        controlTwo = 1;
                        ofstream reg("records.txt" , ios::app);
                        reg << login;
                    }
                    else {
                        cout << "Please enter a valid option.\n";
                        controlTwo = 0;
                    }
                } while (controlTwo == 0);
            }
        }
        
    }

    void user::loginTo() {
        
        do {
            cout << "Please enter your 4 digit login number: ";
            cin >> l;

            ifstream input("records.txt");
            while (input >> lr) {
                if (lr == l) {
                    controlTwo = 1;
                }
                else if (lr != l) {
                    cout << "\nInvalid login number, please try again\n";
                    controlTwo = 0;
                }
            }
            input.close();
            system("cls");

        } while (controlTwo == 0);
    }
