
#include <iostream>
using namespace std;

int main()
{
	/* Program 3-11
	Accepts no arguments
	Outputs an intro message and takes input from the user in the form of an integer
	for the beginning inventory for three stores.
	Prompts the user for the number of items sold in each store
	Subracts that amount from each store's individual inventory
	and outputs the results*/

	// Defines variables
	int begInv, // Beginning inventory for all stores
		sold, // Number sold
		store1, store2, store3; // Inventory for store 1, 2, and 3

	// Takes inventory input
	cout << "Welcome to the My Widget inventory control system." << endl
		<< "Three stores opened last week with the same beginning inventory." << endl
		<< "Please input the beginning inventory: ";
	cin >> begInv;

	cout << "\nHow many did store 1 sell? ";
	cin >> sold;
	store2 -= sold;

	cout << "\nHow many did store 1 sell? ";
	cin >> sold;
	store2 -= sold;

	cout << "\nHow many did store 1 sell? ";
	cin >> sold;
	store2 -= sold;

	cout <<

}