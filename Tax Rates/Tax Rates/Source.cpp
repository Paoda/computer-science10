/*
Name: Rekai Musuka
Date: 7 November 2016
Assignment Name: Tax Rates
Program Description: Inputs User's Salary and then Tells the user their tax bracket, what their tax rate is and what their net income will be.
Inputs: The Salary in $
Outputs: The Tax Bracket, Tax Rate, Gross Income and Net Income
*/
#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//Declaring Variables
	const double
		taxBracket0 = 0.2580, //Fancy Formatting to make thing easier on the eyes
		taxBracket1 = 0.2775,
		taxBracket2 = 0.3325,
		taxBracket3 = 0.3790,
		taxBracket4 = 0.4340,
		taxBracket5 = 0.4640,
		taxBracket6 = 0.5040;
	double salary, netIncome, taxedMoney, totalTaxed, taxPercent;

	cout << "Please enter your salary: $";
	cin >> salary;

	if (salary < 0) {
		cout << "$" << setprecision(2) << salary << " is not a valid input.\n\n";
		exit(1);
	}
	else if (salary <= 31000) {
		system("cls"); //Calls Bash Script "cls" which stands for clear screen. It clears the console so that it's blank.
		
		taxedMoney = salary * taxBracket0; //Calculuates Money that will be taken by tax
		totalTaxed = taxedMoney; //Saying that TaxedMoney and TotalTax are the same (only in this case) 
		netIncome = salary - totalTaxed;  //Subtracting TotalTaxed(taxedMoney) from the Salary to get net income

		taxPercent = taxBracket0 * 100; //Calculating Percentage for Tax Rate just so we can echo it back to the user.

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the first tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed <<".\n";
	}
	else if (salary <= 45282) {
		system("cls");

		taxedMoney = (salary - 31000) * taxBracket1; //From Here on out you have to subtract the largest number from the last bracket to get the amount that is taxed by the current bracket
		totalTaxed = taxedMoney + (31000 * taxBracket0); //From here on out the largest number of all previous brackets will be multiplied by the Tax Rate of their Bracket.
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket1 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the second tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else if (salary <= 67000) {
		system("cls");

		taxedMoney = (salary - 45282) * taxBracket2;
		totalTaxed = taxedMoney + (31000 * taxBracket0) + (14282 * taxBracket1); //The 31000 and the 14282 Add up to the largest number of the last bracket. 
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket2 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the third tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else if (salary <= 90563) {
		system("cls");

		taxedMoney = (salary - 67000) * taxBracket3;
		totalTaxed = taxedMoney + (31000 * taxBracket0) + (14282 * taxBracket1) + (21718 * taxBracket2);
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket3 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the fourth tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else if (salary <= 140388) {
		system("cls");

		taxedMoney = (salary - 90563) * taxBracket4;
		totalTaxed = taxedMoney + (31000 * taxBracket0) + (14282 * taxBracket1) + (21718 * taxBracket2) + (23563 * taxBracket3);
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket4 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the fifth tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else if (salary <= 200000) {
		system("cls");

		taxedMoney = (salary - 140388) * taxBracket5;
		totalTaxed = taxedMoney + (31000 * taxBracket0) + (14282 * taxBracket1) + (21718 * taxBracket2) + (23563 * taxBracket3) + (49825 * taxBracket4);
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket5 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the sixth tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else if (salary > 200000) {
		system("cls");

		taxedMoney = (salary - 200000) * taxBracket6;
		totalTaxed = taxedMoney + (31000 * taxBracket0) + (14282 * taxBracket1) + (21718 * taxBracket2) + (23563 * taxBracket3) + (49825 * taxBracket4) + (59612 * taxBracket5);
		netIncome = salary - totalTaxed;

		taxPercent = taxBracket6 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary << ".\nYour Tax Rate is: " << setprecision(2) << taxPercent << "%. Therefore, you are in the seventh tax bracket.\nYour net Income is: $" << setprecision(2) << netIncome << ".\nYou have lost: $" << setprecision(2) << totalTaxed << ".\n";
	}
	else {
		cout << "$" << setprecision(2) << salary << " is not a valid input.\n\n";
		exit(1);
	}
	cout << "\nThank You for your Time.\n\n";
	return 0;
}