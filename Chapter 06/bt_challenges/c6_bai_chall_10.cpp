#include <iostream>
#include <cmath> // Required for the pow() function
using namespace std;

// Function to calculate the future value
double futureValue(double presentValue, double monthlyInterestRate, int numberOfMonths) {
    return presentValue * pow(1 + monthlyInterestRate, numberOfMonths);
}

int main() {
    double presentValue, monthlyInterestRate;
    int numberOfMonths;

    // Prompt the user for input
    cout << "Enter the present value of the account: ";
    cin >> presentValue;

    cout << "Enter the monthly interest rate (as a decimal): ";
    cin >> monthlyInterestRate;

    cout << "Enter the number of months: ";
    cin >> numberOfMonths;

    // Calculate the future value using the futureValue function
    double futureVal = futureValue(presentValue, monthlyInterestRate, numberOfMonths);

    // Display the result
    cout << "The future value of the account after " << numberOfMonths << " months is: " << futureVal << endl;

    return 0;
}
