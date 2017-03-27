/*
Name: Rekai Musuka
Date: 12 November 2016
Assignment Name: Trudeau vs. Harper Bonus Assignment
Program Description: Compares Trudeau's and Harper's Tax Plan and determines which one is the best. 
Outputs: The Tax Rate, Tax Bracket, Salary, Difference between plans and money lost to taxes.
*/

#include <iomanip>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	//Setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	//Trudeau's Constant Variables
	const double
		tTaxRate0 = 0.2580, // first $31 000
		tTaxRate1 = 0.2775, // Over $31 000 up to $45 282
		tTaxRate2 = 0.3325, // Over $45 282 up to $67 000
		tTaxRate3 = 0.3790, // Over $67 000 up to $90 563
		tTaxRate4 = 0.4340, // Over $90 563 up to $140 388
		tTaxRate5 = 0.4640, // Over $140 399 up to $200 000
		tTaxRate6 = 0.5040; // Over $200 000

	//Harper's Constant Variables
	const double
		hTaxRate0 = 0.2580, // Over(first?) $31 000
		hTaxRate1 = 0.2775, // Over $31 000 up to $45 282
		hTaxRate2 = 0.3475, // Over $45 282 up to $67 000
		hTaxRate3 = 0.3940, // Over $67 000 up to $90 563
		hTaxRate4 = 0.4340, // Over $90 563 up to $140 388
		hTaxRate5 = 0.4640; // Over $140 000

	//Common Variable 
	double salary, tNetIncome, hNetIncome,taxedMoney, tTotalTaxed, hTotalTaxed, tTaxPercent, hTaxPercent, difference;

	cout << "Please enter your salary: $";
	cin >> salary;

	if (salary < 0) {
		cout << "$" << setprecision(2) << salary << " is not a valid input\n\n";
	}
	else if (salary <= 31000) {
		system("cls");

		//Trudeau
		taxedMoney = salary * tTaxRate0;
		tTotalTaxed = taxedMoney;
		tNetIncome = salary - tTotalTaxed;

		//Harper
		hNetIncome = tNetIncome;
		hTotalTaxed = tTotalTaxed;

		//Calculating Percents
		tTaxPercent = tTaxRate0 * 100;
		hTaxPercent = hTaxRate0 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the first tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this tax bracket, there is no difference between governments due to the same Tax Rates.";
	}
	else if (salary <= 45282) {
		system("cls");

		//Trudeau
		taxedMoney = (salary - 31000) * tTaxRate1;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		hNetIncome = tNetIncome;
		hTotalTaxed = tTotalTaxed;

		tTaxPercent = tTaxRate1 * 100;
		hTaxPercent = hTaxRate1 * 100;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the second tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this tax bracket, there is no difference between governments due to the same Tax Rates.";
	}
	else if (salary <= 67000) {
		system("cls");

		//Trudeau 
		taxedMoney = (salary - 45282) * tTaxRate2;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0) + (14282 * tTaxRate1);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		taxedMoney = (salary - 45282) * hTaxRate2;
		hTotalTaxed = taxedMoney + (31000 * hTaxRate0) + (14282 * hTaxRate1);
		hNetIncome = salary - hTotalTaxed;

		tTaxPercent = tTaxRate2 * 100;
		hTaxPercent = hTaxRate2 * 100;

		difference = tNetIncome - hNetIncome;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the third tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this Bracket you save $" << difference << " with Trudeau";
	}
	else if (salary <= 90563) {
		system("cls");

		//Trudeau
		taxedMoney = (salary - 67000) * tTaxRate3;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0) + (14282 * tTaxRate1) + (21718 * tTaxRate2);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		taxedMoney = (salary - 67000) * hTaxRate3;
		hTotalTaxed = taxedMoney + (31000 * hTaxRate0) + (14282 * hTaxRate1) + (21718 * hTaxRate2);
		hNetIncome = salary - hTotalTaxed;

		tTaxPercent = tTaxRate3 * 100;
		hTaxPercent = hTaxRate3 * 100;

		difference = tNetIncome - hNetIncome;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the fourth tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this Bracket you save $" << difference << " with Trudeau";
	}
	else if (salary <= 140388) {
		system("cls");

		//Trudeau
		taxedMoney = (salary - 90563) * tTaxRate4;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0) + (14282 * tTaxRate1) + (21718 * tTaxRate2) + (23563 * tTaxRate3);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		taxedMoney = (salary - 90563) * hTaxRate4;
		hTotalTaxed = taxedMoney + (31000 * hTaxRate0) + (14282 * hTaxRate1) + (21718 * hTaxRate2) + (23563 * hTaxRate3);
		hNetIncome = salary - hTotalTaxed;

		tTaxPercent = tTaxRate4 * 100;
		hTaxPercent = hTaxRate4 * 100;

		difference = tNetIncome - hNetIncome;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the fifth tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau Government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this Bracket you save $" << difference << " with Trudeau";
	}
	else if (salary <= 200000) {
		system("cls");

		//Trudeau
		taxedMoney = (salary - 140388) * tTaxRate5;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0) + (14282 * tTaxRate1) + (21718 * tTaxRate2) + (23563 * tTaxRate3) + (49825 * tTaxRate4);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		taxedMoney = (salary - 140388) * hTaxRate5;
		hTotalTaxed = taxedMoney + (31000 * hTaxRate0) + (14282 * hTaxRate1) + (21718 * hTaxRate2) + (23563 * hTaxRate3) + (49825 * hTaxRate4);
		hNetIncome = salary - hTotalTaxed;

		tTaxPercent = tTaxRate5 * 100;
		hTaxPercent = hTaxRate5 * 100;

		difference = tNetIncome - hNetIncome;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the sixth tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this Bracket you save $" << difference << " with Trudeau";
	}
	else if (salary > 200000) {
		system("cls");

		//Trudeau
		taxedMoney = (salary - 200000) * tTaxRate6;
		tTotalTaxed = taxedMoney + (31000 * tTaxRate0) + (14282 * tTaxRate1) + (21718 * tTaxRate2) + (23563 * tTaxRate3) + (49825 * tTaxRate4) + (59612 * tTaxRate5);
		tNetIncome = salary - tTotalTaxed;

		//Harper
		taxedMoney = (salary - 140388) * hTaxRate5;
		hTotalTaxed = taxedMoney + (31000 * hTaxRate0) + (14282 * hTaxRate1) + (21718 * hTaxRate2) + (23563 * hTaxRate3) + (49825 * hTaxRate4);
		hNetIncome = salary - hTotalTaxed;

		tTaxPercent = tTaxRate6 * 100;
		hTaxPercent = hTaxRate5 * 100; //Using the sixth Tax Rate because 7th bracket doesn't exist with Harper
		
		difference = hNetIncome - tNetIncome;

		cout << "\nYour salary is: $" << setprecision(2) << salary;
		cout << "\n\nYour tax rate under a Trudau government is: " << setprecision(2) << tTaxPercent << "%\nYour tax rate under a Harper government is: " << setprecision(2) << hTaxPercent << "%";
		cout << "\n\nUnder both governments you are in the seventh tax bracket.\nYour net income in a Trudeau and Harper gorvernment would be: $" << tNetIncome << " and $" << hNetIncome << " respectiveley";
		cout << "\n\nDue to Taxes, in a Trudeau government you would have lost: $" << tTotalTaxed << ".\nIn a Harper government you would have lost: $" << hTotalTaxed;

		cout << "\n\nIn this Bracket you save $" << difference << " with Harper";
	}
	else {
		cout << "$" << setprecision(2) << salary << "is not a valid input.\n\n";
		exit(1);
	}
	cout << "\n\n\nThank You for your time.\n\n";
	return 0;
}

