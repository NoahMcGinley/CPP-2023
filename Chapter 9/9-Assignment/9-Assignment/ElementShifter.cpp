#include <iostream>
using namespace std;

void shift(int[], int);

void elementShifter()
{
	const int SIZE = 11;
	int arry[SIZE] = { 5, 1, 9, 6, 3, 7, 5, 3, 4, 8, };

	shift(arry, SIZE);
}

void shift(int arry[], int SIZE)
{
	int* arryPtr = arry, temp = arry[2];

	arry[0] = 0;
	for (int i = 5; i < SIZE-2; i++)
	{
		arry[i] = temp;
		temp = arry[i+1];
		arry[i+1] = arry[i];
	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << arry[i];
	}
}