#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    vector<int> numbers(5);

    for (int& val : numbers)
    {
        cout << "Enter an integer value: ";
        cin >> val;
    }

    cout << "Here are the values you entered.\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}