/* 
Name: Rekai Musuka
Date: 16 November 2016
Assignment Name: Net Income
Program Description: Inputs User's Hours worked and their rate of pay and then spits out their deductions and their net income.
Inputs: Hours Worked, Rate of Pay
Outputs: Federal Income Tax, Provincial Tax, Canadian Pension Plan Savings, Employment Insurance, Calculated Wages and Overtime (if there is any)
and finally, the net income, along with the total deductions. 
*/

#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	const double
		federalTax = 0.205, //Federal Tax Percent 
		provincialTax = 0.1275, //Provincial Tax Percent 
		cpp = 0.0495, //Canadian Pension Plan Percent 
		employInsure = 0.0188, //Employment Insurence Percent
		overtimeMultiplier = 1.5; //How Much the Rate of Time is multiplied by when overtime becomes relevant. 
	
	double hoursWorked, rateOfPay, totalDeductions, wage, overTimeHours, overTimePay, grossIncome, netIncome; //Variables used in displaying information & calculating other variables.

	double federalTaxAmount, provincialTaxAmount, cppAmount, employInsureAmount; //Variables to hold calculated deductions.
	cout << "Please enter your hours worked last week:\n";
	cin >> hoursWorked;

	cout << "Please enter your pay by the hour:\n";
	cout << "$"; 
	cin >> rateOfPay;

	if (hoursWorked >= 41) {
		overTimeHours = hoursWorked - 40; //Calculating Exact Amount of Overtime Hours worked. E.g. 45 - 40 = 5 overtime hours
		overTimePay = (rateOfPay * overtimeMultiplier) * overTimeHours; //Calculating Overtime Pay 

		wage = 40 * rateOfPay; //Calculating Normal Wage
		grossIncome = wage + overTimePay;
		
		cout << "\nLast week you worked: " << setprecision(1) << hoursWorked << " hours at $" << setprecision(2) << rateOfPay << "/hour.\n";
		cout << "You worked a full 40.0 hours with " << setprecision(1) << overTimeHours << " hours overtime.\n";
		cout << "This means that your Gross Income for last week was $" << setprecision(2) << wage << " + $" << setprecision(2) << overTimePay;

		cout << "\n\nYour Gross Income for last week is $" << setprecision(2) << grossIncome;

		federalTaxAmount = grossIncome * federalTax;
		cppAmount = grossIncome * cpp;
		employInsureAmount = grossIncome * employInsure;
		provincialTaxAmount = grossIncome * provincialTax;
		totalDeductions = federalTaxAmount + provincialTaxAmount + cppAmount + employInsureAmount;

		cout << "\n\nYou will be paying $" << setprecision(2) << federalTaxAmount << " in Federal tax.\n";
		cout << "You will be paying $" << setprecision(2) << provincialTaxAmount << " in Provincial tax.\n";
		cout << "You will be putting $" << setprecision(2) << cppAmount << " towards your Canadian Pension Plan.\n";
		cout << "You will be putting $" << setprecision(2) << employInsureAmount << " towards Employment Insurance.\n\n";

		cout << "In total, your deductions total to: $" << setprecision(2) << totalDeductions;

		netIncome = grossIncome - totalDeductions;

		cout << "\n\nYour net income is $" << netIncome;

	}
	else {
		grossIncome = hoursWorked * rateOfPay;
	
		cout << "\nLast week you worked: " << setprecision(1) << hoursWorked << " hours at $" << setprecision(2) << rateOfPay << "/hour.\n";
		cout << "You worked " << setprecision(1) << hoursWorked << " hours last week.\n\n";

		cout << "This means that your Gross Income for last week was $" << setprecision(2) << grossIncome;

		federalTaxAmount = grossIncome * federalTax;
		cppAmount = grossIncome * cpp;
		employInsureAmount = grossIncome * employInsure;
		provincialTaxAmount = grossIncome * provincialTax;
		totalDeductions = federalTaxAmount + provincialTaxAmount + cppAmount + employInsureAmount;

		cout << "\n\nYou will be paying $" << setprecision(2) << federalTaxAmount << " in Federal tax.\n";
		cout << "You will be paying $" << setprecision(2) << provincialTaxAmount << " in Provincial tax.\n";
		cout << "You will be putting $" << setprecision(2) << cppAmount << " towards your Canadian Pension Plan.\n";
		cout << "You will be putting $" << setprecision(2) << employInsureAmount << " towards Employment Insurance.\n\n";

		cout << "In total, your deductions total to: $" << setprecision(2) << totalDeductions;

		netIncome = grossIncome - totalDeductions;

		cout << "\n\nYour net income is $" << netIncome;

	}

	cout << "\n\nThank you for using my program.\n";
	return 0; 
}
