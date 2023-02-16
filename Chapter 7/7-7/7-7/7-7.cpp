
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int SIZE = 3;
    int numbers[SIZE];
    int count = 0;
    ifstream inFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\numbers.txt");

    if (!inFile)
    {
        cout << "File not found.";
    }
    else
    {
        while (count < SIZE && inFile >> numbers[count])
            count++;
        cout << count << " numbers read from numbers.txt\n";
        inFile.close();

        cout << "The numbers in the file are: ";
        count = 0;
        while (count < SIZE)
        {
            cout << numbers[count] << " ";
            count++;
        }
        cout << endl;
    }
}
