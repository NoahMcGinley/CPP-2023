
#include <iostream>
using namespace std;

/*----------------------------------------
# menu() accepts no arguments
# it displays a menu of choices that the user
# can chose from, it then returns their choice
------------------------------------------*/
int menu()
{
	// Declares variable
	int choice;

	// Displays menu
	cout << "Hello! Choose from one of the choices below...\n"
		<< "---------------------------------------------\n"
		<< "1. Display Seating Chart\n" // getChart()
		<< "2. Enter Prices\n" // getPrices()
		<< "3. View Available Seats\n" // getSeats()
		<< "3. View Total Sales\n" // getTotalSales()
		<< "4. Buy Tickets\n"; // buyTickets()

	// Takes input for choice and returns it
	cin >> choice;
	return choice;
}