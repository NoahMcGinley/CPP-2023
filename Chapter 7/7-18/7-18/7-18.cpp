
#include <iostream>
using namespace std;

void getScores(double[], int);
double getTotal(double[], int);
double getLowest(double[], int);

int main()
{
	const int SIZE = 4;
	double scores[SIZE];
	double total, lowest;
	getScores(scores, SIZE);
	total = getTotal(scores, SIZE);
	lowest = getLowest(scores, SIZE);
	double average = total / SIZE;

	cout << "The average of the scores " << scores[0] << scores[1] << scores[2] << scores[3] << " with the lowest score of " << lowest
		<< " dropped is " << average << endl;

	return 0;
}

void getScores(double scores[], int SIZE)
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Enter the score for test " << i << ": ";
		cin >> scores[i];
	}

}

double getTotal(double scores[], int SIZE)
{
	double total = 0;
	for (int i = 0; i < SIZE; i++)
	{
		total += scores[i];
	}
	return total;
}

double getLowest(double scores[], int SIZE)
{
	double lowest = 1000;
	for (int i = 0; i < SIZE; i++)
	{
		if (scores[i] < lowest)
		{
			lowest = scores[i];
		}
	}
	return lowest;
}
