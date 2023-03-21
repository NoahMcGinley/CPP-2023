#include <iostream>
using namespace std;

// defines a pointer variable and initializes
// x to 25. It sets the pointer to the address of x
// outputs the address, size, and value stored in x
int main()
{
    int x = 25;
    int* ptr = nullptr;

    ptr = &x;

    cout << "The variable x is stored at: " << ptr << endl;
    cout << "The variable x has a size of: " << sizeof(x) << endl;
    cout << "The variable x has a value of: " << x << endl;
    return 0;

}
