#include <iostream>
#include <cmath>

class MortgageCalculator {
private:
    double loan;
    double rate;
    int years;
    double monthlyPayment;

public:
    // Constructor
    MortgageCalculator() : loan(0), rate(0), years(0), monthlyPayment(0) {}

    // Set loan amount (with validation)
    void setLoanAmount(double amount) {
        if (amount >= 0) {
            loan = amount;
        } else {
            std::cerr << "Loan amount cannot be negative." << std::endl;
        }
    }

    // Set annual interest rate (with validation)
    void setAnnualInterestRate(double annualRate) {
        if (annualRate >= 0) {
            rate = annualRate / 100.0; // Convert percentage to decimal
        } else {
            std::cerr << "Interest rate cannot be negative." << std::endl;
        }
    }

    // Set number of years (with validation)
    void setYears(int numYears) {
        if (numYears >= 0) {
            years = numYears;
        } else {
            std::cerr << "Number of years cannot be negative." << std::endl;
        }
    }

    // Calculate and return the monthly payment
    double calculateMonthlyPayment() {
        double term = pow(1 + rate / 12, 12 * years);
        monthlyPayment = (loan * rate / 12 * term) / (term - 1);
        return monthlyPayment;
    }

    // Calculate and return the total amount paid
    double calculateTotalAmountPaid() {
        return monthlyPayment * 12 * years;
    }
};

int main() {
    MortgageCalculator calculator;

    // Input loan amount
    double loanAmount;
    std::cout << "Enter the loan amount: $";
    std::cin >> loanAmount;
    calculator.setLoanAmount(loanAmount);

    // Input annual interest rate
    double annualInterestRate;
    std::cout << "Enter the annual interest rate (%): ";
    std::cin >> annualInterestRate;
    calculator.setAnnualInterestRate(annualInterestRate);

    // Input number of years
    int numYears;
    std::cout << "Enter the number of years: ";
    std::cin >> numYears;
    calculator.setYears(numYears);

    // Calculate and display the monthly payment
    double monthlyPayment = calculator.calculateMonthlyPayment();
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;

    // Calculate and display the total amount paid
    double totalAmountPaid = calculator.calculateTotalAmountPaid();
    std::cout << "Total Amount Paid: $" << totalAmountPaid << std::endl;

    return 0;
}
