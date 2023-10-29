#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int MONTHS = 12;

int main() {
    double rainfall[MONTHS];
    string monthNames[MONTHS] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    double totalRainfall = 0;
    double highestRainfall = -1;  // Initialized to a negative value for comparison
    double lowestRainfall = 9999;  // Initialized to a large value for comparison
    string monthWithHighest, monthWithLowest;

    for (int i = 0; i < MONTHS; i++) {
        do {
            cout << "Enter the rainfall for " << monthNames[i] << ": ";
            cin >> rainfall[i];

            if (rainfall[i] < 0) {
                cout << "Rainfall cannot be negative. Please enter a valid value.\n";
            }
        } while (rainfall[i] < 0);

        totalRainfall += rainfall[i];

        if (rainfall[i] > highestRainfall) {
            highestRainfall = rainfall[i];
            monthWithHighest = monthNames[i];
        }

        if (rainfall[i] < lowestRainfall) {
            lowestRainfall = rainfall[i];
            monthWithLowest = monthNames[i];
        }
    }

    cout << fixed << setprecision(2);
    cout << "Total rainfall for the year: " << totalRainfall << " inches" << endl;
    cout << "Average monthly rainfall: " << totalRainfall / MONTHS << " inches" << endl;
    cout << "Month with the highest rainfall: " << monthWithHighest << " (" << highestRainfall << " inches)" << endl;
    cout << "Month with the lowest rainfall: " << monthWithLowest << " (" << lowestRainfall << " inches)" << endl;

    return 0;
}
