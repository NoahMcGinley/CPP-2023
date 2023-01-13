
#include <iostream>
using namespace std;

int main()
{
	/* Program 2-9
	Takes input from the user for the number of books to read
	and the number of months to read them, both inegers.
	Calculates the average number of books to read to meet the book goal.
	Use type casting to prevent integer division. */

	// Defines variables
	int books; // Number of books to read
	int months; // number of months spend reading
	double perMonth; // Average number of books per month

	// Takes input
	cout << "How many books do you plan ot read? ";
	cin >> books;
	cout << "How many months will it take you to read them? ";
	cin >> months;

	// Calculates
	perMonth = static_cast<int>(books / perMonth);

	// Outputs
	cout << "You will need to read " << perMonth << " books per month.";
	
	return 0;

	// static_cast<datatype>(value)

}
