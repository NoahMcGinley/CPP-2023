
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	/* Program 5-14
	Accepts no arguments
	Prompts the user for the number of students and number
	of tests. It uses a nested for loop to collect the information
	for each student and display the average*/

	int numStudents, numTests;
	double total = 0, average = 0, scores = 0;

	cout << fixed << showpoint << setprecision(2);

	cout << "Enter the number of students to collect scores for: ";
	cin >> numStudents;
	cout << "Enter the number of test scores per student: ";
	cin >> numTests;

	for (int count = 1; count <= numStudents; count++)
	{
		cout << "\nEnter scores for student " << count;
		for (int count2 = 1; count2 <= numTests; count2++)
		{
			cout << "Test " << count2 << ": ";
			cin >> scores;
			total += scores;
		}
		average = total / numTests;
		cout << "\nStudent " << count << " averaged " << average << endl;
	}
}
