/*
	Output the characters that map to the ASCII codes 32 through 126
	loop to iterate through the input values and output the corresponding character.
*/

#include <iostream>

using namespace std;

int main() {

	unsigned int lowerValue = 0, upperValue = 0;

	cout << "Enter lower and upper values\n";
	cin >> lowerValue;
	cin >> upperValue;

	//Check for lower Value
	while (lowerValue < 32) {
		cout << "Values must be in range 32 to 126 inclusive\n";
		cout << "Enter lower and upper values\n";
		cin >> lowerValue;
		cin >> upperValue;
	}
	//check for upper value
	while (upperValue > 126) {
		cout << "Values must be in range 32 to 126 inclusive\n";
		cout << "Enter lower and upper values\n";
		cin >> lowerValue;
		cin >> upperValue;
	}

	while (lowerValue > upperValue) {
		cout << "Values must be in range 32 to 126 inclusive\n";
		cout << "Enter lower and upper values\n";
		cin >> lowerValue;
		cin >> upperValue;
	}
	
	cout << "Characters for ASCII values between " << lowerValue << " and " << upperValue << endl
		<< "----+----+----+----+\n";
	
	int c = 0; //Counter
	
	for (int v = lowerValue; v <= upperValue; v++) {
		if (c < 20) {
			cout << char(v);
			c++;
		}
		else {
			cout << endl << char(v);
			c = 1;
		}
	}

	cout << "\n----+----+----+----+\n";
	
	return 0;
}