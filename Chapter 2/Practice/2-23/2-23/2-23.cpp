
#include <iostream>
using namespace std;

int main()
{
	int regularPrice;
	regularPrice = 59.95;

	int discount;
	discount = regularPrice * .2;

	int salePrice;
	salePrice = regularPrice - discount;

	cout << "Regular Price: $" << regularPrice << endl;
	cout << "Discount Amount: $" << discount << endl;
	cout << "Sale Price: $" << salePrice << endl;

	return 0;

}
