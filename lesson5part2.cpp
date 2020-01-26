/*
	Read in the number of seconds and then calculating how far sound can travel in a specified medium in that many seconds
	CO: 258 meters per sec
	Air: 331.5 m per sec
	Helium: 972 m/sec
	Hydrogen: 1270 m/sec
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	double sec = 0, meters = 0;

	cout << "Select the medium that sound is traveling through:\n"
		<< "1 Carbon Dioxide\n" << "2 Air\n" << "3 Helium\n" << "4 Hydrogen\n";
	unsigned int menuNum = 0;
	cin >> menuNum;

	if (menuNum <= 0 || menuNum > 4) {
		cout << "The menu value is invalid. Please run the program again.\n";
	}else if (menuNum == 1) {
		cout << "Enter time (in seconds)\n";
		cin >> sec;
		if (sec < 0 || sec > 30) {
			cout << " The time must be between 0.000 and 30.000 (inclusive)\n";
		}
		else {
			cout << fixed << showpoint << setprecision(3)
				 << "Carbon Dioxide: " << sec << " seconds\n";
			meters = sec * 258.0;
			cout << fixed << showpoint << setprecision(4)
				<< "Traveled " << meters << " meters\n";
		}
	}
	else if (menuNum == 2) {
		cout << "Enter time (in seconds)\n";
		cin >> sec;
		if (sec < 0 || sec > 30) {
			cout << " The time must be between 0.000 and 30.000 (inclusive)\n";
		}
		else {
			cout << fixed << showpoint << setprecision(3)
				<< "Air: " << sec << " seconds\n";
			meters = sec * 331.5;
			cout << fixed << showpoint << setprecision(4)
				<< "Traveled " << meters << " meters\n";
		}
	}
	else if (menuNum == 3) {
		cout << "Enter time (in seconds)\n";
		cin >> sec;
		if (sec < 0 || sec > 30) {
			cout << "The time must be between 0.000 and 30.000 (inclusive)\n";
		}
		else {
			cout << fixed << showpoint << setprecision(3)
				<< "Helium: " << sec << " seconds\n";
			meters = sec * 972.0;
			cout << fixed << showpoint << setprecision(4)
				<< "Traveled " << meters << " meters\n";
		}
	}
	else {
		cout << "Enter time (in seconds)\n";
		cin >> sec;
		if (sec < 0 || sec > 30) {
			cout << " The time must be between 0.000 and 30.000 (inclusive)\n";
		}
		else {
			cout << fixed << showpoint << setprecision(3)
				<< "Hydrogen: " << sec << " seconds\n";
			meters = sec * 1270.0;
			cout << fixed << showpoint << setprecision(4)
				<< "Traveled " << meters << " meters\n";
		}
	}

	return 0;
}