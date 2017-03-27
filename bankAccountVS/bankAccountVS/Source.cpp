/*
Name: Rekai Musuka
Date: 2 February 2016
Assignment Name: Bank Account
Program Description: Uses a while loop to calculate savings based off of an interest over time.
Inputs: Age, money to put forward every year, interest, and bonus
Outputs: Amount of money saved over the years.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);


	int age, bonus; //Declaring integers
	float interest, savings; //Declaring floats

	//Collecting user input. 
	cout << "How old is your child?\n";
	cin >> age;

	cout << "How much would you like your initial deposit to be?\n$";
	cin >> savings;

	cout << "What is the yearly interest for your child? Enter as a decimal. (ex. 0.055 for 5%)\n";
	cin >> interest;

	//Error Checking
	if (interest <= 1.00) {
		interest = interest + 1.00;
	}
	else if (interest >= 2.00) {
		cout << "You have entered an incorrect input\n";
		return -1;
	}

	cout << "How much will the yearly bonus pay for your child be?\n$";
	cin >> bonus;

	//While loop
	while (age < 18) {
		savings = (savings * interest) + bonus; //Calculates Savins for previous loop

		//English Grammar. How fun.
		if (age == 1) {
			cout << age << " year old | Current Savings: $" << setprecision(2) << savings << endl;
		}
		else {
			cout << age << " years old | Current Savings: $" << setprecision(2) << savings << endl;
		}
		age++; //Age is placed at the end so that we can have Age 0 if applicable
	}
}

