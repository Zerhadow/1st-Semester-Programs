/*There are three seating categories at a stadium. For a softball game:
	Class A seats cost $13
	Class B seats cost $11
	Class C seats cost $7
Write a program that asks how many tickets for each class of seats were sold, then displays:
	1. the amount of income per ticket type
	2. the amount of income generated from total ticket sales
	3. the average income per ticket
Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed
*/

#include <iostream>
#include <ios>
#include <iomanip>

using namespace std;

int main() {
	// I defined my constants and the number of seats in each class
	int classA, classB, classC, totalNum;
	const double AMOUNT_A = 13.00, AMOUNT_B = 11.00, AMOUNT_C = 7.00;
	double perTypeA, perTypeB, perTypeC, totalIncome, avgIncome;
	
	// I determined the number seats from asking the user for the amount
	cout << "How many seats are in Class A? " << endl;
	cin >> classA;
	cout << "How many seats are in Class B? " << endl;
	cin >> classB;
	cout << "How many seats are in Class C? " << endl;
	cin >> classC;

	// I defined these variables before showing the outputs
	perTypeA = AMOUNT_A * classA;
	perTypeB = AMOUNT_B * classB;
	perTypeC = AMOUNT_C * classC;
	totalIncome = perTypeA + perTypeB + perTypeC;
	totalNum = classA + classB + classC;
	avgIncome = totalIncome / totalNum;

	// I used showpoint, fixed, and setprecision to make sure that the two places behind the decimal were always showing
	cout << "The total income generated for Class A is $" << showpoint << fixed << setprecision(2) << perTypeA << endl;
	cout << "The total income generated for Class B is $" << showpoint << fixed << setprecision(2) << perTypeB << endl;
	cout << "The total income generated for Class C is $" << showpoint << fixed << setprecision(2) << perTypeC << endl;
	cout << "The total income generated from all Classes is $" << showpoint << fixed << setprecision(2) << totalIncome << endl;
	cout << "The average income generated from all Classes is $" << showpoint << fixed << setprecision(2) << avgIncome << endl;

	return 0;
}