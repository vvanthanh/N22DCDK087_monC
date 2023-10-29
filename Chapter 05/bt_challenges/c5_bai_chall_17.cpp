#include <iostream>

using namespace std;

int main() {
    const int NUM_STORES = 5;
    int sales[NUM_STORES];

    // Input sales for each store
    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Enter today's sales for store " << (i + 1) << ": ";
        cin >> sales[i];
    }

    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;

    for (int i = 0; i < NUM_STORES; i++) {
        cout << "Store " << (i + 1) << ": ";
        // Display the bar graph
        for (int j = 0; j < sales[i] / 100; j++) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
