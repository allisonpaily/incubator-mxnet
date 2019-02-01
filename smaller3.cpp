/*
Allison Paily
CSCI-136
Genady Maryash
Lab 1 task B
Asks user to input three integer number and
print out the smaller of the three
*/

#include <iostream>
using namespace std;

int main() {
	int first,second,third;
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;
	cout << "Enter the third number: ";
  cin >> third
	
	
	cout << "The smallest is: ";
	if (first < second) {
		cout << first;
	}
	else { 
		cout << second; 
	}
