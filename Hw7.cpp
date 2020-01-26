/*
	Name  : Julian RaShaun Gay
    NetID : jrg180004
    Date  : 10/17/2019
*/
/*
	Write a program that asks the user for an angle, entered in degrees
	Convert degrees to radians
	Should display the sine, cosine, secant, cosecant, tangent, and cotangent of the angle
	Display in tabular format with the data labeled using fixed-point notation, rounded to four decimal places of precision
	Program should loop until a negative number is entered
	Only use sin() and cos()
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double degrees, rad;
	//Constant for PI according to previous hw problem
	const double PI = 3.141592653598979323846;

	// Ask user to enter angle in degrees
	cout << "Enter an angle in degrees. Enter a negative number to end program\n";
	cin >> degrees;

	if (degrees < 0) {
		cout << "Program has ended\n";
		return 0;
	}
	else {
		//Equation to convert degrees to radians
		rad = (degrees * PI / 180);

		cout << "You entered " << degrees << " degrees, which converts to " << rad << " radians\n";

		// Equations for the functions using only sin() and cos()
		double sec = 1 / cos(rad), csc = 1 / sin(rad), tan = sin(rad) / cos(rad),
			cot = cos(rad) / sin(rad);
		
		// Use if statements if 1/0
		if (degrees == 90 || degrees == 270) {
			sec = nan(0);
			tan = nan(0);
		}
		if (degrees == 180 || degrees == 360) {
			csc = nan(0);
			cot = nan(0);
		}
		
		// Tabular representation of data
		cout << left << setw(1) << "Function" << right << setw(20) << "Radians\n"
			<< "---------------------------\n";
		cout << fixed << showpoint << setprecision(4);

		cout << left << setw(1) << "Sine" << right << setw(23) << sin(rad) << endl;
		cout << left << setw(1) << "Cosine" << right << setw(21) << cos(rad) << endl;
		cout << left << setw(1) << "Secant" << right << setw(21) << sec << endl;
		cout << left << setw(1) << "Cosecant" << right << setw(19) << csc << endl;
		cout << left << setw(1) << "Tangent" << right << setw(20) << tan << endl;
		cout << left << setw(1) << "CoTangent" << right << setw(18) << cot << endl;

		main();
	}
}