//Below are the Answers to the Questions on BBLearn. 

/*

Q: What range(s) of income will you save the most money with Trudeau’s tax plan?
	
	A: From the third to the sixth tax bracket (45 282 - 200 000) You save more money with Trudeau's Plan  

Q: What range(s) of income will you save the most money with Harper’s tax plan?

	A: In the seventh, tax bracket which would only exist undera Trudeau government, people who earn over $200 000 would save more money.

Q: What range (or values) of income does in not matter which tax plan you are on?

	A: From Nothing to $45 282 the tax rates are identical for both governments. 


	"Canadians with taxable annual income between $45,282 and $90,563* will see their income tax rate fall.
	This tax relief is worth up to $670 per person, per year – or $1,340 for a two income household. 
	To pay for this tax cut, we will ask the wealthiest one percent of Canadians to give a little more."


Q: Comment on the accuracy of this statement.
	A: Tecnically since our progressive, people benefit from the tax cut until they make more than $200 000. 
	   it is true however that each individual recieves ~ 670 dollars and the rich do pay more to cover the costs.
	   In my opinion this is accurate and true. 

Q: Do you support the liberal tax plan?
	A: I do because when we look at countries who have the rich taxed more, the gap of wealth that we see in third world countries
	   is nonexistent and the economy is more stable. While it may anger the rich to be paying more, and they have the right to, I feel 
	   that it is in the best interest of the majority of the population. 
*/