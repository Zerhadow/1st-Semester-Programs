/*
	You need to write a program that reads in the mass of an object (in kg)
	and output the weight (in N) on the Earth, on the Moon, and on Venus.
	If the mass is less than or equal to 0 output a message saying the mass must be greater than 0.
	If the weight on the earth is greater than or equal to 1500 newtons output a message saying the object is heavy.
	If the weight on the earth is less than 5 newtons say it is light.
*/

#include <iostream>
#include <iomanip>
using namespace std;

const double EARTH_ACCELERATION = 9.81, MOON_ACCELERATION = 1.62, VENUS_ACCELERATION = 8.87;

int main() {

	cout << "Enter the mass in kg\n";
	double mass = 0;
	cin >> mass;
	// Checks to see if mass is greater than zero
	if (mass <= 0) {
		cout << fixed << showpoint << setprecision(4);
		cout << "The mass is " << mass << " kg\n";
		cout << "The mass must be greater than zero\n";
		return 0;
	}
	// Displays 4 points past the decimal
	cout << fixed << showpoint << setprecision(4);
	cout << "The mass is " << mass << " kg\n"
		<< left << setw(8) << "Location" << right << setw(15) << "Weight (N)\n";

	// Equations to calculate weight of object on these three places
	double earthWeight = mass * EARTH_ACCELERATION, moonWeight = mass * MOON_ACCELERATION,
		venusWeight = mass * VENUS_ACCELERATION;
	cout << left << setw(8) << "Earth" << right << setw(14) << earthWeight << endl;
	cout << left << setw(8) << "Moon" << right << setw(14) << moonWeight << endl;
	cout << left << setw(8) << "Venus" << right << setw(14) << venusWeight << endl;
	
	//If the weight on the earth is greater than or equal to 1500 newtons output a message saying the object is heavy.
	if (earthWeight >= 1500) cout << "The object is heavy\n";
	//If the weight on the earth is less than 5 newtons say it is light.
	if (earthWeight < 5) cout << "The object is light\n";

	return 0;
}
