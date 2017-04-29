/* 
Name: Rekai Musuka
Date: 20 April 2017
Description: Determines an Employee's net pay'
Inputs: The Number of Hours the employee has worked
Outputs: The gross pay of the week. The amount of money going to taxes
and the net pay for the week
*/

/*
All Relevant Criteria from Assignment Page
< 40h:          $10.5/h
41h - 45h:      0.5*.1.5/h 
> 45h:          10.5*2 

Tax: 31%
CPP: 2.4%
uip: 1.9%
Union Dues: 0.4%

*/

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

const float baseRate =     10.5; //Dollars
const float taxRate =       0.31; //Percentage
const float cppRate =       0.024;//Percentage
const float uipRate =       0.019;//Percentage
const float unionDuesRate = 0.004;//Percentage

void calcPay(int hoursWorkedF, float &regularPayF, float &overtimePayF, float restOfPayF, float &grossPayF);
void calcTax(float grossPayF, float &taxF, float &cppF, float &uipF, float &unionDuesF, float &totalDeductionsF, float &netPayF);
void displayReceipt(float hoursWorkedF, float regularPayF, float overtimePayF, float grossPayF, float taxF, float cppF, float uipF, float unionDuesF, float totalDeductionsF, float netPayF);

int main() {
    //setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

    //Remember some variables are already declared globally
    float hoursWorked, regularPay, overtimePay, restOfPay, grossPay;
    float tax, cpp, uip, unionDues, netPay, totalDeductions;
    cout << "Welcome to the Payroll Calculater.\nPlease enter your hours for last week.\n:";
    cin >> hoursWorked;
    cout << "\n";

    try { //try and catch commands used to handle exceptions.
        calcPay(hoursWorked, regularPay, overtimePay, restOfPay, grossPay);
    }catch(invalid_argument &e) { //listens for a thrown invalid_argument
        cerr << e.what() << endl;
        return -1;
    }

    calcTax(grossPay, tax, cpp, uip, unionDues, totalDeductions, netPay);
    displayReceipt(hoursWorked, regularPay, overtimePay, grossPay, tax, cpp, uip, unionDues, totalDeductions, netPay);
    cout << "\n\n";
    return 0;
};//end main

void calcPay(int hoursWorkedF, float &regularPayF, float &overtimePayF, float restOfPayF, float &grossPayF) {
    if (hoursWorkedF < 0) {
        throw invalid_argument("Invalid Input."); //throws invalid_argument exception that is included in <stdexcept>
    }else if (hoursWorkedF < 40) {
        regularPayF = hoursWorkedF * baseRate;

        //unused
        overtimePayF = 0;
        restOfPayF = 0;
    }else if (hoursWorkedF <= 45) {
        regularPayF = 40 * baseRate; //Because hoursWorked is already above 40
        hoursWorkedF = hoursWorkedF - 40; //subtract 40 so that we can isolate the overtime Hours.
        overtimePayF = hoursWorkedF * (baseRate * 1.5); //Calcualtes overtimePay

        //unused
        restOfPayF = 0;
    }else if (hoursWorkedF > 45) {
        regularPayF = 40 * baseRate; //Because hoursWorked is already above 40
        overtimePayF = 5 * (baseRate * 1.5); //Calcualtes overtimePay
        hoursWorkedF = hoursWorkedF - 45;
        restOfPayF = hoursWorkedF * (baseRate * 2);
    }else {
        throw invalid_argument("Invalid input.");
    };

    grossPayF = regularPayF + overtimePayF + restOfPayF; //calculates 
}//end calcPay

void calcTax(float grossPayF, float &taxF, float &cppF, float &uipF, float &unionDuesF, float &totalDeductionsF, float &netPayF) {
    taxF = grossPayF * taxRate; 
    cppF = grossPayF * cppRate;
    uipF = grossPayF * uipRate;
    unionDuesF = grossPayF * unionDuesRate;

    totalDeductionsF = taxF + cppF + uipF + unionDuesF;

    netPayF = grossPayF - totalDeductionsF;
}//end calcTax

void displayReceipt(float hoursWorkedF, float regularPayF, float overtimePayF, float grossPayF, float taxF, float cppF, float uipF, float unionDuesF, float totalDeductionsF, float netPayF) {
    cout << "Employee Reciept";
    
    cout << "\n\nHours Worked: " << setprecision(2) << hoursWorkedF << "h";
    
    cout << "\n\nPay";
    cout << "\nRegular Pay: $" << setprecision(2) << regularPayF;
    cout << "\nOvertime Pay: $" << setprecision(2) << overtimePayF;
    cout << "\n------------------------";
    cout << "\nTotal Gross Pay: $" << setprecision(2) << grossPayF;

    cout << "\n\nDeductions";
    cout << "\nTaxes: $" << setprecision(2) << taxF;
    cout << "\nCPP: $" << setprecision(2) << cppF; 
    cout << "\nUIP: $" << setprecision(2) << uipF;
    cout << "\nUnion Dues: $" << setprecision(2) << unionDuesF;   
    cout << "\n------------------------";
    cout << "\nTotal Deductions: $" << setprecision(2) << totalDeductionsF;

    cout << "\n------------------------";
    cout << "\nNet Pay: $" << setprecision(2) << netPayF;

}//end displayReceipt