/*
	Convert a set of temperatures from Fahrenheit to Celsius and Kelvin
	 Read in three double values. The first values are starting and ending temperatures
	 Should be 18 characters wide with 4 digits of precision and fixed
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double startingTemp = 0, endingTemp = 0, increment = 0;

	cin >> startingTemp;
	cin >> endingTemp;
	cin >> increment;

	//Check if starting and ending values are valid
	while (startingTemp > endingTemp || increment <= 0) {
		cout << "Starting temperature must be <= ending temperature and increment must be > 0.0\n";
		cin >> startingTemp;
		cin >> endingTemp;
		cin >> increment;
	}
		
	cout << fixed << showpoint << setprecision(4)
			<< setw(18) << "Fahrenheit" << setw(18)<< "Celsius" << setw(19) << "Kelvin\n";
	//Will read until at ending temp
	for (double f = startingTemp; f <= endingTemp; f += increment) {
			//Equations for temp conversions
			double celsius = (f - 32) / 1.8;
			double kelvin = celsius + 273.15;

			cout << setw(18) << f << setw(18) << celsius << setw(18) << kelvin << endl;
	}
	return 0;
}