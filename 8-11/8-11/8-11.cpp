#include <string>
#include <iostream>
using namespace std;

// Prototype functions
void bubbleSort(int[], int);
void selectionSort(int[], int);
void swap(int&, int&);

int main()
{
    // Variables
    const int SIZE = 8;
    int array[SIZE] = { 3, 8, 1, 6, 2, 4, 7, 5 };
    int array2[SIZE] = { 3, 8, 1, 6, 2, 4, 7, 5 };

    cout << "Bubble Sort: \n";
    bubbleSort(array, SIZE);
    cout << "\n\nSelection Sort: \n";
    selectionSort(array2, SIZE);
}

/*----------------------------------
# bubbleSort() accepts int array and int Size
# it uses the bubbleSort method to sort the array.
# It also prints the array through each iteration
------------------------------------*/
void bubbleSort(int array[], int SIZE)
{
    for (int maxElement = SIZE - 1; maxElement > 0; maxElement--)
    {
        for (int i = 0; i < maxElement; i++)
        {
            if (array[i] > array[i + 1])
            {
                // Swaps elements
                swap(array[i], array[i + 1]);

                // Prints array
                for (int i2 = 0; i2 < SIZE; i2++)
                {
                    cout << array[i2];
                }
                cout << endl;
            }
        }
    }
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
        for (int index = start + 1; index < SIZE; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
        // Prints array
        for (int i2 = 0; i2 < SIZE; i2++)
        {
            cout << array[i2];
        }
        cout << endl;
    }
}

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}