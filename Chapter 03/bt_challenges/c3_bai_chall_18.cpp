#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double principal, rate, amount;
    int timesCompounded;

    // Input the principal amount, interest rate, and times compounded
    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

    // Convert the rate to a decimal and calculate the amount
    rate /= 100;
    amount = principal * pow(1 + rate / timesCompounded, timesCompounded);

    // Display the report
    cout << fixed << setprecision(2);
    cout << "Interest Rate: " << rate * 100 << "%" << endl;
    cout << "Times Compounded: " << timesCompounded << endl;
    cout << "Principal: $" << principal << endl;
    cout << "Interest: $" << amount - principal << endl;
    cout << "Amount in Savings: $" << amount << endl;

    return 0;
}
