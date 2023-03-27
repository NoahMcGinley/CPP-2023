#include <iostream>
using namespace std;

int getMode(int[], int);
void selectionSort(int[], int);
void swap(int*, int*);


void modeFunction()
{
	const int SIZE = 10;
	int arry[SIZE] = { 4, 5, 9, 6, 3, 7, 5, 3, 5, 8, };

	getMode(arry, SIZE);
}


int getMode(int arry[], int SIZE)
{
    int mode = 0, *arryPtr = arry, modeCount = 0, modeCount2 = 0;
    selectionSort(arry, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
        if (arry[i] == arry[i+1])
        {   
            cout << arry[i] << endl;
            modeCount++;
            if (modeCount > modeCount2)
            {
                mode = arry[i];
                modeCount = modeCount2;
            }
        }
	}
    cout << endl << mode;
	return -1;
}


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

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}