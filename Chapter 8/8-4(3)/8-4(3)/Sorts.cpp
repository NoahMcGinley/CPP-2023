#include <iostream>
using namespace std;

// accepts an int array and an int for the
// size of the array, it then sorts in ascending order
void bubbleSort(int array[], int size)
{
	int maxElement;
	int index;

	// loop
	for (maxElement = size - 1; maxElement > 0; maxElement--);
	{
		for (index = 0; index < maxElement; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap(array[index], array[index + 1]);
			}
		}
	}
}


// accepts an array and an int
// for size as arguments. It sorts the array
// from highest to lowest by moving each element
// to its proper location in the array
void selectionSort(int array[], int size)
{
	int minIndex, minValue;

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		swap(array[minIndex], array[start]);
	}
}


// accepts int by reference for a and b
// it swaps a and b
void swap(int& a, int& b)
{
	int temp = a; // holds a
	a = b; // swaps b to a
	b = temp; // swap a to b
}
