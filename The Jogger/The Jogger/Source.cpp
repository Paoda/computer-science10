/*
Name: Rekai Musuka
Date: 20 October 2016
Assignment Name: The Jogger
Program Description: Takes in information about the amount of strides an individual makes and the amount of time it took the user and tells them information based on the information given
Inputs: Hours, Minutes, and Strides in the First and Last Minute of the Jog.
Outputs: Distance of walk in miles.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//declaring variables
	const  double strideinFeet = 2.5;
	double firstMinStride, lastMinStride, avgMinStride, totalTime, distanceInFeet, totalFeet, hours, minutes, distanceInMiles;

	//Asking for Stride Input 
	cout << "Please enter the amount of strides taken in the first minute: " << endl;
	cin >> firstMinStride;

	cout << endl;

	cout << "Please enter the amount of strides taken in the last minute: " << endl;
	cin >> lastMinStride;

	cout << endl;

	//Calculating the Average amount of strides
	avgMinStride = (firstMinStride + lastMinStride) / 2.0;

	//Asking for Time input in Hours and then minutes
	cout << "How many hours did the jog take? " << endl;
	cin >> hours;

	cout << endl;

	cout << "How many minutes were there left over?" << endl;
	cin >> minutes;

	cout << endl;

	//Converting Hours into minutes
	totalTime = (hours * 60.0) + minutes;

	/*Equations that take the Average Minimum stride and calculate 
	how mny feet that would be based on the amount of time */
	distanceInFeet = (avgMinStride * totalTime) / strideinFeet;
	distanceInMiles = distanceInFeet / 5280.0;

	//Echoing all necessary Informaiton.
	cout << "It took you " << setprecision(1) << hours << " hours and " << setprecision(1) << minutes << " minutes. The average amount of strides you did in a minute was " << setprecision(2) << avgMinStride << ". Therefore the distance you travelled was: " << setprecision(2) << distanceInFeet << " feet or " << setprecision(2) << distanceInMiles << " Miles." << endl;

	return 0;
}//end main