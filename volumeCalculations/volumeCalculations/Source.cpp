/*
Name: Rekai Musuka
Date: 26 March 2017
Assignment Name: Volume Calculations
Program Description: echoes the volume and surface area for user entered dimenions of a box
Inputs: Length, width and height for a box
Output: Surface area and volume of the box.
*/

#include <iostream>

using namespace std;

int getVolume(int length, int width, int height);
int getSurfaceArea(int length, int width, int height);
void displayData(int length, int width, int height, int volume, int surfaceArea);


int main() {
	int length, width, height;
	char menuInput;
	do {
		cout << "Please enter the dimensions of your box in cm.\nLength: ";
		cin >> length;
		cout << "Width: ";
		cin >> width;
		cout << "Height: ";
		cin >> height;

		int volume = getVolume(length, width, height); //Function that Caluclates Volume 
		int surfaceArea = getSurfaceArea(length, width, height); //Funciton that calculates Surface Area
		displayData(length, width, height, volume, surfaceArea); //Displays data

		cout << "Do you want to perform another Calculation (Y/N)?\n:";
		cin >> menuInput;

		if (menuInput == 'n' || menuInput == 'N') {
			menuInput = 'N'; //Exits the program & makes program case-insensitive
		}
		else if (menuInput == 'Y' || menuInput == 'y') {
			continue; //This means the user wants to run the program again.
		}
		else {
			//Maybe consider structuring this differently later
		}
	} while (menuInput != 'N');

	return 0;
}//end main

int getVolume(int length, int width, int height) {
	return length * width * height; // V = length * width * height
}//end Volume
int getSurfaceArea(int length, int width, int height) {
	return 2 * ((width * length) + (height * length) + (height * width)); // SA  = 2(wl + hl + hw)
}// end surfaceArea
void displayData(int length, int width, int height, int volume, int surfaceArea) { //No need to return anything here so we'll use void
	cout << "The dimensions of your box are " << length << "cm x " << width << "cm x " << height << "cm.";
	cout << "\nTherefore the volume of your box is " << volume << "cm, and the surface area is " << surfaceArea << "cm.\n\n";
}//end displayData
