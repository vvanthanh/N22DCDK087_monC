#include <iostream>
using namespace std;

const double LABOR_RATE = 25.00;

// Function to calculate the cost of paint
double calculatePaintCost(double pricePerGallon, double gallons) {
    return pricePerGallon * gallons;
}

int main() {
    int numRooms;
    double pricePerGallon, totalPaintCost = 0, totalLaborHours = 0;

    cout << "Enter the number of rooms to be painted: ";
    cin >> numRooms;

    if (numRooms < 1) {
        cout << "Please enter a valid number of rooms (at least 1)." << endl;
        return 1;
    }

    cout << "Enter the price of paint per gallon ($10.00 or more): ";
    cin >> pricePerGallon;

    if (pricePerGallon < 10.00) {
        cout << "Please enter a valid price for paint (at least $10.00)." << endl;
        return 1;
    }

    for (int room = 1; room <= numRooms; room++) {
        double squareFeet;
        cout << "Enter the square footage of wall space for room " << room << ": ";
        cin >> squareFeet;

        if (squareFeet < 0) {
            cout << "Please enter a valid square footage (non-negative value)." << endl;
            return 1;
        }

        double gallons = squareFeet / 110.0;
        double laborHours = gallons * 8;

        totalPaintCost += calculatePaintCost(pricePerGallon, gallons);
        totalLaborHours += laborHours;
    }

    cout << "\nSummary:\n";
    cout << "Number of gallons of paint required: " << totalPaintCost << " gallons\n";
    cout << "Hours of labor required: " << totalLaborHours << " hours\n";
    cout << "Cost of the paint: $" << totalPaintCost << endl;
    cout << "Labor charges: $" << totalLaborHours * LABOR_RATE << endl;
    cout << "Total cost of the paint job: $" << (totalPaintCost + (totalLaborHours * LABOR_RATE)) << endl;

    return 0;
}
