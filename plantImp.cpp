#include <iostream>
#include <fstream>
#include <string>
#include "plant.h"

using namespace std;

// description of what functions do in "plant.h"

void plants::plantInformation() {
	do {

		system("cls");
		plantControl = 0;
		do {
			cout << "Which kind of plant would you like more information about?\n\n 1. Evergreen Plants\n\n 2. Succulents\n\n 3. Flowers\n\n 4. Main Menu\n\n Option: ";
			cin >> plantChoice;
			if (plantChoice >= 1 && plantChoice <= 4) {
				system("cls");
				plantControl = 1;
			}
			else {
				system("cls");
				cout << "Invalid Option.  Please try again.\n\n";
				plantControl = 0;
			}

		} while (plantControl == 0);
		do {
			switch (plantChoice) {
			case 1:
				cout << "\nEvergreen plants are very Interesting plants.  Their foliage remains green through more then one growing season!\n\n";
				cout << "This contrasts with deciduous plants, which lose their foliage in winter or dry seasons.  There are plenty of different \n\n";
				cout << "kinds of evergreen plants.  It varies anywhere from trees to shrubs.  Most species of conifers fall under the evergreen\n\n";
				cout << "species, like pine or spruce for example.\n\n";
				plantChoice = 3;
				do
				{


					cout << "\nWhat would you like to do?\n\n 1. Learn about another plant\n\n 2. Main Menu \n\nChoice: ";
					cin >> plantChoice;
					if (plantChoice == 1) {
						plantControl = 2;
					}
					else if (plantChoice == 2) {
						plantControl = 3;
					}
					else
					{
						system("cls");
						cout << "\nInvalid input. Please try again.\n\n";
						plantChoice = 3;
					}
				} while (plantChoice == 3);
				break;

			case 2:
				cout << "\nSucculents are peronally my favorite kind of plant. Succulents have very thick hard leaves. That is one of their\n\n";
				cout << "identifying characteristics. They are often found in desert areas because they don't need much water to survive.\n\n";
				cout << "They are commonly reffered to as 'indoor' plants becasue they are relatively low maintenance. Some of the most common\n\n";
				cout << "types of succulents are aloe plants, cacti, and even orchids can be considered a succulent.\n\n";
				plantChoice = 3;
				do
				{


					cout << "\nWhat would you like to do?\n\n 1. Learn about another plant\n\n 2. Main Menu \n\nChoice: ";
					cin >> plantChoice;
					if (plantChoice == 1) {
						plantControl = 2;
					}
					else if (plantChoice == 2) {
						plantControl = 3;
					}
					else
					{
						system("cls");
						cout << "\nInvalid input. Please try again.\n\n";
						plantChoice = 3;
					}
				} while (plantChoice == 3);

				break;
			case 3:
				cout << "\nAhhh. Who doesn't love the smell of flowers! Flowers are possibly the first plant everyone learns about, next to trees.\n\n";
				cout << "Flowers get their name from their reproductive system, called a flower. The flowers function in a flowering plant is to\n\n";
				cout << "facilitate reproduction. Flowers are well known for their nice smell, and pretty looks. Some popular types of flowers\n\n";
				cout << "may include: tulips, roses, and lillies.\n\n";
				plantChoice = 3;
				do
				{


					cout << "\nWhat would you like to do?\n\n 1. Learn about another plant\n\n 2. Main Menu \n\nChoice: ";
					cin >> plantChoice;
					if (plantChoice == 1) {
						plantControl = 2;
					}
					else if (plantChoice == 2) {
						plantControl = 3;
					}
					else
					{
						system("cls");
						cout << "\nInvalid input. Please try again.\n\n";
						plantChoice = 3;
					}
				} while (plantChoice == 3);

				break;
			case 4:

				plantControl = 3;

				break;

			}
		} while (plantControl == 1);

		system("cls");

	} while (plantControl == 2);

}