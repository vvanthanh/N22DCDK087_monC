#include <iostream>

using namespace std;

int main() {
    double cost = 14.95;
    double profitPercentage = 0.35; // 35 percent profit
    double sellingPrice = cost + (cost * profitPercentage);

    cout << "The selling price of a circuit board that costs $" << cost << " is $" << sellingPrice << endl;

    return 0;
}
