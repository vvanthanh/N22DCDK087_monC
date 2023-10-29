#include <iostream>
using namespace std;

// Function to calculate profit or loss for a single stock sale
double calculateProfitLoss(double purchasePrice, double salePrice, int shares) {
    return (salePrice - purchasePrice) * shares;
}

int main() {
    int numSales;
    cout << "Enter the number of stock sales: ";
    cin >> numSales;

    double totalProfitLoss = 0.0;

    for (int i = 1; i <= numSales; i++) {
        double purchasePrice, salePrice;
        int shares;

        cout << "Stock Sale " << i << ":\n";
        cout << "Enter the purchase price: $";
        cin >> purchasePrice;
        cout << "Enter the sale price: $";
        cin >> salePrice;
        cout << "Enter the number of shares: ";
        cin >> shares;

        double profitLoss = calculateProfitLoss(purchasePrice, salePrice, shares);
        totalProfitLoss += profitLoss;

        cout << "Profit/Loss for Sale " << i << ": $" << profitLoss << endl;
    }

    cout << "Total Profit/Loss for all sales: $" << totalProfitLoss << endl;

    return 0;
}
