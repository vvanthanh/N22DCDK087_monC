#include <iostream>

using namespace std;

int main() {
    // Constants
    const double annualRise = 1.5; // Ocean's level rise in millimeters per year
    const int years = 25; // Number of years to display

    // Display header
    cout << "Year\tMillimeters Risen" << endl;
    cout << "-------------------------" << endl;

    // Calculate and display the rise for each year
    for (int year = 1; year <= years; year++) {
        double totalRise = annualRise * year;
        cout << year << "\t" << totalRise << " mm" << endl;
    }

    return 0;
}
