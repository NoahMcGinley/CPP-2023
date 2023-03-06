
#include <iostream>
using namespace std;
 
int linearSearch(int, int[], int);

int main()
{
    // Variables
    const int SIZE = 5;
    int values[SIZE] = { 87, 75, 98, 100, 82 };
    int searchValue;

    // Takes input
    cout << "Enter a number: ";
    cin >> searchValue;

    int position = linearSearch(SIZE, values, searchValue);

    // Checks to see if it was found
    if (position == -1)
    {
        cout << "It was not found\n";
    }
    else
    {
        cout << position;
    }

}

int linearSearch(int SIZE, int values[], int searchValue)
{
    // Variables
    int i = 0;
    bool found = false;
    int position = -1;

    // Loops through array to find matching value
    while (i < SIZE)
    {
        if (values[i] == searchValue)
        {
            position = i;
        }
        i++;
    }

    return position;

}
