/*
Name: Rekai Nyangadzayi Musuka
Date: 18 October 2016
Assignment Name: Cutting the Grass
Program Description: This Program thaks the height and the width of both the lot and the house and subtracts  the two items to get the amount of lawn that must be mowed
Inputs: House Width, House Length, Lot Width, House Length.
Outputs: Area that needs to be mowed, and how long it will take to mow said lawn. 
*/

// Declaring Needed libraries
#include <iostream>
#include <iomanip>

// so I don't have to use std:: 
using namespace std; 

int main() {
	//preparing for setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);
	
	//declaring variables
	const double rate = 0.87;
	double timeInMin, areaToMow, lengthLot, widthLot, lengthHouse, widthHouse;

	//Entering Lot variables
	cout << "First you may enter the dimensions of the lot. (in meters)" << endl;
	cout << "Enter the length of the Lot:" << endl;
	cin >> lengthLot;
	cout << "Enter the width of the Lot:" << endl;
	cin >> widthLot;

	cout << endl;

	//Entering House variables
	cout << "Secondly, you may enter the dimensions of the house. (in meters)" << endl;
	cout << "Enter the length of the House:" << endl;
	cin >> lengthHouse;
	cout << "Enter the width of the House:" << endl;
	cin >> widthHouse;

	//The Maths 
	areaToMow = (lengthLot * widthLot) - (lengthHouse * widthHouse);

	cout << endl;

	//Echoes Input and the Area to Mow 
	cout << "Considering that the width and length of the lot are " << setprecision(2) << widthLot << "m and " << setprecision(2) << lengthLot << "m respectivley, and the width and length of the house are " << setprecision(2) << widthHouse << "m and " << setprecision(2) << lengthHouse << "m, the area that needs to be mowed is " << setprecision(2) << areaToMow << "m squared." << endl << endl;

	//More Maths this time for time 
	timeInMin = (areaToMow / rate)  / 60.0;

	//Echoes Area to Mow and the Time needed to mow. 
	cout << "The area that needs to be mowed is " << setprecision(2) << areaToMow <<"m, and since the the rate is " << setprecision(2) << rate << "meters per second, mowing the lawn with the area " << setprecision(2) << areaToMow << "meters squared, will take " << setprecision(2) << timeInMin << " minutes." << endl;

	return 0;
}//end main