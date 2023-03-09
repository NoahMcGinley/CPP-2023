#include <iostream>
using namespace std;

void bubbleSort(int[], int);
void selectionSort(int[], int);
void swap(int&, int&);

int main()
{
    const int SIZE = 6;
    int values[SIZE] = { 6, 1, 5, 2, 4, 3 };

    cout << "The array, unsorted, is: \n";
    for (auto element : values)
        cout << element << " ";

    bubbleSort(values, SIZE);

    cout << "The array, sorted, is: \n";
    for (auto element : values)
        cout << element << " ";
    cout << endl;

    selectionSort(values, SIZE);
    for (auto element : values)
        cout << element << " ";
    cout << endl;

}
