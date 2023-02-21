#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    int numEmployees;
    vector<int> hours;
    vector<double> payRate;
    int i;

    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    cout << "Enter the hours worked by " << numEmployees << " employes "
        << "and their hourly rate.\n";
    for (i = 0; i < numEmployees; i++)
    {
        int tempHours;
        double tempRate;

        cout << "\nHours worked by employee " << i + 1 << ": ";
        cin >> tempHours;
        cout << "\nHourly rate for employee " << i + 1 << ": ";
        cin >> tempRate;

        hours.push_back(tempHours);
        payRate.push_back(tempRate);
    }

    int size = hours.size();
    cout << size << " employees successfully processed.";

    hours.pop_back();
    payRate.clear();
    cout << "\nYou fired everyone! You now have " << hours.size() << " employees.\n";

    if (hours.empty())
        cout << "Don't you remember, you fired everyone...\n";
    else
        cout << "You still have " << hours.size() << " employees.\n";

    return 0;
}