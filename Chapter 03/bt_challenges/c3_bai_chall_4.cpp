#include <iostream>
#include <string>
using namespace std;

int main() {
    const int NUM_MONTHS = 3;
    double totalRainfall = 0.0;

    // Create an array to store the names of the months
    string months[NUM_MONTHS];

    // Ask the user to enter the name and rainfall for each month
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << "Enter the name of month " << (i + 1) << ": ";
        cin >> months[i];

        double rainfall;
        cout << "Enter the amount of rain (in inches) for " << months[i] << ": ";
        cin >> rainfall;

        totalRainfall += rainfall;
    }

    // Calculate the average rainfall
    double averageRainfall = totalRainfall / NUM_MONTHS;

    // Display the result
    cout << "The average rainfall for ";
    for (int i = 0; i < NUM_MONTHS; i++) {
        cout << months[i];
        if (i < NUM_MONTHS - 1) {
            cout << ", ";
        }
    }
    cout << " is " << averageRainfall << " inches." << endl;

    return 0;
}
