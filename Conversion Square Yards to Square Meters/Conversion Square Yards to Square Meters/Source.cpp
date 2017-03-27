/*
Name: Rekai Musuka
Date: 17 October 2016
Assignment Name: Metric Conversion: Square Yards to Square Meters
Program Description: This Computer Converts Square Yards to Square Meters and Square Meters into Square Yards
Inputs: Square Yards
Outputs: Square Meters
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//declaring variables
	const double conversion = 1.1960;
	double squareYards;
	double squareMeters;

	//Asking for Metric Input
	cout << "Enter the number of Square Meters you wish to convert to Square Yards:" << endl;

	cin >> squareMeters;

	cout << endl;

	//conversion from metric to imperial
	squareYards = squareMeters * conversion;

	// echoing the input and the result of the conversion
	cout << setprecision(2) << squareMeters << " Square Meters is equal to: " << setprecision(2) << squareYards << " Square Yards" << endl << endl;

	//Asking for Imperial input
	cout << "Enter the number of Square Yards you wish to convert to Square Meters:" << endl;
	cin >> squareYards;

	cout << endl;

	//converting from imperial to metric
	squareMeters = squareYards / conversion;

	// echoing the input and the result of the conversion
	cout << setprecision(2) << squareYards << " Square Yards is equal to: " << setprecision(2) << squareMeters << " Square Meters" << endl << endl;

	return 0;
}