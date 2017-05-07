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
void displayConversions(int userResultF, float temperatureF, float maxTempF);
float fahrenheitToCelsius(float fahrenheitF);
float celsiusToFahrenheit(float celsiusF);

int main() {
    //setting up setprecision();
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);

    int userResult;
    float maxTemp;

    cout << "Welcome to Rekai Musuka's Temperature Converter";
    userResult = getConversionMethod();

    if (userResult == 1 || userResult == 3) {
        float temperature;

        if (userResult == 1) {
            getTemperatureRange(userResult, temperature, maxTemp);

            maxTemp = celsiusToFahrenheit(temperature);

            displayConversions(userResult, temperature, maxTemp);
        } else {
            getTemperatureRange(userResult, temperature, maxTemp);

            maxTemp = fahrenheitToCelsius(temperature);

            displayConversions(userResult, temperature, maxTemp);
        }
    } else {
        float minTemp;
        if (userResult == 2) {
            getTemperatureRange(userResult, minTemp, maxTemp);

            displayConversions(userResult, minTemp, maxTemp);
        } else {
            getTemperatureRange(userResult, minTemp, maxTemp);

            displayConversions(userResult, minTemp, maxTemp);
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
       
        if (userResultF == 1) { //Here we use temperatureF to be the original # we were converting and maxTempF to hold the converted temperature
            cout << setprecision(2) << temperatureF << '\370' << 'C' << " Is equal to " << setprecision(2) << maxTempF << '\370' << 'F';
        } else {
           cout << setprecision(2) << temperatureF << '\370' << 'F' << " Is equal to " << setprecision(2) << maxTempF << '\370' << 'C';
        }
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
            cout << "\n\tCelsius\t\tFahrenheit";
            cout << "\n\t" << "\t\t";

            for (float i = temperatureF; i < maxTempF; i = (float)i + (float)j) {
                cout << "\n\t" << setprecision(2) << i << '\370' << "C\t\t" << setprecision(2) << celsiusToFahrenheit(i) << '\370' << 'F';
            }
        }else {
            cout << "\n\tFahrenheit\t\tCelsius";
            cout << "\n\t" << "\t\t";

            for (float i = temperatureF; i < maxTempF; i = (float)i + (float)j) {
                cout << "\n\t" << setprecision(2) << i << '\370' << "F\t\t" << setprecision(2) << celsiusToFahrenheit(i) << '\370' << 'C';
            }
        }
        cout << "\n\n";
    }

};