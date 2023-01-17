#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <string>
using namespace std;

int main()
{
	/* Accepts no arugments
	Takes input from the user to determine the
	monthly loan payments*/

	// Defines varialbes
	float loanAmount, annualInterestRate,
		numPayments, monthlyPayment,
		amountPaidBack, interestPaid,
		monthlyInterestRate, totalPaid;

	// Input
	cout << "Enter the loan amount: ";
	cin >> loanAmount;
	cout << "Enter the annual interest rate: ";
	cin >> annualInterestRate;
	cout << "Enter the number of payments made: ";
	cin >> numPayments;

	// Calculations
	monthlyInterestRate = (annualInterestRate / 100) / 12;

	monthlyPayment = ((monthlyInterestRate * pow((1 + monthlyInterestRate), numPayments)) /
		(pow((1 + monthlyInterestRate), numPayments) - 1)) * loanAmount;

	totalPaid = monthlyPayment * numPayments;
	interestPaid = totalPaid - loanAmount;
	amountPaidBack = loanAmount + interestPaid;

	// Output
	cout << "Loan Amount:" << loanAmount << endl;
	cout << "Monthly Interest Rate:" << monthlyInterestRate << "%" << endl;
	cout << "Number of Payments:" << numPayments << endl;
	cout << "Monthly Payments:" << monthlyPayment << endl;
	cout << "Amount Paid Back:" << amountPaidBack << endl;
	cout << "Loan Amount:" << interestPaid << endl;

	return 0;

}

