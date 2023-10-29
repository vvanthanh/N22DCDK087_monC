#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double rate, loanAmount, monthlyPayment, amountPaidBack, interestPaid;
    int numberOfPayments;

    // Get input from the user
    cout << "Enter the loan amount: $ ";
    cin >> loanAmount;

    cout << "Enter the annual interest rate (in percentage): ";
    cin >> rate;

    cout << "Enter the number of payments: ";
    cin >> numberOfPayments;

    // Calculate the monthly interest rate
    rate /= 100;  // Convert percentage to decimal
    double monthlyRate = rate / 12.0;

    // Calculate the monthly payment
    monthlyPayment = (monthlyRate * pow(1 + monthlyRate, numberOfPayments)) /
                     (pow(1 + monthlyRate, numberOfPayments) - 1) * loanAmount;

    // Calculate the amount paid back and interest paid
    amountPaidBack = monthlyPayment * numberOfPayments;
    interestPaid = amountPaidBack - loanAmount;

    // Display the results
    cout << fixed << setprecision(2);
    cout << "Loan Amount: $ " << loanAmount << endl;
    cout << "Monthly Interest Rate: " << rate * 12 << "%" << endl;
    cout << "Number of Payments: " << numberOfPayments << endl;
    cout << "Monthly Payment: $ " << monthlyPayment << endl;
    cout << "Amount Paid Back: $ " << amountPaidBack << endl;
    cout << "Interest Paid: $ " << interestPaid << endl;

    return 0;
}
