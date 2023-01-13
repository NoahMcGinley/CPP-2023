#include<iomanip>
#include<cmath>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int seed;
	seed = time(0);
	srand(seed);

	cout << "Generating three random numbers...\n" << rand()
		<< endl << rand() << endl << rand() << endl;

	cout << "\n\n";

	const int MAXVALUE = 6;
	const int MINVALUE = 1;
	int roll1, roll2;

	// Determines roll
	roll1 = (rand() % (MAXVALUE - MINVALUE + 1) + MINVALUE);
	roll2 = (rand() % (MAXVALUE - MINVALUE + 1) + MINVALUE);

	cout << roll1 << ", " << roll2;

	return 0;
}
