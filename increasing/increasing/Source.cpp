/*
Name: Rekai Musuka
Date: 16 March 2017
Assignment Name: Increasing
Program Description: Has a do while and a while loop which makes sure whatever the user inputs is greater than the last number entered.
Inputs: Character W D or Q for menu, integer for num0 and num1
Outputs: Menu Interface + reason why a loop exited e.g. number was the same as the previous one or number is smaller than previous one.
*/

#include <iostream>

using namespace std;

int main() {
	const int maxInt = 2147483647; //TIL This number is also prime!
	char loopChoice;
	int num0 = 0, num1 = 0;

	do {
		//This code asks for user input on what loop they want the program to use;
		cout << "Please choose what loop you want this program to use.\n";
		cout << "W for a while loop\n";
		cout << "D for a do while loop\n";
		cout << "Q to quit the program\n:";
		cin >> loopChoice;

		if (loopChoice == 'W' || loopChoice == 'w') {
			cout << "\nYou chose the while loop.\n";

			num1 = maxInt; //num1 is the Maximum value of an integer so that whatever the user enters as num0, the program will enter the while loop.

			cout << "Enter a starting number\n:";
			cin >> num0;

			while (num0 < num1) {
				if (num1 == maxInt) {
					num1 = 0; //Setting num1 from maxInt to 0 now that we've entered the loop. Hey, it works.
				} else {
					cout << "\nYou have increased.\n";
					num0 = num1; //rewriting num0 to num1 so that the while loop condition will stil check if the number is larger than the last
				}

				cout << "\nEnter a number\n:";
				cin >> num1; //Entering a number into num1. It should be larger than num0 or else we will leave the loop.
			}

			cout << endl << num0 << " was not larger than " << num1 << ".\n\n"; //Echoing why the loop exited
		}else if (loopChoice == 'D' || loopChoice == 'd') {
			cout << "\nYou chose the do while loop.\n";

			int toggle = 1; //This toggle is similar to me checking for maxInt in the while loop portion of this program. It's so that "You have increased only appears if the program is successful

			cout << "Enter a starting number\n";
			cin >> num0;

			do {
				if (toggle == 1) {
					toggle = 0;
				}else {
					cout << "\nYou have increased.\n";
					num0 = num1;
				}

				cout << "\nEnter a number\n:";
				cin >> num1;
			} while (num0 < num1);

			cout << endl << num0 << " was not larger than " << num1 << ".\n\n"; //Echoing why the loop exited

		}else if (loopChoice == 'q') {
			loopChoice = 'Q';
		}

	} while (loopChoice != 'Q');

	cout << "\nThank you for using my program.\n\n";
	
	return 0;
}