/*
	Name: Julian R. Gay 
    NetID: jrg180004
    Date: 9/29/2019
*/
/*
	Write a program that prompts the user for a integer input.
	If the user enters a value outside of the range [-20,20], the program should re-prompt.
	Three options should be tested:
		The user enters a negative number. An isosceles right triangle with two sides equal to the absolute value of the number should be displayed.
		The user enters a positive number.  A square with sides equal to the number should be displayed.
		The user enters a zero.  The program should exit.
	The program should continue to prompt the user and display appropriately until a zero is entered.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Enter a number between -20 and 20. Put 0 to exit program.\n";
	int num = 0;
	cin >> num;

	if (num < -20 || num > 20) {
		cout << "Enter a different number\n\n";
		main();
	}
	else if (num != 0) {
		if (num < 0) {
			for (int c = num; c < 0; c++) {
				for (int a = 0; a > num; a--) {
					cout << "X";
				}
				num++;
				cout << endl;
			}
			main();
		}
		else {
			for (int c = 0; c < num; c++) {
				cout << "X";
				for (int a = 1; a < num; a++) {
					cout << "X";
				}
				cout << endl;
			}
			cout << endl;
			main();
		}
		return 0;
	}
} 