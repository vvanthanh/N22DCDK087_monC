#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;
    const int monthsPerYear = 12;

    cout << "Enter the number of years: ";
    cin >> numYears;

    // Input validation: Ensure that the number of years is at least 1.
    while (numYears < 1) {
        cout << "Please enter a valid number of years (at least 1): ";
        cin >> numYears;
    }

    for (int year = 1; year <= numYears; year++) {
        for (int month = 1; month <= monthsPerYear; month++) {
            double monthlyRainfall;

            cout << "Enter the inches of rainfall for Year " << year << ", Month " << month << ": ";
            cin >> monthlyRainfall;

            // Input validation: Ensure that monthly rainfall is not negative.
            while (monthlyRainfall < 0) {
                cout << "Please enter a non-negative value for rainfall: ";
                cin >> monthlyRainfall;
            }

            totalRainfall += monthlyRainfall;
        }
    }

    int totalMonths = numYears * monthsPerYear;
    double averageRainfall = totalRainfall / totalMonths;

    cout << "Number of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall << " inches" << endl;
    cout << "Average rainfall per month: " << averageRainfall << " inches" << endl;

    return 0;
}
