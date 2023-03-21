#include <iostream>
using namespace std;

int main()
{
	int x = 25, y = 50, z = 75;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;

	int* ptr = nullptr;

	ptr = &x;
	*ptr += 100;
	ptr = &y;
	*ptr += 100;
	ptr = &z;
	*ptr += 100;

	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
}