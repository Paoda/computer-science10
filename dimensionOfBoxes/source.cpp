/*
Some Information Here
*/

#include <iostream>

using namespace std; 

void boxDimensions(int &lengthF, int &widthF, int &heightF, int &volumeF);
int calcSurfaceArea(int lengthF, int widthF, int heightF);
void displayData(int lengthF, int widthF, int heightF, int, volumeF, int surfaceAreaF);
char processAnother(char choiceF);

int main() {

    do {

    }while(choice != 'N');

}

void boxDimensions(int &lengthF, int &widthF, int &heightF, int &volumeF) {
    cout << "Please enter the following properties of your box:\nLength:";
    cin >> lengthF;
    cout << "Width:";
    cin >> widthF;
    cout << "Height:";
    cin >> heightF;
    cout << "Volume: ";
    cin >> volumeF;
}
int calcSurfaceArea(int lengthF, int widthF, int heightF) {

}
void displayData(int lengthF, int widthF, int heightF, int, volumeF, int surfaceAreaF) {

}
char processAnother(char choiceF) {
    cout << "Do you want to run this program again?";
    cin >> choiceF;

    if (choiceF == 'n') choiceF = 'N';
    return choiceF
}