/*
Name: Rekai Musuka
Date: 2 February 2016
Assignment Name: Population
Program Description: Counts how many years it takes for a population to reach 30 000 based on a percentage increase.
Inputs: None
Outputs: Every relevant year's population along with the total amount of years it took to reah 30 000
*/

#include <iostream>

using namespace std;

int main() {
	int count, population, years; //Declaring variables
	population = 9965; //The population we are told 
	years = 0; //initializing the variable years

	while (population < 30000) { //loop will end when population is above 30 000
		population = population * 1.065; //The projection defined by the assignment task
		cout << "Year " << years << ": " << population << "\n"; //displaying every year's numbers to make the program less boring
		years++; //Adding one year to years varible. Usefull for counting the number of years that have passed.
	}
	cout << "\n";
	cout << "It took " << years << " years to reach " << population << " which exceeds 30 000\n\n"; //Echoing the result.
}