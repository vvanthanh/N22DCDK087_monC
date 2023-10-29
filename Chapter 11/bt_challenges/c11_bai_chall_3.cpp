#include <iostream>
#include <string>
using namespace std;

// Structure to store company division data
struct DivisionData {
    string divisionName;
    double firstQuarterSales;
    double secondQuarterSales;
    double thirdQuarterSales;
    double fourthQuarterSales;
    double totalAnnualSales;
    double averageQuarterlySales;
};

// Function to calculate total annual sales and average quarterly sales
void calculateDivisionData(DivisionData &division) {
    division.totalAnnualSales = division.firstQuarterSales + division.secondQuarterSales + division.thirdQuarterSales + division.fourthQuarterSales;
    division.averageQuarterlySales = division.totalAnnualSales / 4.0;
}

int main() {
    DivisionData east, west, north, south;

    // Input and validation for East division
    cout << "Enter data for the East division:" << endl;
    east.divisionName = "East";
    do {
        cout << "First Quarter Sales: ";
        cin >> east.firstQuarterSales;
    } while (east.firstQuarterSales < 0);
    do {
        cout << "Second Quarter Sales: ";
        cin >> east.secondQuarterSales;
    } while (east.secondQuarterSales < 0);
    do {
        cout << "Third Quarter Sales: ";
        cin >> east.thirdQuarterSales;
    } while (east.thirdQuarterSales < 0);
    do {
        cout << "Fourth Quarter Sales: ";
        cin >> east.fourthQuarterSales;
    } while (east.fourthQuarterSales < 0);

    // Calculate data for East division
    calculateDivisionData(east);

    // Repeat the same process for the West, North, and South divisions

    // Display the results for all divisions
    cout << "\nDivision Data:" << endl;
    cout << "Division Name\tTotal Annual Sales\tAverage Quarterly Sales" << endl;

    cout << east.divisionName << "\t\t";
    cout << east.totalAnnualSales << "\t\t\t";
    cout << east.averageQuarterlySales << endl;

    // Repeat for West, North, and South divisions

    return 0;
}
