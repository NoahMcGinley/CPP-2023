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
	double loanAmount, annualInterestRate,
		numPayments, monthlyPayment,
		amountPaidBack, interestPaid,
		monthlyInterestRate, totalPaid,
		monthlyInterestOutput;

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
	monthlyInterestOutput = monthlyInterestRate * 100;

	// Output
	cout << fixed << setprecision(2);
	cout << "Loan Amount:\t\t$\t" << loanAmount << endl;
	cout  << "Monthly Interest Rate:\t\t" << right << monthlyInterestOutput << "%" << endl;
	cout << "Number of Payments:\t\t" << numPayments << endl;
	cout << "Monthly Payments:\t$\t" << monthlyPayment << endl;
	cout << "Amount Paid Back:\t$\t" << amountPaidBack << endl;
	cout << "Loan Amount:\t\t$\t" << interestPaid << endl;

	return 0;

}

