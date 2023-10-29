#include <iostream>
using namespace std;

int main() {
    char package;
    double baseCost, additionalCost, totalCost;
    int minutesUsed;

    cout << "Select a package (A, B, or C): ";
    cin >> package;

    if (package != 'A' && package != 'B' && package != 'C') {
        cout << "Invalid package selection. Please choose A, B, or C." << endl;
        return 1;
    }

    cout << "Enter the number of minutes used: ";
    cin >> minutesUsed;

    switch (package) {
        case 'A':
            baseCost = 39.99;
            if (minutesUsed > 450) {
                additionalCost = (minutesUsed - 450) * 0.45;
            } else {
                additionalCost = 0;
            }
            break;
        case 'B':
            baseCost = 59.99;
            if (minutesUsed > 900) {
                additionalCost = (minutesUsed - 900) * 0.40;
            } else {
                additionalCost = 0;
            }
            break;
        case 'C':
            baseCost = 69.99;
            additionalCost = 0; // Unlimited minutes
            break;
    }

    totalCost = baseCost + additionalCost;

    cout << "Total amount due: $" << totalCost << endl;

    return 0;
}
