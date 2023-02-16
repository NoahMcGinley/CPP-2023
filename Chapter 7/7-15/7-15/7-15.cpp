
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int hours[SIZE];
	float payRate[SIZE];
	float grossPay;

	for (int i = 0; i < SIZE; i++)
	{
		cout << "\nHours worked by employee #" << i + 1 << ": ";
		cin >> hours[i];
		cout << "Pay rate for employee #" << i + 1 << ": ";
		cin >> payRate[i];
	}
	cout << "\nHere is the gross pay for each employee\n";
	for (int i = 0; i < SIZE; i++)
	{
		grossPay = hours[i] * payRate[i];
		cout << "Employee #" << i + 1 << ": " << grossPay << endl;
	}
}
