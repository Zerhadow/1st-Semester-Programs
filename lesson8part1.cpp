/*
	Calculate the distance an object travels (in meters) on Earth for a specified number of seconds
	Also calculate the distance traveled on the Moon (in meters) for the specified number of seconds
	Must have the main function and four additional functions
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double readseconds();
double calculateEarthDistance(double);
double calculateMoonDistance(double);
void displayResults(double, double, double);

int main() {
		double second;
		second = readseconds();
		//Check counter in order to loop the function
		bool check = false;

		while(!check) {
			if (second == 0) {
				check = true;
				return 0;
			}
			else if (second < 0) {
				second = readseconds();
			}
			else {
				double earthDistance = calculateEarthDistance(second);
				double moonDistance = calculateMoonDistance(second);

				displayResults(second, earthDistance, moonDistance);
				second = readseconds();
			}
		}		
}

//will be an input function that will read in a double value from cin and return that value back to main
double readseconds() {
	double sec;
	cout << "Enter the time (in seconds)\n";
	cin >> sec;
	while (sec < 0) {
		cout << "The time must be zero or more\n";
		cout << "Enter the time (in seconds)\n";
		cin >> sec;
	}
	return sec;
}

//function will calculate the distance an object falls (on Earth) during the specified number of seconds
double calculateEarthDistance(double seconds) {
	double earthDistance = 0.5 * 9.8 * pow(seconds, 2);
	
	return earthDistance;
}

//function will calculate the distance an object falls (on the Moon) during the specified number of seconds
double calculateMoonDistance(double seconds) {
	double moonDistance = 0.5 * 1.6 * pow(seconds, 2);

	return moonDistance;
}

//function that will display the number of seconds an object has fallen as well as the distance the object has fallen on the Earthand on the Moon
void displayResults(double seconds, double earthDistance, double moonDistance) {
	cout << showpoint << fixed << setprecision(4)
		<< "The object traveled " << earthDistance << " meters in " << setprecision(2) << seconds << " seconds on Earth\n";
	cout << "The object traveled " << setprecision(4) << moonDistance << " meters in " << setprecision(2) << seconds << " seconds on the Moon\n";

	return;
}