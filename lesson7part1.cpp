/*
	 Read sales information from a file and writing out a bar chart for each of the stores
	 The bar charts will be created by writing out a sequence of * characters
*/

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main() {

	unsigned int storeNum = 0;
	long long int storeVal = 0.0;
	
	//Prompt for the input file name
	cout << "Enter input file name\n";
	string fileName;
	cin >> fileName; //read in the file name

	//open the input file for this file name
	ifstream inputFile;
	int num, count = 0;
	inputFile.open(fileName);

	//Display a message if the input file does not open and quit your program
	if (!inputFile) {
		//Outpute file does not open
		cout << "File " << "\"" << fileName << "\"" << " could not be opened\n";
		inputFile.close();
		return 0;
	}
	
	ofstream outputFile;
	//open the output file ("saleschart.txt")
	outputFile.open("saleschart.txt");

	if (!outputFile) {
		//Outpute file does not open
		inputFile.close();
		return 0;
	}
	
	while (inputFile >> storeNum >> storeVal) {
		if (storeNum < 1 || storeNum > 99) cout << "The store number " << storeNum << " is not valid\n";
		else if (storeVal < 0) cout << "The sales value for store " << storeNum << " is negative\n";
		else {
			//output bar chart for this store to the output file
			count++;
			if (count == 1)
			outputFile << "SALES BAR CHART\n"
					   << "(Each * equals 5,000 dollars)\n";
			
			//Display store number
			outputFile << "Store " << setw(2) << storeNum << ": ";
			
			//Checks if the store value is above $5000. If it is, * will be printed for the number of times it is over 5000
			num = storeVal / 5000;
			for (int i = 0; i < num; i++) {
					outputFile << "*";
			}
			outputFile << endl;
		}
	}
	//close the input and output files
	inputFile.close();
	outputFile.close();
	
	return 0;
}