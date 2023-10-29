#include <iostream>
using namespace std;

// Function to calculate and display order status
void displayOrderStatus(int spoolsOrdered, int spoolsInStock, bool specialCharges = false, double chargesPerSpool = 10.00)
{
    if (spoolsOrdered < 1 || spoolsInStock < 0 || chargesPerSpool < 0)
    {
        cout << "Invalid input. Please enter valid values." << endl;
        return;
    }

    int spoolsReadyToShip = min(spoolsOrdered, spoolsInStock);
    int spoolsOnBackorder = max(0, spoolsOrdered - spoolsInStock);

    double subtotal = spoolsReadyToShip * 100.0;
    double totalCharges = specialCharges ? chargesPerSpool * spoolsReadyToShip : spoolsReadyToShip * 10.0;
    double totalOrder = subtotal + totalCharges;

    cout << "Number of spools ready to ship: " << spoolsReadyToShip << endl;
    cout << "Number of spools on backorder: " << spoolsOnBackorder << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Total shipping and handling charges: $" << totalCharges << endl;
    cout << "Total of the order ready to ship: $" << totalOrder << endl;
}

int main()
{
    int spoolsOrdered, spoolsInStock;
    bool specialCharges;
    double chargesPerSpool;

    cout << "Enter the number of spools ordered: ";
    cin >> spoolsOrdered;

    if (spoolsOrdered < 1)
    {
        cout << "Spools ordered cannot be less than 1. Exiting program." << endl;
        return 1;
    }

    cout << "Enter the number of spools in stock: ";
    cin >> spoolsInStock;

    cout << "Are there special shipping and handling charges (1 for Yes, 0 for No): ";
    cin >> specialCharges;

    if (specialCharges)
    {
        cout << "Enter the special charges per spool: $";
        cin >> chargesPerSpool;
    }

    displayOrderStatus(spoolsOrdered, spoolsInStock, specialCharges, chargesPerSpool);

    return 0;
}
