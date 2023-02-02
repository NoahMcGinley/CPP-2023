
#include <iostream>
using namespace std;

// Initialize function prototype
int showSum(int, int);

/*##########################
# main accepts no arguments
# prompts user for two integer values
# passes those values to function showSum
# outputs the sum received from showSum
##############################*/
int main()
{
    // Declare Variables
    int num1, num2, sum;

    // User input
    cout << "Enter a value: ";
    cin >> num1;
    cout << "Enter a second value: ";
    cin >> num2;

    sum = showSum(num1, num2);

    // Output sum
    cout << "The sum of " << num1 << " + "
        << num2 << " = " << sum;
}

/*###############################
# showSum accepts two int values
# it finds and return sum of the two values
# passes those values to function showSum
# outputs the sum received from showSum
#####################################*/
int showSum(int num1, int num2)
{
    int total = num1 + num2;

    // Assigns to sum in the main function
    return total;
}