#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int number;
	cout << "Enter a number: ";
	cin >> number;

	if (number % 2 == 0)
		cout << "Your number " + number + string(" is even");
	else
		cout << "Your number " + number + string(" is odd");
}
