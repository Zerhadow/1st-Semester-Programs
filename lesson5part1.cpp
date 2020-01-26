/*
	You will be calculating the number of seconds it will take for sound to travel though a medium
	Air: 1100 feet per sec
	Water: 4900 ft per sec
	steel: 16400 ft per sec
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	
	double distance = 0, speed = 0;
	//Menu selection
	cout << "Select the medium that sound is traveling through:\n"
		 << "1 Air\n" << "2 Water\n" << "3 Steel\n";
	unsigned int menuNum = 0;
	cin >> menuNum;

	switch (menuNum) {
	case 1:
		cout << "Enter distance (in feet)\n";
		cin >> distance;
		//Checks for distance greater than 0
		if (distance <= 0) {
			cout << "The distance must be greater than zero\n";
		}
		else {
			cout << fixed << showpoint << setprecision(4);
			cout << "Air: " << distance << " ft\n";
			//Equation for Air
			speed = distance / 1100;
			cout << "Traveled for " << speed << " seconds\n";
		}
		
		break;
	case 2:
		cout << "Enter distance (in feet)\n";
		cin >> distance;
		//Checks for distance greater than 0
		if (distance <= 0) {
			cout << "The distance must be greater than zero\n";
		}
		else {
			cout << fixed << showpoint << setprecision(4);
			cout << "Water: " << distance << " ft\n";
			//Equation for Water
			speed = distance / 4900;
			cout << "Traveled for " << speed << " seconds\n";
		}

		break;
	case 3:
		cout << "Enter distance (in feet)\n";
		cin >> distance;
		//Checks for distance greater than 0
		if (distance <= 0) {
			cout << "The distance must be greater than zero\n";
		}
		else {
			cout << fixed << showpoint << setprecision(4);
			cout << "Steel: " << distance << " ft\n";
			//Equation for steel
			speed = distance / 16400;
			cout << "Traveled for " << speed << " seconds\n";
		}

		break;
	//Checks to see is menu number is between 1 and 3
	default:
		cout << "The menu value is invalid. Please run the program again.\n";
		break;
	}

	return 0;
}