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
void getTemperatureRange(float &upperTempF, float &lowerTempF, int &err); 
void displayConversions();
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
        cout << "\n\nIllegal Input detected. Fortunately, we can recover from this one.\n\n";
        main();
    }else if (result == 1) { //1 = CtoF Single Value
        
    }else if (result == 2) { //2 = CtoF Multiple Values
        float upperTemp, lowerTemp;
        int choice = 2;

        getTemperatureRange(upperTemp, lowerTemp, int err);

        if (err == 1) {
            cout << "Illegal Value Entered. Returning to Main Menu.";
            main();
        }

    }else if (result == 3) { //3 = FtoC Single Value
        //Do This
    }else if (result == 4) { //4 = FtoC Multiple Values
        float upperTemp, lowerTemp;
        int choice = 4;

        getTemperatureRange(upperTemp, lowerTemp, int err);

        if (err == 1) {
            cout << "Illegal Value Entered. Returning to Main Menu.";
            main();
            
        }
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

        if (cin.fail()) { //If user doesn't enter an integer
            cin.clear(); //clear all error messages
            cin.ignore(); //forget what just happened
            cout << "Invalid Input. Exiting...";

            //Variables Needed to Exit the Loop
            choiceF = 0;
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

                    //variables needed to exit the loop. 
                    choiceF = 0;
                    menuExit = true;
                }

                if (choiceF == 1) {
                    menuExit = true;
                    return 1; //1 = CtoF Single Value
                }else if (choiceF == 2) {
                    menuExit = true;
                    return 2; //2 = CtoF Multiple Values
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

                    //Varriables needed to exit the loop
                    choiceF = 0;
                    menuExit = true;
                }

                if (choiceF == 1) {
                    menuExit = true;
                    return 3; //3 = FtoC Single Value
                }else if (choiceF == 2) {
                    menuExit = true;
                    return 4; //4 = FtoC Multiple Values
                }
            }while(menuExit == false);
        }
    }while(menuExit == false);

    return 0;
}//end getConversionMethod
void getTemperatureRange(float &upperTempF, float &lowerTempF, int &err) {
    
    cout << "\n\nPlease enter the Higest Number you'd like to be converted.\n:";
    cin >> upperTempF;

    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input. Exiting...";

        err = 1;
    }

    cout << "\nPlease enter the Lowest Number you'd like to be converted.\n";
    cin >> lowerTempF;

    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout << "Invalid Input. Exiting...";
        
        err = 1;
    }

    err = 0;
}//end getTemperatureRange

float fahrenheitToCelsius(float fahrenheitF) {
    return (5.0 / 9.0) * (fahrenheitF - 32.0);
}//end fahrenheitToCelsius

float celsiusToFahrenheit(float celsiusF) {
    return (celsiusF * (9.0 / 5.0)) + 32.0;
}

void displayConversions(float inputF, ) {
    if (choice == 2 || choice == 4){ //They will require this function to process multiple values.

    }else { //If not 2 or 4 they have to be 1 or 2 since the program decides the value, not the user.
        if (choice == 1) {
            celsius
        }else {

        }
    }
}
