#include <iostream>

using namespace std;

int main() {
    double payAmount = 2200.0; // Amount earned each pay period
    int payPeriods = 26;       // Number of pay periods in a year
    double annualPay;          // Total annual pay

    // Calculate the total annual pay
    annualPay = payAmount * payPeriods;

    // Display the total annual pay
    cout << "The employee's total annual pay is: $" << annualPay << endl;

    return 0;
}
