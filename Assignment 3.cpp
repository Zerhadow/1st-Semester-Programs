/*
Write a program to calculate the number of pizzas needed for a party. The program should perform the following steps:
1. Ask the user for the number of people at the party.
2. Ask the user for the diameter of the pizza in inches.
3. Calculate the number of slices that may be taken from a pizza of that size.
4. Display a message telling the number of slices per pizza.
5. Calculate the number of pizzas you need to buy for the party if each person attending is expected to eat an average of four slices.
6. Display a message telling the number of pizzas.

Notes:
To calculate the number of slices that may be taken from the pizza, you must know the following facts:
	Each slice should have an area of 14.125 inches.
	To calculate the number of slices, simply divide the area of the pizza by 14.125.
	The area of the pizza is calculated with this formula:
		Area = πr2
			π is the Greek letter pi. 3.14159 can be used as its value.
			The variable r is the radius of the pizza. Divide the diameter by 2 to get the radius.
Make sure the output of the program displays in fixed-point notation, rounded to one decimal place of precision.
Use a named constant for pi.
*/

#include <iostream>
using namespace std;

int main() {

	int people;
	double diameter;
	
	//First, ask the user for the number of people at the party.
	cout << "How many people will be at the party?" << endl;
	cin >> people;
	//Second, Ask the user for the diameter of the pizza in inches.
	cout << "What is the diameter of the pizza in inches?" << endl;
	cin >> diameter;

	//Now it is time to calculate the number of slices that may be taken from a pizza of that size.

	double sliceArea = 14.125, area, radius;
	radius = diameter / 2;
	
	const double PI = 3.14159;
	area = PI * (radius * radius);
	int numSlices = area / sliceArea;
	
	//Display a message telling the number of slices per pizza.
	cout << "The number of slices per pizza is " << numSlices << endl;

	//Calculate the number of pizzas you need to buy for the party if each person attending is expected to eat an average of four slices.
	int numPizzas = (people * 4) / numSlices;

	//Finally, display a message telling the number of pizzas.
	cout << "You need " << numPizzas << " pizzas! Got get them quick! And don't forget the soda!" << endl;

	return 0;
}