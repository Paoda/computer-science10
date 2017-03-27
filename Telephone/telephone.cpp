/*
Name: Rekai Musuka
Date: 23 November 2016
Assignment Name: Telephone
Program Description: Accepts a letter as input and outputs the corresponding number
that's on a numberpad
Inputs: Letter the User Requests
Outputs: Number designated to inputed letter
*/


#include <iostream>

using namespace std;

int main(){
    char letter; //Declares letter variable
    
    cout << "Please enter your desired letter: ";
    cin >> letter; //Asks and recieves input for letter character
    
    letter = toupper(letter); //This forces the input to upper case whether it's lower or upper case.
    
    //This entire switch statement does the actual work.
    switch(letter){
        case 'A':
        case 'B':
        case 'C':
            cout << letter << " corresponds to 2 on a telephone keypad.\n\n"; //Echoing all variables
            break;
        case 'D':
        case 'E':
        case 'F':
            cout << letter << " corresponds to 3 on a telephone keypad.\n\n";
            break;
        case 'G':
        case 'H':
        case 'I':
            cout << letter << " corresponds to 4 on a telephone keypad.\n\n";
            break;
        case 'J':
        case 'K':
        case 'L':
            cout << letter << " corresponds to 5 on a telephone keypad.\n\n";
            break;
        case 'M':
        case 'N':
        case 'O':
            cout << letter << " corresonds to 6 on a telephone keypad.\n\n";
            break;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            cout << letter << " corresponds to 7 on a telephone keypad.\n\n";
            break;
        case 'T':
        case 'U':
        case 'V':
            cout << letter << " corresponds to 8 on a telephone keypad.\n\n";
            break;
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            cout << letter << " corresponds to 9 on a telephone keypad.\n\n";
            break;
        default:
            cout << letter << " is not a valid input\n\n";
    }
     
}//end main
