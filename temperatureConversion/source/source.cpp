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

int getConversionMethod();  // Complete
void getTemperatureRange(int userResultF);
void displayConversions();
float fahrenheitToCelsius(float fahrenheitF);
float celsiusToFahrenheit(float celsiusF);

int main() {
  int userResult;

  cout << "Welcome to Rekai Musuka's Temperature Converter";
  userResult = getConversionMethod();
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
          return 1;  // Celsius to Fahrenheit, Single Value
        } else if (choiceF == 2) {
          return 2;  // Celsius to Fahrenheit, Multiple Values
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
          return 3;  // Fahrenheit to Celsius, Single Value
        } else if (choiceF == 2) {
          return 4;  // Fahrenheit to Celsius, Multiple Values
        }
      } while (menuExit == false);
    }
  } while (menuExit == false);
}

void getTemperatureRange(int userReusltF) {}

// Celsius to Fahrenheit, Single Value
// Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values
// Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values
// Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values
// Celsius to Fahrenheit, Multiple Values
// Fahrenheit to Celsius, Single Value
// Fahrenheit to Celsius, Multiple Values