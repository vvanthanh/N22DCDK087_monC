#include <iostream>

using namespace std;

int main() {
    double cost = 88.67;
    double tax = 0.0675; // 6.75% tax rate
    double tip = 0.20;   // 20% tip rate

    // Calculate tax and tip
    double taxAmt = cost * tax;
    double totalWithTax = cost + taxAmt;
    double tipAmt = totalWithTax * tip;
    double total = totalWithTax + tipAmt;

    // Display the results
    cout << "Cost: $" << cost << endl;
    cout << "Tax: $" << taxAmt << endl;
    cout << "Tip: $" << tipAmt << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
