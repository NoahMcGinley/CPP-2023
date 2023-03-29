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
    // Initializes variables and array
	const int SIZE = 10;
	int arry[SIZE] = { 4, 0, 9, 6, 3, 7, 2, 10, 1, 8, };

    // Outputs array contents
    cout << "Array in which to find mode\n------------------------------\n";
    for (int i = 0; i < SIZE; i++)
        cout << arry[i] << endl;

    // Calls getMode to find the mode of the array
	int mode = getMode(arry, SIZE);

    // Determines if their is a mode or not
    if (mode == -1)
    {
        cout << "\nNo mode found\n\n\n";
    }
    else
    {
        cout << "\nThe mode is " << mode << "\n\n\n";
        cout << mode;
    }

}


/*---------------------------------------
# getMode() accepts int arry[] and int SIZE
# It calls selectionSort to sort the array
# and then finds the mode by counting through
# the numbers
-----------------------------------------*/
int getMode(int arry[], int SIZE)
{
    // Initializes variables
    int* arryPtr = arry;
    int count = *arryPtr, mode = count, currCount = 1, maxCount = 1;
    selectionSort(arry, SIZE);


    // Finds the mode by keeping a counter depending
    // on whether or not the index before it is the same
    mode = -1;
    for (int i = 1; i < SIZE; i++) // Loops through array
    {
        if (*(arryPtr + i) == count) // Increases counter if the value is the same of that prior
        {
            currCount++;
        }
        else
        {
            if (currCount > maxCount) // Resets the counter if the value is not the same
            {
                maxCount = currCount;
                mode = count;
            }
            currCount = 1;
            count = *(arryPtr + i);
        }
    }
    return mode;
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