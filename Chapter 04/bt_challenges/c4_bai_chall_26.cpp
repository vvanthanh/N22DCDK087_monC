#include <iostream>
using namespace std;

int main() {
    // Define the cost of each package
    double costPackageA = 29.99;
    double costPackageB = 39.99;
    double costPackageC = 49.99;

    // Calculate the savings for Package A customers
    double savingsAB = costPackageA - costPackageB;
    double savingsAC = costPackageA - costPackageC;

    // Calculate the savings for Package B customers
    double savingsBC = costPackageB - costPackageC;

    // Display the savings for Package A customers
    cout << "If you have Package A:" << endl;
    if (savingsAB > 0) {
        cout << "You would save $" << savingsAB << " if you purchased Package B." << endl;
    }
    if (savingsAC > 0) {
        cout << "You would save $" << savingsAC << " if you purchased Package C." << endl;
    }
    if (savingsAB <= 0 && savingsAC <= 0) {
        cout << "There would be no savings if you purchased other packages." << endl;
    }

    // Display the savings for Package B customers
    cout << "If you have Package B:" << endl;
    if (savingsBC > 0) {
        cout << "You would save $" << savingsBC << " if you purchased Package C." << endl;
    }
    if (savingsBC <= 0) {
        cout << "There would be no savings if you purchased Package C." << endl;
    }

    return 0;
}
