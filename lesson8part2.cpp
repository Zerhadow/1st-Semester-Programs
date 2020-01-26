/*
	you will be creating multiple functions to calculate the present value
	You must have three functions that read the future value, the annual interest rate, and the number of years
		 If the value is invalid (zero or negative) you need to display an error message and reread the value (with another prompt)
	You will also need a function called presentValue needs to calculate the present value and return that back to the calling function. 
		The formula: P = F / ( (1 + r) ^ n). Note that the annual interest would be .08 for 8%.
	You also need a function that displays the present value, future value, interest rate, and number of years
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

//Reads the future value
double readFutureV() {
	cout << "Enter future value\n";
	double futureValue;
	cin >> futureValue;
	
	//Checks if the value is not greater than zero
	while (futureValue <= 0) {
		cout << "The future value must be greater than zero\n"
			<< "Enter future value\n";
		cin >> futureValue;
	}
	return futureValue;
}

//Reads the interest rate
double readInterestR() {
	cout << "Enter annual interest rate\n";
	double interestRate;
	cin >> interestRate;

	//Checks if the value is greater than zero
	while (interestRate <= 0) {
		cout << "The annual interest rate must be greater than zero\n"
			<< "Enter annual interest rate\n";
		cin >> interestRate;
	}
	interestRate = interestRate / 100;

	return interestRate;
}

//Reads number of years
int readYears() {
	cout << "Enter number of years\n";
	double years;
	cin >> years;

	//Checks to see if the years is above zero
	while (years <= 0) {
		cout << "The number of years must be greater than zero\n"
			<< "Enter number of years\n";
		cin >> years;
	}
	return years;
}

//Calculates present value
double presentValue(double futureValue, double interestRate, int years) {
	double presentVal = futureValue / pow((1 + interestRate), years);

	return presentVal;
}

//Displays present and future values, annual interest rate and number of years
void displayFunction(double presentVal, double futureValue, double interestRate, int years) {
	cout << showpoint << fixed << setprecision(2) << "Present value: $" << presentVal << endl;
	cout << "Future value: $" << futureValue << endl;
	cout << setprecision(3) << "Annual interest rate: " << (interestRate * 100) << "%\n";
	cout << "Years: " << setprecision(0) << years << endl;

	return;
}

int main() {
	double futureValue;
	futureValue = readFutureV();
	double interestRate = readInterestR();
	int years = readYears();
	double presentVal = presentValue(futureValue, interestRate, years);
	displayFunction(presentVal, futureValue, interestRate, years);
}