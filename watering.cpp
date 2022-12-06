#include <iostream>
#include "watering.h"

using namespace std;

// description of what functions do in "watering.h"

void watering::getPlantType(int* c){
	system("cls");
	
	do {
		cout << "What kind of plant do you want to water?\n\n 1. Evergreen\n\n 2. Succulent \n\n 3. Flower\n\n 4. Main Menu\n\n Choice: ";
		cin >> wChoice;
		if (wChoice >= 1 && wChoice <= 3) {
			wControl = 1;
			*c = 2;
			
		}
		else if (wChoice == 4) {
			wControl = 1;
			*c = 1;
		}
		else {
			system("cls");
			cout << "Invalid input. Please try again.\n\n";
			wControl = 0;
			
		}
		
	} while (wControl == 0);
	system("cls");
}
void watering::setDate(int month, int day) {
	if (month >= 1 && month <= 12) {
		m = month;
	}
	else {
		m = 0;
	}
	if (day >= 1 && day <= 31) {
		d = day;
	}
	else {
		d = 0;
	}
}
void watering::validateDate(int* c) {
	if (m == 0 || d == 0) {
		system("cls");
		cout << "Invalid entry. Please try again.\n\n";
		*c = 2;
	}
	else if (m != 0 && d != 0) {
		*c = 1;
	}
}
void watering::printDate() {
	cout << "month: " << m << "Day: " << d;
}
void watering::waterDate() {
	switch (wChoice) {
	case 1:
		system("cls");
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			d = d + 7;
			if (d > 31) {
				d = d - 31;
				m = m++;
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 12:
			d = d + 7;
			if (d > 31) {
				d = d - 31;
				m = 1;
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d = d + 7;
			if (d > 30) {
				d = d - 30;
				m = m++;
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 2:
			d = d + 7;
			if (d > 28) {
				d = d - 28;
				m = m++;
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your Evergreen plant is (" << m << "/" << d << ")\n\n";
			}
			break;
		}
		break;
	case 2:
		system("cls");
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			d = d + 14;
			if (d > 31) {
				d = d - 31;
				m = m++;
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 12:
			d = d + 14;
			if (d > 31) {
				d = d - 31;
				m = 1;
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d = d + 14;
			if (d > 30) {
				d = d - 30;
				m = m++;
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 2:
			d = d + 14;
			if (d > 28) {
				d = d - 28;
				m = m++;
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your succulent is (" << m << "/" << d << ")\n\n";
			}
			break;
		}
		break;
	case 3:
		system("cls");
		switch (m) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			d = d + 3;
			if (d > 31) {
				d = d - 31;
				m = m++;
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 12:
			d = d + 3;
			if (d > 31) {
				d = d - 31;
				m = 1;
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			d = d + 3;
			if (d > 30) {
				d = d - 30;
				m = m++;
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			break;
		case 2:
			d = d + 3;
			if (d > 28) {
				d = d - 28;
				m = m++;
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			else {
				cout << "\n\nThe next date you should water your flowers is (" << m << "/" << d << ")\n\n";
			}
			break;
		}
		break;
	}
}
watering::watering() {
	m = 0;
	d = 0;
}
watering::~watering(){}