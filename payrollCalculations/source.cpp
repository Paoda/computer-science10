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

#include <iostream>
#include <iomanip>

float calcIncome(float hoursWorkedF);
float calcTaxes(float grossPayF);
void displayReceipt(float hoursWorkedF, float regularPayF, float overtimePayF, float grossPayF);

using namespace std;

const float hourlyPay = 10.50;
const float taxRate = 0.31;
const float cpp = 0.024;
const float uip = 0.019;
const float unionDues = 0.004;

int main()
{
    float hoursWorked, grossPay, netPay;
    cout << "Please enter in the amount of Hours you have worked.";
    cin >> hoursWorked;

    calcIncome(hoursWorked); //Returns Gross Income, Overtime Pay, Regular Pay
    netPay = calcTaxes(grossPay);
    displayReceipt(hoursWorked, 0, 0, grossPay);
    return 0;
}

float calcIncome(float hoursWorkedF, float &regularPayF)
{
    float grossPayF;
    /*
    < 40h:          $10.5/h
    41h - 45h:      0.5*.1.5/h 
    > 45h:          10.5*2 
    */
    if (hoursWorkedF < 40)
    {
        float regularPayF = hoursWorkedF * 10.5;
    }
    else if (hoursWorkedF < 45)
    {
        float regularPayF = 40 * 10.5;

        hoursWorkedF = hoursWorkedF - 40;
        float overtimePayF = hoursWorkedF * (10.5 * 1.5));
    }
    else if (hoursWorkedF > 45)
    {
        float regularPayF = 40 * 10.5;
        overtimePayF = 5 * (10.5 * 1.5);

        hoursWorkedF = hoursWorkedF - 45;
        grossPayF = (40 * 10.5) + (5 * (10.5 * 1.5)) + (hoursWorkedF * (10.5 * (10.5 * 2)));
    }

    grossPayF = regularPayF + overtimePayF +;
} //end calcIncome

float calcTaxes(float grossPayF) {
    float taxedAmountF, netPayF;

    //Figure out some way to keep the individual values of each tax deduciton.

    taxedAmountF = grossPayF * 0.31; //Tax
    taxedAmountF += grossPayF * 0.024; //CPP
    taxedAmountF += grossPayF * 0.019; //UIC
    taxedAmountF += grossPayF * 0.004; //Union Dues

    netPayF = grossPayF - taxedAmountF;

    return netPayF;
} //end calcTaxes

void displayReceipt(float hoursWorkedF, float regularPayF, float overtimePayF, float grossPayF) {
    cout << "Hours Worked: " << hoursWorkedF;
    cout << "\n\n";
    cout << "Regular pay: " << regularPayF;
    cout << "\nOvertime pay: " << overtimePayF; 
    cout << "\n-------------------";
    cout << "\nTotal Gross Pay: " << grossPayF << endl;;

}//end displayReceipt
