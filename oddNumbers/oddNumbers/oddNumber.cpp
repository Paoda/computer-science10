/*
Name: Rekai Musuka
Date: 10 March 2017
Assignment Name: Odd Numbers
Program Description: Computes the sum of the odd integers in the range of 0 to 100 inclusive. (I assume it meanse including 0 and 100)
Inputs: None
Output: Sums of all the odd numbers from 0 to 100 inclusive.
*/

#include <iostream>

using namespace std;

int main() {
	int number = 0, sum = 0; //Declaring Varibales

	for (number; number <= 100; number++) { //Since number should go up by one each loop we can use the number instead of declaring i as a new variable.
		if (number % 2 != 0) {
			sum = sum + number; //Addding up the odd numbers;
		}
	}

	cout << "The sum of the odd integers between 0 and 100 inclusive is: " << sum << endl; //Echoing sum variable
}
