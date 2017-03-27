/* 


*/

#include <iostream>

using namespace std;

int main(){ 
    int age, bonus;
    float interest, savings;    
    
    cout << "How old is your child?\n"; 
    cin >> age;

    cout << "How much would you like to save for your child yearly?\n$";
    cin >> savings;

    cout << "What is the yearly interest for your child? Enter as a decimal. (ex. 0.055 for 5%)\n";
    cin >> interest;
    
    if (interest <= 1.00) {
	interest = interest + 1.00; 
    }else if (interest >= 2.00) {
	cout << "You have entered an incorrect input";
	return -1;
    }

    cout << "What is the yearly bonus reward for your child?\n";
    cin >> bonus;

    while (age < 18) {
	age++;
	savings = (savings * interest) + bonus;
	
	if (age == 1) {
	    cout << age << " year old | Current Savings: $" << savings << endl;
	}else {
	    cout << age << " years old | Current Savings: $" << savings << endl;
	} 

    }
}

