#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Program 4-25
	Accepts no arguments
	*/

	char foodGrade;

	cout << "Out pet food comes in three grades: A, B, and C\n"
		<< "which grade would you like to see pricing for?\n";
	cin >> foodGrade;

	switch (foodGrade)
	{
	case 'a':
	case 'A': cout << "30 cents per pound.\n";
		break;
	case 'b':
	case 'B': cout << "20 cents per pound.\n";
		break;
	case 'c':
	case 'C': cout << "10 cents per pound.\n";
		break;
	
	}

		return 0;
	}

