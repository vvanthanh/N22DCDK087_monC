#include <iostream>
#include <string>

using namespace std;

const int NUM_SALSAS = 5;

int main() {
    string salsaNames[NUM_SALSAS] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[NUM_SALSAS] = {0};

    // Input: Enter the number of jars sold for each salsa type
    for (int i = 0; i < NUM_SALSAS; i++) {
        do {
            cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
            cin >> jarsSold[i];
            if (jarsSold[i] < 0) {
                cout << "Invalid input. Please enter a non-negative value.\n";
            }
        } while (jarsSold[i] < 0);
    }

    // Calculate total sales, highest selling, and lowest selling
    int totalSales = 0;
    int highestSales = jarsSold[0];
    int lowestSales = jarsSold[0];
    string highestSellingProduct = salsaNames[0];
    string lowestSellingProduct = salsaNames[0];

    for (int i = 0; i < NUM_SALSAS; i++) {
        totalSales += jarsSold[i];

        if (jarsSold[i] > highestSales) {
            highestSales = jarsSold[i];
            highestSellingProduct = salsaNames[i];
        }

        if (jarsSold[i] < lowestSales) {
            lowestSales = jarsSold[i];
            lowestSellingProduct = salsaNames[i];
        }
    }

    // Display the sales report
    cout << "\nSales Report:\n";
    for (int i = 0; i < NUM_SALSAS; i++) {
        cout << "Sales for " << salsaNames[i] << ": " << jarsSold[i] << " jars\n";
    }
    cout << "Total Sales: " << totalSales << " jars\n";
    cout << "Highest Selling Product: " << highestSellingProduct << " (" << highestSales << " jars)\n";
    cout << "Lowest Selling Product: " << lowestSellingProduct << " (" << lowestSales << " jars)\n";

    return 0;
}
