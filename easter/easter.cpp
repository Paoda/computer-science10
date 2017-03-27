/* 
Name: Rekai Musuka
Date: 30 November 2016
Assignment Name: Easter
Program Description: This Program takes in the year and tells the user which day Easter Sunday landed on.
Inputs: Year 
Outputs: Echoed Year and Date that Easter Sunday Lands on. 
*/

#include <iostream>

using namespace std;

int main(){
	int year, easterSunday, a, b, c, d, e;
	cout << "Please enter a year: ";
	cin >> year;

	a = year % 19;
	b = year % 4;
	c = year % 7;
	d = (19 * a + 24) % 30;
	e = (2 * b +4 * c + 6 * d + 5) % 7;
	easterSunday = 22 + d + e;

	if (year == 1954 || year == 1981 || year == 2049 || year == 2076) {
		easterSunday = easterSunday - 38;
		cout << "Easter sunday in " << year << " falls on April " << easterSunday << ".\n\n";
	}
	else if (easterSunday >= 32) {
		easterSunday = easterSunday - 31;
		cout << "Easter sunday in " << year << " falls on April " << easterSunday << ".\n\n";
	}
	else{	
		cout << "Easter sunday in " << year << " falls on March " << easterSunday << ".\n\n";
	}
}
