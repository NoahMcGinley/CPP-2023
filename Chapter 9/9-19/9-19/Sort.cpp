#include <iostream>
using namespace std;

void selectionSort(int *array[], int SIZE)
{
    // Declares Variables
    int minIndex, minValue;

    // Selection sorting
    for (int start = 0; start < SIZE - 1; start++)
    {
        minIndex = start;
        minValue = *array[start];
        for (int i = start + 1; i < SIZE; i++)
        {
            if (*array[i] < minValue)
            {
                minValue = *array[i];
                minIndex = i;
            }
        }
        swap(*array[minIndex], *array[start]);
    }
}

// Swaps values
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}