/*
Name: Rekai Nyangadzayi Musuka 
Date: 15 October 2016
Assignment Name: Area of Circle Calc
Program Description: This program takes an input(radius) and calculates the area of a circle
Inputs: Radius
Outputs: Area of Circle 
*/

#include <iostream>
#include <math.h>

using namespace std; 

int main() {
	const double pi = 3.14159265359;
	float squaredRadius;
	float radius;
	float area;

	cout << "Enter the Radius Here:" << endl;
	cin >> radius;
	cout << endl;

	squaredRadius = pow(radius, 2);

	area = pi*squaredRadius;

	cout << "The radius is " << radius << " therefore the Area is " << area << " or " << squaredRadius << "ƒÎ" << endl << endl;

	return 0;
}//end main