#include <iostream>
using namespace std;

// Prototoype functions
int* shift(int[], const int);

/*---------------------------------------
# elementShifter() accepts no arguments
# it creates an array and passed it to shift,
# where it is copied to a new array that is
# one element larger
------------------------------------------*/
void elementShifter()
{
	// Initializes variables
	const int SIZE = 10;
	int arry[SIZE] = { 5, 1, 9, 6, 3, 7, 5, 3, 4, 8, };

	int *arryPtr = shift(arry, SIZE);
}

/*--------------------------------------
# shift() accepts in arry[] and const int SIZE
# it assigns the value of the original array
# to the new array by increment the array pointer
----------------------------------------*/
int* shift(int arry[], const int SIZE)
{
	// Initializes variables
	const int NEW_SIZE = 11;
	int newArry[NEW_SIZE] = {0};
	int temp = arry[2];

	int* arryPtr = newArry;

	// Increments *arryPtr
	arryPtr++;

	// Loops to assigns the values of the original array to the new array
	for (int i = 0; i < SIZE + 1; i++)
	{
		*arryPtr++ = *arry++;
	}

	// Outputs array
	arryPtr = newArry;
	for (int i = 0; i < SIZE + 1; i++)
	{
		cout << *arryPtr << endl;
		arryPtr++;
	}

	return arryPtr;
}