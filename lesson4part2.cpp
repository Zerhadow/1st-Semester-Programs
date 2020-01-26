/*
	You will read in the number of seconds and convert it to days, hours, minutes and remaining seconds. 
*/

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main() {
	// Read number of seconds
	cout << "Enter seconds\n";
	long long int seconds = 0;
	cin >> seconds;
	//Check if seconds is greater than zero
	if (seconds <= 0) {
		cout << "Total seconds: " << seconds << endl << endl;
		cout << "Total seconds must be greater than zero\n";
	}
	else {
		cout << "Total seconds: " << seconds << endl << endl;
		
		if (seconds >= 86400) {
			int days = seconds / 86400;
			int hours = (seconds - (days * 86400)) / 3600;
			int mins = (seconds - (days * 86400) - (hours * 3600)) / 60;
			int sec = seconds - (days * 86400) - (hours * 3600) - (mins * 60);

			cout << days << " day(s)\n";
			// Check if there are hours
			if (hours > 0) {
				cout << hours << " hour(s)\n";
				//Check for minutes
				if (mins > 0) {
					cout << mins << " minute(s)\n";
					//Check for seconds
					if (seconds > 0) {
						cout << sec << " second(s)\n";
					}
				}
			}
			else if (mins > 0) {
				cout << mins << " minute(s)\n";
				//Check for seconds
				if (seconds > 0) {
					cout << sec << " second(s)\n";
				}
			} else cout << sec << " second(s)\n";
			
		}
		else if (seconds >= 3600) {
			int hours = seconds / 3600;
			int mins = (seconds - (hours * 3600)) / 60;
			int sec = seconds - (hours * 3600) - (mins * 60);
			
			cout << hours << " hour(s)\n";
			
			// Check if there are minutes
			if (mins > 0) {
				cout << mins << " minute(s)\n";
				//Check if there are seconds
				if (seconds > 0) {
					cout << sec << " second(s)\n";
				}
			} if (seconds > 0) {
				cout << sec << " second(s)\n";
			}
		}
		else if (seconds >= 60) {
			int mins = seconds / 60;
			int sec = seconds - (mins * 60);
			
			cout << mins << " minute(s)\n";			
			// Check if there are seconds
			if (sec > 0) cout << sec << " second(s)\n";
		} 

	}	

	return 0;
}