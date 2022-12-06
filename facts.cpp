#include <iostream>
#include <cstdlib>

#include "facts.h"

// description of what functions do in "facts.h"

void facts::fact() {
	do {
		system("cls");
		factNum = rand() % 6;
		switch (factNum) {
		case 0:
			factControl = 0;
			break;
		case 1:
			cout << "\nEvergreens have been used in winter festivals, most commonly known as a 'christmas tree', for thousands of years!\n\n";
			factControl = 1;
			break;
		case 2:
			cout << "\nApproximately 60 different plant families contain succulents!\n\n";
			factControl = 1;
			break;
		case 3:
			cout << "\nRoses are related to several fruits, such as: apples, rasberries, and peaches!\n\n";
			factControl = 1;
			break;
		case 4:
			cout << "\nPutting coffee beans in a plants soil can help it flourish!\n\n";
			factControl = 1;
			break;
		case 5:
			cout << "\nPlants get beneficial nutrients from egg shells and milk. Just like us humans do!\n\n";
			factControl = 1;
			break;
		}
	} while (factControl == 0);

}

using namespace std;