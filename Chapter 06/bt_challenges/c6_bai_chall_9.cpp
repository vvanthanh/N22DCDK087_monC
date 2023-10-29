#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the present value
double presentValue(double futureValue, double annualInterestRate, int numberOfYears) {
    double presentValue = futureValue / pow(1 + annualInterestRate, numberOfYears);
    return presentValue;
}

int main() {
    double futureValue;
    double annualInterestRate;
    int numberOfYears;

    cout << "Enter the future value you want to achieve: $";
    cin >> futureValue;

    cout << "Enter the annual interest rate (in decimal form, e.g., 0.05 for 5%): ";
    cin >> annualInterestRate;

    cout << "Enter the number of years the money will sit in the account: ";
    cin >> numberOfYears;

    double presentVal = presentValue(futureValue, annualInterestRate, numberOfYears);

    cout << "You need to deposit $" << presentVal << " today to achieve a future value of $" << futureValue << " in " << numberOfYears << " years." << endl;

    return 0;
}
