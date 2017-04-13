/* 
Name: Rekai Musuka
Date: 10 April 2017
Description: Using functions, this program calculates imperial measurements based off of a user entered input.
Inputs: Inches
Outputs: Yards, feet, and miles.
*/

#include <iostream>
#include <iomanip>

using namespace std;

//Declaring Functions
int getInches();
void calcMeasures(int inchF, float &feetF, float &yardsF, float &milesF);
void processAnother(char &repeatF);

int main () {
        //setting up setprecision();
        cout.setf(ios::fixed, ios::floatfield);
        cout.setf(ios::showpoint);

    int inches; //handles user input
    char repeat; //Handels the Y or N for continuing the loop
    float feet, yards, miles;
    do {
        inches = getInches();
        calcMeasures(inches, feet, yards, miles);
        cout << "Inches: " << setprecision(2) << inches << "\nFeet: " << setprecision(2) << feet << "\nYards: " << setprecision(2) << yards << "\nMiles: " << setprecision(2) << miles << endl;
        processAnother(repeat);

    }while(repeat != 'N'); //Will only exit if input is n or N
}

int getInches() {
    int input;
    cout << "Please enter the desired amount of inches.\n:";
    cin >> input;
    return input; //really dont like how i need to assign a variable here, but no other option with cin.
}

void calcMeasures(int inchF, float &feetF, float &yardsF, float &milesF) {
    feetF = (float)inchF / (float)12; //(float) is to make sure feetF receives a float
    yardsF = feetF/ 3;
    milesF = yardsF / 1760;
}

void processAnother(char &repeatF) {
    cout << "\nDo you want to run this program again?\n(Y/N):";
    cin >> repeatF;

    if (repeatF == 'n') repeatF = 'N'; //making Y or N decision case insensitive
}