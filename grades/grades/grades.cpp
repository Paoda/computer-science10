/*
Name: Rekai Musuka
Date: 15 March 2017
Assignment Name: Grades
Program Description: Finds the average for any number of grades inputted. Then Organize grades into different categories
Inputs: Several Grades
Outputs: Average of Grades and Percentage of Grades Sorted
*/

#include <iostream>
#include <iomanip>

using namespace std;


int main() {
	float average, total, i;
	int exitLoop, grade;
	int amazing, goodEnough, bad;

	//This Section is for declaring Variables
	amazing = 0;
	goodEnough = 0;
	bad = 0;

	grade = 0;
	total = 0.00;
	i = 0.00;

	exitLoop = 1;

	do {
		cout << "Please enter a grade: ";
		cin >> grade;

		if (grade == -1) {
			exitLoop = 0;
			grade++;
			i--;
		}
		else {
			if (grade <= 59) {
				bad++;
			}
			else if (grade <= 79) {
				goodEnough++;
			}
			else {
				amazing++;
			}
		}

		total += grade;
		i++;
	} while (exitLoop != 0);

	average = total / i;
	cout << "Loop Exited\n";
	cout << total << endl;
	cout << average << endl;
	cout << endl << endl;
	cout << amazing << endl;
	cout << goodEnough << endl;
	cout << bad << endl;



}