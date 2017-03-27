/*
Name: Rekai Musuka
Date: 17 October 2016
Assignment Name: Metric Conversion: Temperature
Program Description: This Computer Converts  user input in Fahrenheit to Celsius and then converts user input in Celisus to Fahrenheit.
Inputs: Temperature in Fahrenheit and Celsius
Outputs: Temperature in Celsius and Fahrenheit
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//declaring variables
	double ustemp;
	double celsius;

	//asking for fahrenheit input
	cout << "Enter Fahrenheit Temperature to convert to Celsius:" << endl;
	cin >> ustemp;

	// celsius conversion
	celsius = (5.0 / 9.0)*(ustemp - 32.0);

	cout << endl;
	
	// echoes out equation output
	cout << setprecision(1) << ustemp << " Fahrenheit is equal to " << setprecision(1) << celsius << " in Celsius. " << endl << endl;

	//asking for celsius input
	cout << "Enter Celsius Temperature to convert to Fahrenheit:" << endl;

	cin >> celsius;

	// fahrenheit conversion
	ustemp = (celsius*(9.0 / 5.0)) + 32.0;

	cout << endl;

	//echoes out equation output
	cout << celsius << " Celisus is equal to " << setprecision(1) << ustemp << " in Fahrenheit." << endl << endl;

	return 0;
}//end main