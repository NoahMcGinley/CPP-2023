#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Prototype functions
void selectionSort(string[], int);
void swap(int&, int&);

int main()
{
    int choice;
    cout << "1. Read names from file names.txt\n"
        << "2. Read names from default list\n"
        << "Choice: ";
    cin >> choice;

    if (choice == 1)
    {
        const int SIZE = 20;
        string name, names[SIZE];
        ifstream inFile("names.txt");

        if (!inFile)
        {
            cout << "File not found.\n";
        }
        else
        {
            while (inFile >> name)
            {
                cout << name;
            }
            inFile.close();
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
    
}

/*--------------------------------------------------
# selectionSort() accepts a string array and an int SIZE
# it sorts the string using the selection sort method
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
