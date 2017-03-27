/*
Name: Rekai Musuka
Date: 17 January 2017
Assignment Name: Change
Program Description: Makes change for the amount of change a user inputs.
Inputs: Change (user input) 
Output: Original Amount of Money organized into bills and coins
*/

#include <iostream>

using namespace std;

int main(){
    float input;
    int fifties, twenties, tens, fives, toonies, loonies, quarters, dimes, nickels, pennies;
    int leftover;

    cout << "Please enter desired value: $";
    cin >> input;

    pennies = int(input * 100.00); //Converting to Pennies
    
    cout << input << " requires:\n";

    fifties = pennies / 5000;
    leftover = pennies % 5000;

    if (fifties !== 0){cout << leftover " fifties.\n"};

    twenties = leftover / 2000;
    leftover = leftover % 2000;

    if (twenties !== 0) {cout << leftover " twenties.\n"};

    tens = leftover / 1000;
    leftover = leftover % 1000;

    if (tens !== 0){cout << leftover " tens."\n};

    fives = leftover / 5000;
    leftover = leftover % 5000;

    if (!fives) cout << leftover " fives.\n";

    toonies = leftover / 5000;
    leftover = leftover % 5000;

    if (!toonies) cout << leftover " toonies.\n";

    loonies = leftover / 5000;
    leftover = leftover % 5000;

    if (!looines) cout << leftover " loonies.\n";

    quarter = leftover / 5000;
    leftover = leftover % 5000;

    if (!fifties) cout << leftover " fifties.\n";



}