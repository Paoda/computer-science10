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
UIP: 1.9%
Union Dues: 0.4%

*/

float grossIncome(float hoursWorkedF)
float calcTaxes();
float displayReceipt();

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float hoursWorked grossPay;
    cout << "Please enter in the amount of Hours you have worked.";
    cin >> hoursWorked;

    grossPay = grossIncome(hoursWorked);

    return 0;
}

float grossIncome(float hoursWokedF) {
    float grossPayF;
    /*
    < 40h:          $10.5/h
    41h - 45h:      0.5*.1.5/h 
    > 45h:          10.5*2 
    */
    if (hoursWorkedF )

    return grossPayF
}//end grossIncome

float calcTaxes() {

}//end calcTaxes

float displayReceipt() {

}//end displayReceipt

