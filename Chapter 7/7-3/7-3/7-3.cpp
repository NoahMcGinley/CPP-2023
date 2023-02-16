
#include <iostream>
using namespace std;

int main()
{
    const int MONTHS = 12;
    int days[MONTHS] = { 31, 28, 31, 30,
    31, 30, 31, 31, 30, 31, 30, 31 };

    for (int i = 0; i < MONTHS; i++)
    {
        cout << "Month " << (i + 1) << " has "
            << days[i] << " days.\n";
    }
}
