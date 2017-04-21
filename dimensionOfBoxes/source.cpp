/*
Name: Rekai Musuka
Date: 12 April 2017
Assignment Name: Dimension of boxes
Program Description: Program that will calculate the dimensions of a box, what makes it special
is if you enter a 0, it will calculate
Inputs: length, width, height, volume, surfaceArea, Yes or No.
Outputs: length, width, height, volume and Surface Area of a box.
*/

#include <iostream>
#include <iomanip>

using namespace std; 

void boxDimensions(float &lengthF, float &widthF, float &heightF, float &volumeF);
float calcSurfaceArea(float lengthF, float widthF, float heightF);
void displayData(float lengthF, float widthF, float heightF, float volumeF, float surfaceAreaF);
char processAnother();

int main() {
    float length, width, height, volume, surfaceArea;
    char choice;

    //setting up setprecision();
    cout.setf(ios::fixed, ios::floatfield);
    cout.setf(ios::showpoint);

    do {
        boxDimensions(length, width, height, volume);
        surfaceArea = calcSurfaceArea(length, width, height);
        displayData(length, width, height, volume, surfaceArea);
        choice = processAnother();

    }while(choice != 'N');

    return 0;
}

void boxDimensions(float &lengthF, float &widthF, float &heightF, float &volumeF) {
    cout << "Please enter the following properties of your box:\nLength:";
    cin >> lengthF;
    cout << "Width:";
    cin >> widthF;
    cout << "Height:";
    cin >> heightF;
    cout << "Volume: ";
    cin >> volumeF;
    cout << "\n\n";

    if (lengthF == 0) {
        lengthF = volumeF / (widthF * heightF);
    }else if (widthF == 0) {
        widthF = volumeF / (lengthF * heightF);
    }else if (heightF == 0){ 
        heightF = volumeF / (lengthF * widthF);
    }else if (volumeF == 0) {
        volumeF = lengthF * widthF * heightF;
    }else {
        cout << "Error Detected, try to run the program again.";
    }
}
float calcSurfaceArea(float lengthF, float widthF, float heightF) {
    return 2 * ((widthF * lengthF) + (heightF * lengthF) + (heightF * widthF)); // SA  = 2(wl + hl + hw)
}
void displayData(float lengthF, float widthF, float heightF, float volumeF, float surfaceAreaF) {
    cout << "The dimensions of your box are " << setprecision(2) << lengthF << "cm x " << setprecision(2) << widthF << "cm x " << setprecision(2) << heightF << "cm.";
	cout << "\nTherefore the volume of your box is " << setprecision(2) <<  volumeF << "cm, and the surface area is " << setprecision(2) << surfaceAreaF << "cm.\n\n";
}
char processAnother() {
    char input;
    cout << "Do you want to run this program again?";
    cin >> input;

    if (input == 'n') input = 'N';
    return input;
}