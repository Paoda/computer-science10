/*
Name: Rekai Musuka
Date: 10 March 2017
Assignment Name: Day Counter
Program Description: Adds up the number of days between two user defined years.
Inputs: The User's two years
Output: the number of days between those two years.
*/

#include <iostream>

using namespace std;

int main() {
	int year1, year2, days; //Declare Variables

	days = 0;

	//This block is for user input
	cout << "Please Enter the First Year: ";
	cin >> year1;
	cout << "Please Enter the Second Year: ";
	cin >> year2;

	for (int i = year1; i < year2; i++) {
		if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) { //Fancy argument that checks to see if year is loop year. 
			days = days + 366; //Well there are 366 days in a loop year
		}
		else {
			days = days + 365; //If not loop year it's 355
		}
	}

	cout << "There are " << days << " days between " << year1 << " and " << year2 << ".\n";
	
	return 0;
}