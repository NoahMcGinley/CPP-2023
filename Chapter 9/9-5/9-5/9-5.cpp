#include <iostream>
using namespace std;

// Initilizes array and references the memory
// location of the array using a reference to the array
int main()
{
    short numbers[] = { 10, 20, 30, 40, 50 };

    cout << "The first element of the array is: ";
    cout << *numbers;
    // *numbers refers to the address, which is also
    // the first element of an array
    cout << "\nThe second element of the array is: ";
    cout << *(numbers + 1);
    return 0;
}
