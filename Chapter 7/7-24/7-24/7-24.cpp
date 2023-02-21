#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // Declares Variables
    const int NUM_EMPLOYEES = 5;
    vector<int> hours(NUM_EMPLOYEES);
    vector<double> payRate(NUM_EMPLOYEES);
    int i;

    // Input
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << "\nEnter hours worked for employee #" << i + 1 << ": ";
        cin >> hours[i];
        cout << "Hourly pay rate for employee #" << i + 1 << ": ";
        cin >> payRate[i];
    }

    // Output
    for (int i = 0; i < NUM_EMPLOYEES; i++)
    {
        cout << fixed << showpoint << setprecision(2);
        cout << "Employee #" << i + 1 << ": $" << hours[i] * payRate[i] << endl;
    }
}