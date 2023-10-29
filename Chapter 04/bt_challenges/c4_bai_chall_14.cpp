#include <iostream>
using namespace std;

int main() {
    const double BASE_MONTHLY_FEE = 10.0;
    const double LOW_BALANCE_FEE = 15.0;
    const double FEE_PER_CHECK1 = 0.10;
    const double FEE_PER_CHECK2 = 0.08;
    const double FEE_PER_CHECK3 = 0.06;
    const double FEE_PER_CHECK4 = 0.04;
    const int CHECK_THRESHOLD1 = 20;
    const int CHECK_THRESHOLD2 = 40;
    const int CHECK_THRESHOLD3 = 60;

    double balance;
    int numChecks;

    // Input validation for a non-negative balance
    cout << "Enter the beginning balance: $";
    cin >> balance;
    if (balance < 0) {
        cout << "Account is overdrawn. Please make a deposit." << endl;
        return 1;
    }

    // Input validation for a non-negative number of checks
    cout << "Enter the number of checks written: ";
    cin >> numChecks;
    if (numChecks < 0) {
        cout << "Number of checks written cannot be negative." << endl;
        return 1;
    }

    double totalFees = BASE_MONTHLY_FEE;

    // Apply low balance fee if the balance is below $400
    if (balance < 400) {
        totalFees += LOW_BALANCE_FEE;
    }

    // Calculate check fees based on the number of checks written
    if (numChecks < CHECK_THRESHOLD1) {
        totalFees += numChecks * FEE_PER_CHECK1;
    } else if (numChecks < CHECK_THRESHOLD2) {
        totalFees += numChecks * FEE_PER_CHECK2;
    } else if (numChecks < CHECK_THRESHOLD3) {
        totalFees += numChecks * FEE_PER_CHECK3;
    } else {
        totalFees += numChecks * FEE_PER_CHECK4;
    }

    cout << "Total service fees for the month: $" << totalFees << endl;

    return 0;
}
