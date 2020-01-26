/*
	 Name  : Julian RaShaun Gay
     NetID : jrg180004
     Date  : 09/22/2019
*/

/*
	Write a program that asks for a temperature in degrees Fahrenheit,
	then calculates if the following substances would be solid, liquid, or gas at that temperature.
	-water
	-lead
	-alcohol (ethanol)
	-nitrogen
	-mercury
	-chlorine
	Note: The assumption is standard pressure.
	Do not let the user enter a temperature above 3000 or below –459.67.
*/

#include <iostream>
using namespace std;

int main() {

	cout << "What type substance are we looking at today?\n";
	cout << "1. water\n" << "2. lead\n" << "3. alcohol (ethanol)\n" << "4. nitrogen\n" << "5. mercury\n" << "6. chlorine\n\n";
	int substance = 0;
	cin >> substance;
	double temp;

	switch (substance) {
	case 1:
		cout << "You chose WATER!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Checking the state of the water. Converted freezing and boiled point into Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < 32) {
			cout << "It's a solid!\n";
		}
		else if (temp > 32 && temp < 212) {
			cout << "It's a liquid!\n";
		}
		else if (temp > 212) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		} 
		break;
	case 2:
		cout << "You chose LEAD!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Boiling point: 3164 Fahrenheit | Freezing Point: 621.5 Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < 621.5) {
			cout << "It's a solid!\n";
		}
		else if (temp > 621.5 && temp < 3164) {
			cout << "It's a liquid!\n";
		}
		//Doesn't check for gas because it is out of our range
		else if (temp > 3164) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		}
		break;
	case 3:
		cout << "You chose ALCOHOL!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Boiling point: 173.12 Fahrenheit | Freezing Point: -173.2 Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < -173.2) {
			cout << "It's a solid!\n";
		}
		else if (temp > -173.2 && temp < 173.12) {
			cout << "It's a liquid!\n";
		}
		else if (temp > 173.12) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		}
		break;
	case 4:
		cout << "You chose NITROGEN!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Boiling point: -320.44 Fahrenheit | Freezing Point: -346 Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < -346) {
			cout << "It's a solid!\n";
		}
		else if (temp > -346 && temp < -320.44) {
			cout << "It's a liquid!\n";
		}
		else if (temp > -320.44) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		}
		break;
	case 5:
		cout << "You chose MERCURY!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Boiling point: 674.06 Fahrenheit | Freezing Point: -37.84 Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < -37.84) {
			cout << "It's a solid!\n";
		}
		else if (temp > -37.84 && temp < 674.06) {
			cout << "It's a liquid!\n";
		}
		else if (temp > 674.06) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		}
		break;
	case 6:
		cout << "You chose CHLORINE!\n" << "What is the temperature of it?(Fahrenheit)\n";
		cin >> temp;
		//Boiling point: -29.2 Fahrenheit | Freezing Point: -150.7 Fahrenheit
		if (temp < -459.67) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp > 3000) {
			cout << "Try a number in between -459.67 and 3000 Fahrenheit.\n";
		}
		else if (temp < -150.7) {
			cout << "It's a solid!\n";
		}
		else if (temp > -150.7 && temp < -29.2) {
			cout << "It's a liquid!\n";
		}
		else if (temp > -29.2) {
			cout << "It's a gas!\n";
		}
		else {
			cout << "Error?";
		}
		break;
	default: cout << "Invalid Response. Try again.\n";
	}

	return 0;
}