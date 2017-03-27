/*
Name: Rekai Musuka
Date: 27 October 2016
Assignment Name: Time Conversion
Program Description: Takes seconds input and outputs that input in Years, Weeks, days, hours, minutes and secons.
Inputs: Seconds under variable name input
Outputs: input in: Years, Weeks Days, Hours Minutes, and Seconds
*/

#include <iostream>

using namespace std; 

int main() {
	// Declaring a lot of unsigned integers. RIP efficient memory management 
	const unsigned long secInMin = 60, secInHour = 3600, secInDay = 86400, secInWeek = 604800, secInYear = 31536000;
	unsigned long  input, years, weeks, days, hours, minutes, seconds, yearsR, weeksR, daysR, hoursR, minutesR;

	//Asking for input in seconds
	cout << "Enter the amount of seconds you wish to convert." << endl; 
	cin >> input;

	//Making sure things look nice.
	cout << endl;

	//Here's the math
	years = input / secInYear;
	yearsR = input % secInYear;

	weeks = yearsR / secInWeek;
	weeksR = yearsR % secInWeek;

	days = weeksR / secInDay;
	daysR = weeksR % secInDay;

	hours = daysR / secInHour;
	hoursR = daysR % secInHour;

	minutes = hoursR / secInMin;

	seconds = hoursR % secInMin;

	//Echoing the Results
	cout << "Years: " << years << endl; 
	cout << "Weeks: " << weeks << endl;
	cout << "Days: " << days << endl;
	cout << "Hours: " << hours << endl;
	cout << "Minutes: " << minutes << endl;
	cout << "Seconds: " << seconds << endl << endl;
	return 0; 
}//endmain