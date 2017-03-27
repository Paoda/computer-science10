/*
Name: Rekai Musuka
Date: 30 November 2016
Assignment Name: Days Past
Program Description: Determines the day number in a year which is given by input. This Program also accounts for leap years  
Inputs: Year
Outputs: Year and Days since January 1st. 
*/

#include <iostream>

using namespace std;

int main() {
	const int longMonth = 31, shortMonth = 30;
	int day, month, year, daysPast, febDays;

	cout << "Please enter the desired year: ";
	cin >> year;
	cout << "\nPlease enter the desired month in the numerical form: ";
	cin >> month;
	cout << "\nPlease enter the desired day: ";
	cin >> day;

	//If statement for Leap Years
	if ( year % 4 == 0 && year % 100 != 0) {
		febDays = 29;
	}
	else {
		febDays = 28;
	}
	
	//If statement which adds the previous days of the month when solving for daysPast. 
	if (month == 1) {
		daysPast = day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 2) {
		daysPast = longMonth + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 3) {
		daysPast = longMonth + febDays + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 4) {
		daysPast = (longMonth * 2) + febDays + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 5) {
		daysPast = (longMonth * 2) + febDays + shortMonth + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 6) {
		daysPast = (longMonth * 3) + febDays + shortMonth + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 7) {
		daysPast = (longMonth * 3) + febDays + (shortMonth * 2) + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 8) {
		daysPast = (longMonth * 4) + febDays + (shortMonth * 2) + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 9) {
		daysPast = (longMonth * 5) + febDays + (shortMonth * 2) + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}
	else if (month == 10) {
		daysPast = (longMonth * 5) + febDays + (shortMonth * 3) + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}		
	else if (month == 11) {
		daysPast = (longMonth * 6) + febDays + (shortMonth * 3) + day;
		cout << daysPast <<" days have past since January 1st "<< year << "\n\n";
	}	
	else if (month == 12) {
		daysPast = (longMonth * 6) + febDays + (shortMonth * 4) + day;
		cout << daysPast <<" days have past since January 1st " << year << "\n\n";
	}
	else{
		cout << month << " was an invalid  input.\n\n";
	}		

	return 0;
}
