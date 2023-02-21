
#include <iostream>
using namespace std;

// Prototype functions
void showValue(int[], int);

/*---------------------------
# main accepts no arguments
# initializes an array with the first 8 multiples of
# 5 and uses a loop to pass each element to showValue
_____________________________*/
int main()
{
    // Initialize variables
    const int SIZE = 8;
    int numbers[SIZE] = { 5, 10, 15, 20, 25, 30, 35, 40 };
    showValue(numbers, SIZE);
    
}

/*---------------------------
# showValue accepts an array element
# it outputs the elements
_____________________________*/
//void showValue(int element)
//{
//    cout << element << " ";
//}

void showValue(int numbers[], int SIZE)
{
    for (int index = 0; index < SIZE; index++)
    {
        cout << numbers[index] << endl;
    }
}
