#include <iostream>
using namespace std;

void getNumber(int*);
void doubleValue(int*);

int main()
{
    int number;
    // Call getNumber and pass the address of number
    getNumber(&number);

    // Call doubleValue and pass the address of number
    doubleValue(&number);

    cout << "The number you entered has been doubled. ";
    cout << "It is now : " << number;
    return 0;
}
