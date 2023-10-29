#include <iostream>
#include <fstream>
using namespace std;

// Function to calculate the final balance after a specified number of months
double calculateFinalBalance(double initialBalance, double annualInterestRate, int months) {
    double monthlyInterestRate = annualInterestRate / 12.0;
    for (int i = 0; i < months; i++) {
        initialBalance += initialBalance * monthlyInterestRate;
    }
    return initialBalance;
}

int main() {
    // Create and open an output file stream
    ofstream outputFile("savings_report.txt");

    if (!outputFile) {
        cerr << "Failed to open the output file." << endl;
        return 1;
    }

    // Prompt the user for initial balance, annual interest rate, and the number of months
    double initialBalance, annualInterestRate;
    int months;
    
    cout << "Enter the initial balance: ";
    cin >> initialBalance;
    cout << "Enter the annual interest rate (in percentage): ";
    cin >> annualInterestRate;
    cout << "Enter the number of months: ";
    cin >> months;

    // Calculate the final balance
    double finalBalance = calculateFinalBalance(initialBalance, annualInterestRate / 100.0, months);

    // Write the final report to the file
    outputFile << "Initial Balance: $" << initialBalance << endl;
    outputFile << "Annual Interest Rate: " << annualInterestRate << "%" << endl;
    outputFile << "Number of Months: " << months << endl;
    outputFile << "Final Balance: $" << finalBalance << endl;

    // Close the output file
    outputFile.close();

    cout << "Final report has been written to 'savings_report.txt'." << endl;

    return 0;
}
