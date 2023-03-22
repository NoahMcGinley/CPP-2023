#include <iostream>
using namespace std;

int* getRandomNumbers(int);

int main()
{
    // Initialize variables and pointers
    int* numbers = nullptr;

    // Get an array of 5 numbers
    numbers = getRandomNumbers(5);

    // Output the number
    for (int count = 0; count < 5; count++)
    {
        cout << numbers[count] << endl;
    }

    // Free the memory
    delete[] numbers;
    numbers = nullptr;
    return 0;
}

int* getRandomNumbers(int size)
{
    int* arr = nullptr; // Array to hold the numbers
    
    // return a null pointer if num is zero or negatie
    if (size <= 0)
    {
        return nullptr;
    }

    // Dynamically allocate the array
    arr = new int[size];

    // Seed the random number
    srand(time(0));

    // Populate the array with random numbers
    for (int count = 0; count < size; count++)
    {
        arr[count] = rand();
    }

    // Return the pointer to the array
    return arr;
}
