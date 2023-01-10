
#include <iostream>
using namespace std;

int main()
{
	// Defines variables
	double payAmount, payPeriods, annualPay;
	payAmount = 2220;
	payPeriods = 26;

	// Caluclates pay
	annualPay = payAmount * payPeriods;

	// Outputs to user
	cout << "The total annual pay is: " << annualPay << endl;

	return 0;

}
