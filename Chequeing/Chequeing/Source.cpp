/*
Name: Rekai Musuka
Date: 16 March 2017
Assignment Name: Chequeing
Program Description: Menu Driven program which updates a checkbook.
Input: Characters such asa W D and Q for withdrawl, deposit and quit, also numeric values for currency
Output: Menu + information about their account.
*/

#include <iostream>
#include <iomanip>
#include <string> //Had to include this because otherwise VS2017 would complain about cout and cin being ambiguous.

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	float balance, withdraw, deposit;
	char menuInput;

	cout << "Welcome to Musuka Banking\n";

	//Asking user for their current funds. 
	cout << "To start off, how much money do you have?\n";
	cout << "$";
	cin >> balance;

	do {
		//The menu itself. This is formatted so that it'll look nice on every run
		cout << "\nPlease enter:\n";
		cout << "W for Withdrawl\n";
		cout << "D for Deposit\n";
		cout << "Q to Quit\n";
		cout << ":";
		cin >> menuInput;

		if (menuInput == 'W' || menuInput == 'w') {
			cout << "\nPlease enter the amount of money you wish to withdraw.\n";
			cout << "$";
			cin >> withdraw;

			balance = balance - withdraw; //Subtraction is for withdrawl

			cout << "\nYou have withdrawed $" << setprecision(2) << withdraw << "\nYour new balance is $" << setprecision(2) << balance << "\n"; //Using setprecision cause money doesn't have more than 2 decimal places
		}
		else if (menuInput == 'D' || menuInput == 'D') {
			cout << "\nPlease enter the amount of money you wish to deposit.\n";
			cout << "$";
			cin >> deposit;

			balance = balance + deposit; //Addition is for deposit.

			cout << "\nYou have deposited $" << setprecision(2) << deposit << "\nYour new balance is $" << setprecision(2) << balance << "\n";
		}else if (menuInput == 'q') {
			menuInput = 'Q'; //This is for making sure that both lower case and upper case work for exiting the program. Using || in the while() condition below didn't work.
		}

	} while (menuInput != 'Q'); //Exit Condition Exists the program too. 

	cout << "\nThank you for using Musuka Banking\n\n";

	return 0;
}//end main



