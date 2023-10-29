#include <iostream>
using namespace std;

int main() {
    double loanPayment, insurance, gas, oil, tires, maintenance;
    
    // Ask the user to enter monthly expenses
    cout << "Enter the monthly cost for the following automobile expenses:\n";
    cout << "Loan payment: $";
    cin >> loanPayment;
    cout << "Insurance: $";
    cin >> insurance;
    cout << "Gas: $";
    cin >> gas;
    cout << "Oil: $";
    cin >> oil;
    cout << "Tires: $";
    cin >> tires;
    cout << "Maintenance: $";
    cin >> maintenance;
    
    // Calculate total monthly and annual costs
    double totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
    double totalAnnualCost = totalMonthlyCost * 12;
    
    // Display the results
    cout << "\nTotal Monthly Cost: $" << totalMonthlyCost << endl;
    cout << "Total Annual Cost: $" << totalAnnualCost << endl;
    
    return 0;
}
