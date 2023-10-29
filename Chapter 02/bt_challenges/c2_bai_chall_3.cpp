#include <iostream>

using namespace std;

int main() {
    double amt = 95.0;  // purchase amount
    double stateTaxRate = 0.04;  // 4 percent state sales tax rate
    double countyTaxRate = 0.02; // 2 percent county sales tax rate

    // Calculate the sales taxes
    double stateTax = amt * stateTaxRate;
    double countyTax = amt * countyTaxRate;

    // Calculate the total sales tax
    double totalTax = stateTax + countyTax;

    // Calculate the total purchase amount including taxes
    double totalAmt = amt + totalTax;

    // Display the results
    cout << "Purchase Amount: $" << amt << endl;
    cout << "State Sales Tax: $" << stateTax << endl;
    cout << "County Sales Tax: $" << countyTax << endl;
    cout << "Total Sales Tax: $" << totalTax << endl;
    cout << "Total Amount Due: $" << totalAmt << endl;

    return 0;
}
