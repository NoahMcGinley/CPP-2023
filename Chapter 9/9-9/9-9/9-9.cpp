#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 8;
    int set[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };

    int* numPtr = set;
    int count;

    cout << "The numbers ascending are: \n";
    for (count = 0; count < SIZE; count++)
    {
        cout << *numPtr << " ";
        numPtr++;
    }
    cout << "\nThe numbers descending (reverse order) are: \n";
    for (count = 0; count < SIZE; count++)
    {
        numPtr--;
        cout << *numPtr << " ";
    }
    return 0;
}