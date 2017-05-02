/*
Name: Rekai Musuka
Date: 29 April 2017
Description: Converts Celsius to Fahrenheit and vice versa.
Inputs: Menu Input, Temperature (Celsuis or Fahrenheit)
Outputs: Conversion of units of Temperature
*/

#include <iomanip> 
#include <iostream>

using namespace std;

int getConversionMethod(); // Complete
void getTemperatureRange(int userResultF, float &temperatureF, float &maxTempF);
void displayConversions();
float fahrenheitToCelsius(float fahrenheitF);
float celsiusToFahrenheit(float celsiusF);

int main() {
    int userResult;

    cout << "Welcome to Rekai Musuka's Temperature Converter";
    userResult = getConversionMethod();

    if (userResult == 1 || userResult == 3) {
        float temperature, maxTemp;
        if (userResult == 1) {
            cout << userResult;
            getTemperatureRange(userResult, temperature, maxTemp);

            celsiusToFahrenheit(temperature);
        } else {
            cout << userResult;
            getTemperatureRange(userResult, temperature, maxTemp);

            fahrenheitToCelsius(temperature);
        }
    } else {
        float temperature, maxTemp;
        if (userResult == 2) {
            cout << userResult;
            getTemperatureRange(userResult, temperature, maxTemp);
        } else {
            cout << userResult;
            getTemperatureRange(userResult, temperature, maxTemp);
        }
    }
}

float fahrenheitToCelsius(float fahrenheitF) {
    return (fahrenheitF - 32.0) * (5.0 / 9.0);
}

float celsiusToFahrenheit(float celsiusF) {
    return (celsiusF * 9.0 / 5.0) + 32.0;
}

int getConversionMethod() {
    bool menuExit = false;
    int choiceF;
    do {
        cout << "\n\nMain Menu";
        cout << "\n1. Convert Celsius to Fahrenheit";
        cout << "\n2. Convert Fahrenheit to Celsius\n:";
        cin >> choiceF;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                throw "Invalid Input (Main Menu Input Field)";
            }
        } catch (char* err) {
            cout << "Error: " << err;
        }

        if (choiceF == 1) {
            do {
                cout << "\n\nSub Menu (Celsius to Fahrenheit)";
                cout << "\n1. Convert A Single Value";
                cout << "\n2. Convert Multiple Values\n:";
                cin >> choiceF;

                try {
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore();
                        throw "Invalid Input (Sub Menu Input Field)";
                    }
                } catch (char* err) {
                    cout << "Error: " << err;
                }

                if (choiceF == 1) {
                    return 1; // Celsius to Fahrenheit, Single Value
                } else if (choiceF == 2) {
                    return 2; // Celsius to Fahrenheit, Multiple Values
                }

            } while (menuExit == false);
        } else if (choiceF == 2) {
            do {
                cout << "\n\nSub Menu (Fahrenheit to Celsius)";
                cout << "\n1. Convert A Single Value";
                cout << "\n2. Convert Multiple Values\n:";
                cin >> choiceF;

                try {
                    if (cin.fail()) {
                        cin.clear();
                        cin.ignore();
                        throw "Invalid Input (Sub Menu Input Field)";
                    }
                } catch (char* err) {
                    cout << "Error: " << err;
                }

                if (choiceF == 1) {
                    return 3; // Fahrenheit to Celsius, Single Value
                } else if (choiceF == 2) {
                    return 4; // Fahrenheit to Celsius, Multiple Values
                }
            } while (menuExit == false);
        }
    } while (menuExit == false);
    return 0;
}

void getTemperatureRange(int userResultF, float &temperatureF, float &maxTempF) {
    if (userResultF == 1 || userResultF == 3) { //Single Conversion
        cout << "Please Enter a Temperature\n:";
        cin >> temperatureF;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                throw "Invalid Input (Temperature Input Field (Single Value)";
            }
        } catch (char* err) {
            cout << "Error:" << err;
        }
    } else { //Multiple Conversions
        cout << "Please enter a Minimum Temperature\n:";
        cin >> temperatureF;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                throw "Invalid Input (Temperature Input Field (Multiple Values: Minimum Temperature))";
            }
        } catch (char* err) {
            cout << "Error: " << err;
        }

        cout << "Please enter a Maximum Temperature\n:";
        cin >> maxTempF;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                throw "Invalid Input (Temperature Input Field (Multiple Values: Maximum Temperature))";
            }
        } catch (char* err) {
            cout << "Error: " << err;
        }
    }
};

void displayConversions(int userResultF, float temperatureF, float maxTempF) {
    if (userResultF == 1 || userResultF == 3) {
        cout << temperatureF;
    } else {
        int j;
        cout << "Please enter the Interval you wish to go by.\n:";
        cin >> j;

        try {
            if (cin.fail()) {
                cin.clear();
                cin.ignore();
                throw "Invalid Input. (Interval Input Field (Multiple Values))";
            }
        } catch (char* err) {
            cout << "Error: " << err;
        }

        if (userResultF == 2) {
            cout << "\n\n\tCelsius\t\tFahrenheit";

            for (int i = temperatureF; i < maxTempF; i = i + j) {
            cout << "\n\t" << "test";
            }
        }else {
            cout << "\n\n\tFahrenheit\t\tCelsius";

            for (int i = temperatureF; i < maxTempF; i = i + j) {
                fahrenheitToCelsius(i);
            }
        }
    }

};

// Celsius to Fahrenheit, Single Value
// Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values
