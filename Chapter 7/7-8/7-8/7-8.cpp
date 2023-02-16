
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int SIZE = 10;
    int numbers[SIZE];
    int count = 0;
    ofstream outFile("C:\\Users\\SNM00013\\Desktop\\CPP-2022\\files\\data_files\\prog7_8demo.txt");

    for (count = 0; count < SIZE; count++)
        numbers[count] = count;

    if (!outFile)
    {
        cout << "File not found.";
    }
    else
    {
        // Write the array to the file
        for (count = 0; count < SIZE; count++)
            outFile << numbers[count] << endl;
    }

    outFile.close();
    cout << "All data written to prog7_8demo.txt\n";
}
