
#include <iostream>
#include <iomanip>
using namespace std;

bool isValid(int);

/* Accepts no arguments
prompts user for two numbers to divide
and calls isValid() to validate input
it then calculates and outputs quotient*/
int main()
{
    double num1, num2;
    bool valid;
    double quotient;

    cout << fixed << showpoint << setprecision(2);

    // Prompts user and validates input
    cout << "Enter two numbers to divide: ";
    cin >> num1 >> num2;
    valid = isValid(num2);

    if (valid == true)
    {
        quotient = num1 / num2;
        cout << "The quotient is " << quotient << endl;
    }
    else
    {
        cout << "Divide by 0 error\n";
    }
}

// Accepts int num2
// Validates input and returns bool value
bool isValid(int num2)
{
    if (num2 == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}