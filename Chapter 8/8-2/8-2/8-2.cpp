
#include <iostream>
using namespace std;

int binarySearch(int[], int, int);

int main()
{
    const int SIZE = 20;
    int values[SIZE] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
    int searchValue = 17;

    int position = binarySearch(values, SIZE, searchValue);

    cout << position;
}

int binarySearch(int values[], int SIZE, int searchValue)
{
    int first = 0, last = SIZE - 1, middle, position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (last + first) / 2;

        if (values[middle] == searchValue)
        {
            found = true;
            position = middle;

        }
        else if (values[middle] > searchValue)
        {
            last = middle - 1;
        }
        else
        {
            first = middle + 1;
        }
    }
    return position;
}
