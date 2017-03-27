/*
Name: Rekai Musuka
Date: 26 March 2017
*/

#include <iostream>

using namespace std;

int volume(int length, int width, int depth);
int surfaceArea(int length, int width, int depth);



int main() {
	int length, width, depth;
	cout << "Please enter the dimensions of your box:\nLength:";
	cin >> length;
	return 0;
}//end main

//

int volume(int length, int width, int depth) {
	return length * width * depth; //Volume is length * width * depth
}//end Volume
int surfaceArea(int length, int width, int depth)
{

	return (length * width) + (length * depth) + (width * depth);
}// end surfaceArea