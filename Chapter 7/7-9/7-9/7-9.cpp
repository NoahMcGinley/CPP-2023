
#include <iostream>
using namespace std;

int main()
{
    // Initialize variables
    const int SIZE = 3;
    int numbers[SIZE];
    int count;

    cout << "Storing 5 values in an array of 3 elements... Here goes!\n";

    for (count = 0; count < 5; count++)
        numbers[count] = count;

    cout << "If the program is still running, output the array.\n";
    for (count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    cout << "Done!";
    return 0;
}
