/*
Name: Rekai Musuka
Date: 10 March 2017
Assignment Name: Barber Pole
Program Description: Logs a Barber Pole like matrix of numbers
Inputs: User input containing the input which will have the impact on the appearance of the pole
Output: The Barber Pole
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int input;

	//Whats Interesting is that due to place values the barber pole effect is only works between 1 and 5. I don't know if this is because of my messed up terminal or not But I'll assume it isn't

	cout << "Please enter a number: "; //Askign for user input
	cin >> input;

	//Checking Input
	if (input <= 0 || input >= 6) {
		cout << input << " was not a valid input.\n";

		//A ternary operator, essentially a mini if statement. Checks to see if input is greater than zero, returns true or false depending on the boolean it returns a different piece of code
		(input >= 0) ? cout << "It was too large\n" : cout << "It was too small\n";
		return -1;
	}

	//The Barber pole maths
	for (int i = 1; i <= input; i++) {
		for (int j = 0; j < input; j++) {
			cout << i + j << setw(2); //Setw(); will make things look nice
		}
		cout << "\n";
	}
}

//It seems like I encountered the same problem that Alex did...