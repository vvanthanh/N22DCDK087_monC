#include <iostream>

using namespace std;

int main() {
    double shares = 750;
    double pricePerShare = 35.00;
    double commissionRate = 0.02;

    double stockCost = shares * pricePerShare;
    double commission = stockCost * commissionRate;
    double totalCost = stockCost + commission;

    cout << "Stock Cost: $" << stockCost << endl;
    cout << "Commission: $" << commission << endl;
    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
