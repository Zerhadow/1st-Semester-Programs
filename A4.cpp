/*
	Write a program that prompts the user to enter 3 numbers
	Once entered, display the minimum and maximum numbers in the set.
	Do not use min/max or other numeric functions.
	Use only conditional statements to evaluate.
*/ 

#include <iostream>
using namespace std;

int main() {

	//Tell the user to input 3 numbers
	double num1, num2, num3;

	cout << "Please enter three numbers." << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	//Now it's time to find the minimum of the numbers
	if (num1 < num2 && num1 < num3) {
		cout << "\nThe minimum value is " << num1;
	}
	else if (num2 < num1 && num2 < num3) {
		cout << "\nThe minimum value is " << num2;
	}
	else {
		cout << "\nThe minimum value is " << num3;
	}

	//Checking for the maximum of the numbers
	if (num1 > num2 && num1 > num3) {
		cout << "\nThe maximum value is " << num1 << endl;
	}
	else if (num2 > num1 && num2 > num3) {
		cout << "\nThe maximum value is " << num2 << endl;
	}
	else {
		cout << "\nThe maximum value is " << num3 << endl;
	}

	return 0;
}