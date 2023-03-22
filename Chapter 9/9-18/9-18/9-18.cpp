#include <iostream>
using namespace std;

int main()
{
    // Define variable for user input
    int max;

    // Get input from the user for the size of the array
    cout << "How many numbers do you wish to enter? ";
    cin >> max;

    // Define a unique_ptr smart pointer, pointing
    // to a dynamically allocated array of ints
    unique_ptr<int[]> ptr(new int(max));

    // Loop to get values from the user
    for (int i = 0; i < max; i++)
    {
        cout << "Enter an integer number: ";
        cin >> ptr[i];
    }

    // Loop to display the values
    cout << "Here are the values you entered:\n";
    for (int i = 0; i < max; i++)
    {
        cout << ptr[i] << endl;
    }
    return 0;
}
