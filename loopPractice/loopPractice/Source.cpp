/*
Name: Rekai Musuka
Date: 2 February 2016
Assignment Name: Loop Practice
Program Description: Has two loops which displays squares of integers along with each even integer between 4 and -6
Inputs: None
Outputs: squares of integers, the original number and even numbers between -6 and 4
*/

#include <iostream>

#include <math.h>

using namespace std;

int main() {

	int base, power, num, i; //Declaring variables
	i = 1; //index must equal 1 in order to use it in the cout below

	while ( i < 6) {
		power = pow(i, 2);
		cout << i << " | " << power << endl;
		i++;
	}
	
	cout << "\n\n"; //Formatting

	i = 4; //preparing for next while() loop

	while (i > -5) {
		cout << i << endl; //no need for formatting in this one.
		i--;
	}


}
