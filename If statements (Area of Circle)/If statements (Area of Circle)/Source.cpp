/*
Name: Rekai Musuka
Date: 2 November 2016
Assignment Name: Menu Options using if Statements
Program Description: Allows for the calculation of Diameters, Radii, Circumferences, and Areas
Inputs: The variables necessary to complete the specified equation
Outputs: The result of the specified choice the user chose.
*/

// Declaring libraries which I need. 
#include <iostream> 
#include <iomanip> 
#include <math.h>
#include <cstdlib>

// Getting rid of unnecesary and tedious typing 
using namespace std;

// THE FACT THAT WE AREN'T USING SWITCH / CASE STATEMENTS FOR MENUS TRIGGERS ME VERY MUCH. 

int main() {
	//setting up setprecision();
	cout.setf(ios::fixed, ios::floatfield);
	cout.setf(ios::showpoint);

	// Declaring variabes!
	const double pi = 3.14159265359;
	int mainChoice, subChoice;
	double diameter, radius, area, circumference;

	//Main menu
	cout << "Please enter your choice:\n";
	cout << "1. Calculate Radius\n";
	cout << "2. Calculate Diameter\n";
	cout << "3. Calculate Circumference\n";
	cout << "4. Calculate Area\n";
	cout << "5. Exit Program\n";
	cin >> mainChoice;

	if (mainChoice == 1) {
		// Sub Menu 0
		system("cls"); // Technically Bash not C++, however will work on windows. Mr. Marshall you're marking this on windows so it should work fine. This command clears the console. 
		cout << endl;
		cout << "Please enter your choice:\n";
		cout << "1. Calculate radius using circumference (approx.)\n";
		cout << "2. Calcualte radius using diameter\n";
		cout << "3. Calculate radius using area (approx.)\n";
		cin >> subChoice;

		if (subChoice == 1) {
			system("cls");
			//Calculating Radius based on input of circumference 
			cout << endl;
			cout << "Please enter the desired circumference below in cm (will be divided by ƒÎ):\n"; // Asking for user input
			cin >> circumference; //pushing user input to varibale

			cout << endl; //making things look nice 

			radius = ((circumference / pi) / 2); //the math


			cout << "The circumference chosen was: " << setprecision(2) << circumference << "cm. Therefore the radius of the circle is about: " << setprecision(2) << radius << " cm."; // Echoing the result

			//All the code will be the same for here on out unless otherwise specified. Refer back to here to understand what the code is doing.
		}
		else if (subChoice == 2) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired diameter:\n";
			cin >> diameter;

			cout << endl;

			radius = diameter / 2.0;

			cout << "The diameter chosen was: " << setprecision(2) << diameter << "cm. Therefore the radius of the circle is: " << setprecision(2) << radius << "cm.";
		}
		else if (subChoice == 3) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired area (will be divided by ƒÎ):\n";
			cin >> area;

			cout << endl;
 
			radius = sqrt((area / pi));

			cout << "The area chosen was: " << setprecision(2) << area << "cm^2. Therefore the radius of the circle is about: " << setprecision(2) << radius << "cm.";
		}
		else {
			system("cls");
			cout << endl;
			cout << "\"" << subChoice << "\" is not a valid input.\n\n";
			exit(-1);
		}
	}
	else if (mainChoice == 2) {
		// Sub Menu 1 
		cout << endl;
		cout << "Please enter your choice:\n";
		cout << "1. Calculate diameter using radius\n";
		cout << "2. Calcualte diameter using circumference(approx.)\n";
		cout << "3. Calculate diameter using area(approx.)\n";
		cin >> subChoice;

		if (subChoice == 1) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired radius:\n";
			cin >> radius;

			cout << endl;

			diameter = radius * 2;

			cout << "The radius chosen was: " << setprecision(2) << radius << "cm. Therefore the diameter of the circle is: " << setprecision(2) << diameter << "cm.";
		}

		else if (subChoice == 2) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired circumference (will be divided by ƒÎ):\n";
			cin >> circumference;

			cout << endl;

			diameter = circumference / pi;

			cout << "The circumference chosen was: " << setprecision(2) << circumference << "cm. Therefore the diameter of the circle is about: " << setprecision(2) << diameter << "cm.";
		}

		else if (subChoice == 3) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired area (will be divided by ƒÎ):\n";
			cin >> area;

			cout << endl;

			diameter = (sqrt((area / pi))) * 2;

			cout << "The area chosen was: " << setprecision(2) << area << "cm^2. Therefore the diameter of the circle is about: " << setprecision(2) << diameter << "cm.";
		}
		else {
			system("cls");
			cout << endl;
			cout << "\"" << subChoice << "\" is not a valid input.\n\n";
			exit(-1);
		}
	}
	else if (mainChoice == 3) {
		//Sub Menu 2 
		cout << endl;
		cout << "Please enter your choice:\n";
		cout << "1. Calculate circumference using diameter\n";
		cout << "2. Calculate circumference using radius\n";
		cin >> subChoice;

		if (subChoice == 1) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired diameter\n";
			cin >> diameter;

			cout << endl;

			circumference = diameter*pi;

			cout << "The diameter chosen was: " << setprecision(2) << diameter << "cm. Therefore the circumference is: " << setprecision(2) << circumference << "cm.";
		}
		else if (subChoice == 2) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired radius\n";
			cin >> radius;

			cout << endl;

			circumference = (radius * 2) * pi;

			cout << "The radius chosen was: " << setprecision(2) << radius << "cm. Therefore the circumference is: " << setprecision(2) << circumference << "cm.";
		}
		else {
			system("cls");
			cout << endl;
			cout << "\"" << subChoice << "\" is not a valid input.\n\n";
			exit(-1);
		}
	}
	else if (mainChoice == 4) {
		// Sub Menu 3 
		cout << endl;
		cout << "Please enter your choice:\n";
		cout << "1. Calculate area of circle using radius\n";
		cout << "2. Calculate are of circle using diameter\n";
		cin >> subChoice;

		if (subChoice == 1) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired radius\n";
			cin >> radius;

			cout << endl;

			area = pow(radius, 2) * pi;

			cout << "The radius chosen was: " << setprecision(2) << radius << "cm. Therefore the area is: " << setprecision(2) << area << "cm^2.";
		}
		else if (subChoice == 2) {
			system("cls");
			cout << endl;
			cout << "Please enter the desired diameter\n";
			cin >> diameter;

			cout << endl;

			radius = diameter / 2;
			area = pow(radius, 2) * pi;

			cout << "The diameter chosen was: " << setprecision(2) << diameter << "cm. Therefore the area is: " << setprecision(2) << area << "cm^2.";
		}
		else {
			system("cls");
			cout << endl;
			cout << "\"" << subChoice << "\" is not a valid input.\n\n";
			exit(-1);
		}

	}
	else if (mainChoice == 5) {
		cout << endl;
		cout << "Thank you for trying my program!\n\n";
		exit(0);
	}
	else {
		system("cls");
		cout << endl;
		cout << "\"" << mainChoice << "\" is not a valid input.\n\n";
		return -1; 
	}
	cout << endl << endl;
	cout << "Thank you for using my program!\n\n";
	return 0;
}//endmain