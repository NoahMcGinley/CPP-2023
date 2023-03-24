#include <iostream>
using namespace std;

// Prototype functions
void showArray(int[], int);
void showArrayPtr(int*[], int);
void selectionSort(int*[], int);

int main()
{
    // Initializes variables and arrays
    const int NUM_DONATIONS = 15;
    int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10, 5, 35, 5, 5, 100, 10, 15, 10, 5, 10 };
    int *arrPtr[NUM_DONATIONS] = { nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,
        nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr,nullptr, };

    showArray(donations, NUM_DONATIONS);
    cout << "\n\n-------------------------\n\n";

    // Loops to assign pointers
    for (int i = 0; i < NUM_DONATIONS; i++)
    {
        arrPtr[i] = &donations[i];
    }

    selectionSort(arrPtr, NUM_DONATIONS);
    showArrayPtr(arrPtr, NUM_DONATIONS);
}

// Loops to output elements of array
void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
}

// Loops to outputs elements of the sorted array
void showArrayPtr(int *array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *array[i] << endl;
    }
}