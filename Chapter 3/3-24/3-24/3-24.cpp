#include <iomanip>
#include <string>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int sideA, sideB, hyp;

	cout << "Enter the length of side a: ";
	cin >> sideA;
	cout << "Enter the length of side b: ";
	cin >> sideB;

	hyp = sqrt(pow(sideA, 2.0) + pow(sideB, 2.0));

	cout << hyp;

}
