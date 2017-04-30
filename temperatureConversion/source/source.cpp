/* 
Name: Rekai Musuka
Date: 29 April 2017
Description: Converts Celsius to Fahrenheit and vice versa.
Inputs: Menu Input, Temperature (Celsuis or Fahrenheit)
Outputs: Conversion of units of Temperature
*/

#include <iostream>
#include <iomanip>
#include <stdexcept>

using namespace std;

//Functions
int getConversionMethod();
float getTemperatureRange();
float displayConversions();
float fahrenheitToCelsius(float fahrenheitF);
float celsiusToFahrenheit(float celsiusF);



//Global Variables

int main() {
    //setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

    cout << "Welcome to Rekai Musuka's Temperature Converter!";

    int result = getConversionMethod();

    if (result == 0) {
        cout << "\n\nSomething went Horribly Wrong. Trying again.\n\n";
        main();
    }


return 0;
}//end main

int getConversionMethod() {
    int choiceF;
    bool menuExit = false;
    do {
        cout << "\n\nMain Menu.";
        cout << "\n1. Convert Celsuis to Fahrenheit";
        cout << "\n2. Convert Fahrenheit to Celsius\n:";
        cin >> choiceF;

        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Invalid Input. Exiting...";
            menuExit = true;
        }

        if (choiceF == 1) {
            do {
                cout << "\n\nSub Menu.";
                cout << "\n1. Convert a Single Value";
                cout << "\n2. Convert Multiple Values\n:";
                cin >> choiceF;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "Invalid Input. Exiting...";
                    menuExit = true;
                }

                if (choiceF == 1) {
                    menuExit = true;
                    return 1;
                }else if (choiceF == 2) {
                    menuExit = true;
                    return 2;
                }
            }while(menuExit == false);
        }else if (choiceF == 2) {
             do {
                cout << "\n\nSub Menu.";
                cout << "\n1. Convert a Single Value";
                cout << "\n2. Convert Multiple Values\n:";
                cin >> choiceF;

                if (cin.fail()) {
                    cin.clear();
                    cin.ignore();
                    cout << "Invalid Input. Exiting...";
                    menuExit = true;
                }

                if (choiceF == 1) {
                    menuExit = true;
                    return 3;
                }else if (choiceF == 2) {
                    menuExit = true;
                    return 4;
                }
            }while(menuExit == false);
        }
    }while(menuExit == false);

    return 0;
}//end getConversionMethod
float getTemperatureRange() {
return 0.0;
}//end getTemperatureRange

float fahrenheitToCelsius(float fahrenheitF) {
    return (5.0 / 9.0) * (fahrenheitF - 32.0);
}//end fahrenheitToCelsius

float celsiusToFahrenheit(float celsiusF) {
    return (celsiusF * (9.0 / 5.0)) + 32.0;
}