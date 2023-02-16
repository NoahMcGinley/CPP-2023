
#include <iostream>
using namespace std;

int main()
{
    // Initialize constants and array
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];
    int i = 1;

    // Get input from the user for hours worked
    for (i; i <= NUM_EMPLOYEES; i++)
    {
        cout << "Enter hours worked for employee " << i << ": " << endl;
        cin >> hours[i - 1];
    }

    // Output
    for (i = 1; i <= NUM_EMPLOYEES; i++)
    {
        cout << "The hours worked for employee number " << i << " is: " << hours[i - 1] << endl;
    }
}
