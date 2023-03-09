#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Prototype functions
void selectionSort(string[], int);
void swap(int&, int&);

/*-------------------------------------------
# stringSelection() accepts no arguments
# it asks the user if they want to receive names from
# a default list, or from names.txt. It then outputs
# the corresponding names
---------------------------------------------*/
void stringSelection()
{
    // Menu used to prompt user with what list of names they want to read
    int choice;
    cout << "1. Read names from file names.txt\n"
        << "2. Read names from default list\n"
        << "Choice: ";
    cin >> choice;
    cout << endl;

    if (choice == 1)
    {
        // Opens file and sets variables
        const int SIZE = 20;
        string name, names[SIZE];
        ifstream inFile(R"(C:\Users\SNM00013\Desktop\CPP-2022\files\data_files\names.txt)");

        // Validates file
        if (!inFile)
        {
            cout << "File not found.\n";
        }
        else
        {
            string fileArray[SIZE];
            int i = 0;

            // Reads and outputs file, then closes it
            while (getline(inFile, fileArray[i]))
            {
                i++;
            }
            inFile.close();
            selectionSort(fileArray, SIZE);
            for (int i = 0; i < SIZE; i++)
            {
                cout << fileArray[i] << endl;
            }
        }

    }
    else
    {
        // Initializes size and array
        const int SIZE = 20;
        string array[SIZE] = { "Venkman, Peter", "Took, Peregrin", "Pinkman, Jesse",
            "Simpson, Bart", "Allen, Tom", "McFly, Marty", "Solo, Han",
            "Baggins, Bilbo", "Griffin, Peter", "White, Walter",
            "Organa, Leia", "Brown, Emmet", "Fudd, Elmer",
            "Uzumaki, Maruto", "Skywalker, Luke",
            "Jones, Indiana", "Callahan, Harold",
            "Gamgee, Samwise", "Fring, Gustavo",
            "Kenovi, Ben" };

        // Sorts array
        selectionSort(array, SIZE);

        // Outupts sorted array
        for (int i = 0; i < SIZE; i++)
        {
            cout << array[i] << endl;
        }
    }
    cout << "\n\n\n";
}

/*--------------------------------------------------
# selectionSort() accepts a string array and an int SIZE
# it sorts the strings using the selection sort method
---------------------------------------------------*/
void selectionSort(string array[], int SIZE)
{
    // Declares Variables
    int minIndex;
    string minValue;

    // Selection sorting
    for (int start = 0; start < SIZE - 1; start++)
    {
        minIndex = start;
        minValue = array[start];
        for (int index = start + 1; index < SIZE; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        swap(array[minIndex], array[start]);
    }
}

// Swaps values
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}