#include <iostream>
using namespace std;

// Prototype functions
int getMode(int[], int);
void selectionSort(int[], int);
void swap(int*, int*);

/*---------------------------------------
# modeFunction accepts no arguments
# It initilizes an array and calls getMode
# to receive the mode
-----------------------------------------*/
void modeFunction()
{
	const int SIZE = 10;
	int arry[SIZE] = { 1, 4, 9, 6, 3, 7, 1, 4, 1, 8, };

	getMode(arry, SIZE);
}


/*---------------------------------------
# getMode() accepts int arry[] and int SIZE
# It calls selectionSort to sort the array
# and then finds the mode by counting through
# the numbers
-----------------------------------------*/
int getMode(int arry[], int SIZE)
{
    int mode = arry[0], *arryPtr = arry, currCount = 0, maxCount = 0;
    selectionSort(arry, SIZE);

    for (int i = 0; i < SIZE; i++)
        cout << arry[i] << endl;

	for (int i = 1; i < SIZE; i++)
	{
        if (arry[i] == arry[i-1])
        {   
            currCount++;
            if (currCount > maxCount)
            {
                mode = arry[i];
            }
            else
            {
                currCount = 1;
            }
        }
	}
    cout << endl << mode;
	return -1;
}


/*---------------------------------------
# selectionSort() accepts int arry[] and int SIZE
# It sorts the accepted array
-----------------------------------------*/
void selectionSort(int array[], int SIZE)
{
    // Declares Variables
    int minIndex;
    int minValue;

    // Selection sorting
    for (int start = 0; start < SIZE - 1; start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int i = start + 1; i < SIZE; i++)
        {
            if (array[i] < minValue)
            {
                minValue = array[i];
                minIndex = i;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

// Swaps two values using pointers
void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}