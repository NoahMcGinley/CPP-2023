#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 5;
	int numbers[SIZE];
	int count;
	int* ptr = numbers;

	for (count = 0; count < SIZE; count++)
	{
		cout << "Enter a number: ";
		cin >> *(numbers + count);
	}
	cout << "Here are the numbers you entered;\n";
	for (count = 0; count < SIZE; count++)
	{
		cout << *(numbers + count) << endl;
	}

	cout << "Press Any Key...\n";
	cin.ignore();
	cin.get();
	// Output the array using subscript notation
	// with a pointer variable
	cout << "Here are also the numbers you entered: \n";
	for (count = 0; count < SIZE; count++)
	{
		cout << ptr[count] << endl;
	}

	cout << "Press Any Key...\n";
	cin.get();
	// Output the array using subscript notation
	// with a pointer variable
	cout << "Here, finally, the numbers you entered: \n";
	for (count = 0; count < SIZE; count++)
	{
		cout << ptr[count] << endl;
		cout << *ptr << endl;
	}
}
