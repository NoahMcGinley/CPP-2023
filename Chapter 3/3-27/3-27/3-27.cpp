#include<iomanip>
#include<cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// Defines variables
	double num1, num2, num3, avg;


	// Input
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	cout << "Enter the third number: ";
	cin >> num3;

	// Calulation plus output
	avg = (num1 + num2 + num3) / 3;
	cout << "The average is: " << avg << endl;

	return 0;
}