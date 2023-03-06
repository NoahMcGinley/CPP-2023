#include <iostream>
#include <vector>
using namespace std;

void accountValidation()
{
	const int SIZE = 18;
	int i = 0, position = -1;
	double input;
	bool found = false;

	cout << "Enter an account number to search: ";
	cin >> input;

	vector<double>numbers{
		5658845,	4520125,	7895122,	8777541,	8451277,	1302850,
		8080152,	4562555,	5552012,	5050552,	7825877,	1250255,
		1005231,	6545231,	3852085,	7576651,	7881200,	4581002, };

	while (i < SIZE && !found)
	{
		if (numbers[i] == input)
		{
			found = true;
			position = i;
		}
		i++;
	}

	if (position == -1)
	{

	}

}