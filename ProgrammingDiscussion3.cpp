// Jack Ross
// Programming Discussion 3
// Chapter 6 Exercise 6
// Reverse Digit

#include <iostream>
using namespace std;
int main()
{
	int userNumber;
	int reversedNumber = 0;
	int modLeftover;

	cout << "Enter a number and watch it be magically reversed!" << endl;
	cout << "Your number is: ";

	cin >> userNumber;

	while (userNumber != 0) {

		modLeftover = userNumber % 10;
		reversedNumber = reversedNumber * 10 + modLeftover;
		userNumber = userNumber / 10;

	}

	cout << "Your number REVERSED is: ";
	cout << reversedNumber << endl;
	
}


