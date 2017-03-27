/*
Name: Rekai Nyangadzayi Musuka
Date: 08 - 12 October 2016
Assignment Name: Programming Giant Letters
Program Description: This program displays the word "buzzword" in giant letters. 
Inputs: None.
Outputs: the letter "buzzword" in giant letters (all uppercase) using cout and setw()
*/

#include <iostream>
#include <iomanip>

using namespace std; 

int main() {
	cout << "BBBBB" << setw(4) << "U" << setw(8) << "U" << setw(10) << "ZZZZZZZZ" << setw(10) << "ZZZZZZZZ" << setw(3) << "W" << setw(8) << "W" << setw(11) << "OOOOOOOO" << setw(10) << "RRRRRR" << setw(10) << "DDDDDD" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(9) << "Z" << setw(10) << "Z" << setw(4) << "W" << setw(8) << "W" << setw(3) << "O" << setw(9) << "O" << setw(3) << "R" << setw(7) << "R" << setw(3) << "D" << setw(7) << "D" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(8) << "Z" << setw(10) << "Z" << setw(5) << "W" << setw(8) << "W" << setw(3) << "O" << setw(9) << "O" << setw(3) << "R" << setw(7) << "R" << setw(3) << "D" << setw(8) << "D" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(7) << "Z" << setw(10) << "Z" << setw(6) << "W" << setw(8) << "W" << setw(3) << "O" << setw(9) << "O" << setw(3) << "R" << setw(7) << "R" << setw(3) << "D" << setw(9) << "D" << endl;
	cout << "BBBBB" << setw(4) << "U" << setw(8) << "U" << setw(6) << "Z" << setw(10) << "Z" << setw(7) << "W" << setw(4) << "W" << setw(4) << "W" << setw(3) << "O" << setw(9) << "O" << setw(9) << "RRRRRRR" << setw(4) << "D" << setw(9) << "D" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(5) << "Z" << setw(10) << "Z" << setw(8) << "W" << setw(3) << "W" << setw(2) << "W" << setw(3) << "W" << setw(3) << "O" << setw(9) << "O" << setw(4) << "RR" << setw(9) << "D" << setw(9) << "D" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(4) << "Z" << setw(10) << "Z" << setw(9) << "W" << setw(2) << "W" << setw(4) << "W" << setw(2) << "W" << setw(3) << "O" << setw(9) << "O" << setw(3) << "R" << setw(2) << "R" << setw(8) << "D" << setw(8) << "D" << endl;
	cout << "B" << setw(5) << "B" << setw(3) << "U" << setw(8) << "U" << setw(3) << "Z" << setw(10) << "Z" << setw(11) << "WW" << setw(7) << "WW" << setw(3) << "O" << setw(9) << "O" << setw(3) << "R" << setw(3) << "R" << setw(7) << "D" << setw(7) << "D" << endl;
	cout << "BBBBB" << setw(11) << "UUUUUUU" << setw(11) << "ZZZZZZZZZ" << setw(10) << "ZZZZZZZZZ" << setw(3) << "W" << setw(8) << "W" << setw(11) << "OOOOOOOO" << setw(4) << "R" << setw(4) << "R" << setw(12) << "DDDDDD" << endl;
	cout << endl;

	/*
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << "U" << setw(8) << "U" << endl;
	cout << setw(8) << "UUUUUUU" << endl;
	cout << endl;
	
	cout << "ZZZZZZZZ" << endl;
	cout << setw(7) << "Z" << endl;
	cout << setw(6) << "Z" << endl;
	cout << setw(5) << "Z" << endl;
	cout << setw(4) << "Z" << endl;
	cout << setw(3) << "Z" << endl;
	cout << setw(2) << "Z" << endl;
	cout << setw(1) << "Z" << endl;
	cout << "ZZZZZZZZ" << endl << endl;

	cout << "ZZZZZZZZ" << endl;
	cout << setw(7) << "Z" << endl;
	cout << setw(6) << "Z" << endl;
	cout << setw(5) << "Z" << endl;
	cout << setw(4) << "Z" << endl;
	cout << setw(3) << "Z" << endl;
	cout << setw(2) << "Z" << endl;
	cout << setw(1) << "Z" << endl;
	cout << "ZZZZZZZZ" << endl << endl;
	
	cout << "W" << setw(8) << "W" << endl;
	cout << "W" << setw(8) << "W" << endl;
	cout << "W" << setw(8) << "W" << endl;
	cout << "W" << setw(8) << "W" << endl;
	cout << "W" << setw(4) << "W" << setw(4) << "W" << endl;
	cout << "W" << setw(3) << "W" << setw(2) << "W" << setw(3) << "W" << endl;
	cout << "W" << setw(2) << "W" << setw(4) << "W" << setw(2) << "W" << endl;
	cout << "WW" << setw(7) << "WW" << endl;
	cout << "W" << setw(8) << "W" << endl << endl;
	
	cout << setw(8) << "0000000" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << "0" << setw(8) << "0" << endl;
	cout << setw(8) << "0000000" << endl;
	cout << endl;
	
	cout << setw(6) << "RRRRR" << endl;
	cout << "R" << setw(6) << "R" << endl;
	cout << "R" << setw(6) << "R" << endl;
	cout << "R" << setw(6) << "R" << endl;
	cout << "R" << setw(5) << "RRRRR" << endl;
	cout << "R" << setw(1) << "R" << endl;
	cout << "R" << setw(2) << "R" << endl;
	cout << "R" << setw(3) << "R" << endl;
	cout << "R" << setw(4) << "R" << endl;
	cout << endl;

	cout << setw(6) << "DDDDD" << endl;
	cout << "D" << setw(6) << "D" << endl;
	cout << "D" << setw(7) << "D" << endl;
	cout << "D" << setw(8) << "D" << endl;
	cout << "D" << setw(8) << "D" << endl;
	cout << "D" << setw(8) << "D" << endl;
	cout << "D" << setw(7) << "D" << endl;
	cout << "D" << setw(6) << "D" << endl;
	cout << setw(6) << "DDDDD" << endl;
	cout << endl << endl;
	*/
	return 0;
}//end main