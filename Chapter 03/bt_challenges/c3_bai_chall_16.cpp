#include <iostream>
using namespace std;

int main() {
    const int seniorExemption = 5000;
    double actualValue, taxRate;
    double assessedValue, taxableValue, annualTax, quarterlyTax;

    // Input the actual value and tax rate
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;
    cout << "Enter the current tax rate for each $100 of assessed value: ";
    cin >> taxRate;

    // Calculate the assessed value and taxable value
    assessedValue = actualValue * 0.6; // Assessed value is 60% of the actual value
    taxableValue = assessedValue - seniorExemption;

    // Calculate the annual property tax
    annualTax = (taxableValue / 100) * taxRate;

    // Calculate the quarterly tax bill
    quarterlyTax = annualTax / 4;

    // Display the results
    cout << "Annual Property Tax: $" << annualTax << endl;
    cout << "Quarterly Tax Bill: $" << quarterlyTax << endl;

    return 0;
}
