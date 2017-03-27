/*
Name: Rekai Musuka
Date: 2 February 2016
Assignment Name: Falling
Program Description: Accepts elevation as an input and calculates how long it takes for an object to hit the ground.
Inputs: Elevation
Outputs: The distance to the ground along with the time in intervals, along with a "Splat" when it hits the ground.
*/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//Declaring Variables
	const float gravity = 9.80665; //Speed of Gravity in m/s
	float interval, time, elevation, ballElevation; //All Floats because I don't want to restrain the user
	time = 0.00; //Declaring Time

	//Recieving User Input
	cout << "Please state the elevation of your tower from the ground in meters: ";
	cin >> elevation;

	ballElevation = elevation; //The Ball has to start from the top of to tower right?

	cout << "Please enter the interval between readings in seconds: ";
	cin >> interval;

	//Formatting Table Headers
	cout << "\nTime" << setw(9) << "Height\n"; //hah setw(), haven't seen this in a while.
	cout << "----" << setw(10) << "------\n";

	//While loop that handles the "meat" of this program.
	while (ballElevation > 0) {
		cout << setprecision(2) << time << " | " << setprecision(2) << ballElevation << endl; //echos the time and the current height of ball.
		cout << "----" << setw(2) << "|" << setw(8) << "------\n"; //Creates cells for viewing pleasure
		time = time + interval; //takes time and adds interval on top of existing time. eg. 0.5 = 0 + 0.5 or  4 = 3.5 + 0.5 influences math below.
		ballElevation = elevation - (0.5 * gravity * pow(time, 2)); //subtracts half of gravity * time to the power of two. the (0.5*gravity...)... thing is how you calculate how much the object travelled.
	}
	cout << setprecision(2) << time << " | " << "Splat!\n\n"; //program says this when it exists the loop, so when the elevation of the ball is no longer above 0. 

}