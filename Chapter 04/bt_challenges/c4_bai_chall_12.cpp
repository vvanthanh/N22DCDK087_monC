#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double packagePrice = 99.0;
    int quantity;
    double totalCost;

    cout << "Enter the number of units sold: ";
    cin >> quantity;

    if (quantity <= 0) {
        cout << "Invalid input. Please enter a positive number of units." << endl;
    } else {
        double discount = 0.0;
        
        if (quantity >= 10 && quantity <= 19) {
            discount = 0.20;  // 20% discount
        } else if (quantity >= 20 && quantity <= 49) {
            discount = 0.30;  // 30% discount
        } else if (quantity >= 50 && quantity <= 99) {
            discount = 0.40;  // 40% discount
        } else if (quantity >= 100) {
            discount = 0.50;  // 50% discount
        }

        totalCost = quantity * packagePrice * (1 - discount);

        cout << fixed << setprecision(2);
        cout << "Total cost of the purchase: $" << totalCost << endl;
    }

    return 0;
}
