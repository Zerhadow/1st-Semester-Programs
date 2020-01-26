/*
	Read numbers from a file
	Validate the numbers and calculate the average of all of the valid numbers
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {

	//Asks for filename
	cout << "Enter input file name\n";
	string fileName;
	cin >> fileName;

	ifstream inputFile(fileName);
	ofstream outputFile("invalid-values.txt");

	//Checks if the file opens
	if (!inputFile)
	{
		cout << "File " << "\"" << fileName << "\"" << " could not be opened\n";
		inputFile.close();
		return 0;
	}

	int invalidCount = 0, validCount = 0;
	double num, sum = 0.0, avg = 0.0;
	
	while (inputFile >> num) {
		//Checks if it is a valid number of invalid number
		if (num < 0 || num > 105) {
			invalidCount++;
			outputFile << fixed << setprecision(5) << num << endl;
		}
		else
		{
			validCount++;
			sum += num;
		}
	}

	inputFile.close();
	outputFile.close();

	//Display all values
	cout << "Reading from file " << "\"" << fileName << "\"\n";
	cout << "Total values: " << invalidCount + validCount << endl;
	cout << "Invalid values: " << invalidCount << endl;
	cout << "Valid values: " << validCount << endl;

	//Check if average can be calculated or not
	if (validCount != 0.0) {
		avg = sum / validCount;
		cout << "Average of valid values: " << fixed << setprecision(4) << avg << endl;
	}
	else
	{
		cout << "An average cannot be calculated" << endl;

	}

	return 0;
}