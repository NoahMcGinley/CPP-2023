
#include <iostream>
using namespace std;

int main()
{
	// Sets Constants
	const double stateTax = .04;
	const double countyTax = .02;

	// Defines prices
	double purchase1, purchase2, purchase3;
	purchase1 = 75;
	purchase2 = 85;
	purchase3 = 100;

	// Defines and calculates costs for purchase 1
	double stateCost1, countyCost1, totalCost1;
	stateCost1 = purchase1 * stateTax;
	countyCost1 = purchase1 * countyTax;
	totalCost1 = stateCost1 + countyCost1 + purchase1;

	// Defines and calculates costs for purchase 1
	double stateCost2, countyCost2, totalCost2;
	stateCost2 = purchase2 * stateTax;
	countyCost2 = purchase2 * countyTax;
	totalCost2 = stateCost2 + countyCost2 + purchase2;

	// Defines and calculates costs for purchase 2
	double stateCost3, countyCost3, totalCost3;
	stateCost3 = purchase3 * stateTax;
	countyCost3 = purchase3 * countyTax;
	totalCost3 = stateCost3 + countyCost3 + purchase3;

	// Prints purchase 1
	cout << "Purchase\t$" << purchase1 << ".00" << endl << "State Tax:\t$" << stateCost1 << endl
		<< "County Tax:\t$" << countyCost1 << endl << "Total:\t\t$" << totalCost1 << "\n\n";
	
	// Prints purchase 2
	cout << "Purchase\t$" << purchase2 << ".00" << endl << "State Tax:\t$" << stateCost2 << endl
		<< "County Tax:\t$" << countyCost2 << endl << "Total:\t\t$" << totalCost2 << "\n\n";

	// Prints purchase 3
	cout << "Purchase\t$" << purchase3 << ".00" << endl << "State Tax:\t$" << stateCost3 << endl
		<< "County Tax:\t$" << countyCost3 << endl << "Total:\t\t$" << totalCost3 << "\n\n";

	return 0;
}