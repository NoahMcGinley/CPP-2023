#include <iostream>
#include <iomanip>
using namespace std;

void sorter(int[], int);
void swap(int&, int&);
double average(int[], int);

/*-----------------------------------
# testScores() accepts no arguments
# It dynamically allocates memory to hold
# a test scores determined by the user.
# It then calculates the average of the
# test scores after dropping the lowest score
-------------------------------------*/
void testScores()
{
	// Initializes variables
	int numScores, *scores = nullptr;

	// Receives input from the user on how many test scores they want to enter
	cout << "How many test scores do you want to enter? ";
	cin >> numScores;
    while (numScores <= 0)
    {
        cout << "Enter a value greater than 0 for the number\n"
           << "of test scores that you want to enter : ";
        cin >> numScores;
    }

	// Dynamically allocates memory to hold test scores
	scores = new int[numScores];
    int* scorePtr = scores;

	// Loops to receive scores form user
	for (int i = 0; i < numScores; i++)
	{
		cout << "Test #" << (i + 1) << ": ";
        cin >> *scorePtr;
        while (*scorePtr < 0)
        {
            cout << "Enter a valid, non negative score: ";
            cin >> *scorePtr;
        }
        scorePtr++;
	}

    // Updates what scorePtr is pointing to and calls
    // sorter() to sort the array in ascending order
    scorePtr = scores;
	sorter(scores, numScores);

    // Outputs sorted array
    cout << "\nList of scores in ascending order:\n";
    for (int i = 0; i < numScores; i++)
    {
        cout << *scorePtr << endl;
        scorePtr++;
    }
    
    // Resets scorePtr
    scorePtr = scores;
    
    double avg = average(scores, numScores);

    cout << fixed << setprecision(2) << showpoint;
    cout << "The lowest score is " << *scorePtr << endl;
    cout << "The average without the lowest score is " << avg << "\n\n\n";

	delete[] scores;

}


/*--------------------------------------------
# sorter() accepts int[] and int as arguments
# It takes the *scores of scores and sorts them
# in ascending order
----------------------------------------------*/
void sorter(int scores[], int numScores)
{
    // Declares Variables
    int minIndex;
    int minValue;

    // Selection sorting
    for (int start = 0; start < numScores - 1; start++)
    {
        minIndex = start;
        minValue = scores[start];
        for (int i = start + 1; i < numScores; i++)
        {
            if (scores[i] < minValue)
            {
                minValue = scores[i];
                minIndex = i;
            }
        }
        swap(scores[minIndex], scores[start]);
    }
}


// swap() accepts two int&s
// It swaps two values
void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}


/*--------------------------------
# average() accepts two ints
# It calculates and returns the average
# not incuding the lowest score within
# the average
----------------------------------*/
double average(int scores[], int numScores)
{
    // Variables
    int *scorePtr = scores;
    double total = 0;
    
    // Loops to determine total
    for (int i = 0; i < numScores; i++)
    {
        total += *scorePtr;
        scorePtr++;
    }

    // Calculates and returns the average excluding the lowest value
    scorePtr = scores;
    total -= *scorePtr;
    double average = total / (numScores - 1);
    return average;
}