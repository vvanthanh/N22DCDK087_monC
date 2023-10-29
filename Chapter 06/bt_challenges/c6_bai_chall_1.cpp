#include <iostream>
using namespace std;

// Function to calculate retail price
double calculateRetail(double wholesaleCost, double markupPercentage) {
    if (wholesaleCost < 0 || markupPercentage < 0) {
        cout << "Invalid input. Please enter non-negative values." << endl;
        return -1; // Return a negative value to indicate an error
    }

    double retailPrice = wholesaleCost * (1 + markupPercentage / 100);
    return retailPrice;
}

int main() {
    double wholesaleCost, markupPercentage;

    cout << "Enter the wholesale cost: $";
    cin >> wholesaleCost;

    cout << "Enter the markup percentage: ";
    cin >> markupPercentage;

    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);

    if (retailPrice >= 0) {
        cout << "The retail price is: $" << retailPrice << endl;
    }

    return 0;
}
