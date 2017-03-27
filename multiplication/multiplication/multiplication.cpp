/*
Name: Rekai Musuka
Date: 10 March 2017
Assignment Name: Multiplication
Program Description: Prints a Tidy Multiplication Table
Inputs: The max value the table will go to, e.g if you enter 5 the bottom right of the table will be 5*5 = 25
Output: A Nice and tidy multiplication table.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	/*
	This Entire Program replicates the Examples to a T but as my console is sort of messed up, I can't promise the same for larger numbers though
	Of course I could solve this by reinstalling windows but that seeems a *tad* bit overboard eh? */

	int input, i, j; //Declaring Variables

	cout << "Please enter the number you want this table to go to: "; //Askign for user input
	cin >> input;
	//This Entire Block is for Creating the Top row + the underline. 
	cout << setw(4);
	for (i = 0; i <= input; i++) {
		cout << i << setw(4); //setw(); will be used quite often helps for spacing and organization
	}
	cout << "\n";
	for (i = 0; i <= input; i++) {
		cout << "____"; //Two Underline Thingies
	}
	cout << "\n";

	//This Block Contains the meat of the table
	for (i = 0; i <= input; i++) {
		cout << i << "| ";

		for (j = 0; j <= input; j++) {
			cout << i * j << setw(4); //using setw so that the numbers don't leave their column when they contain more than 1 place value
		}
		cout << "\n";
	}
}