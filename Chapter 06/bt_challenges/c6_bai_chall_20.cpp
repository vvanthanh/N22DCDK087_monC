#include <iostream>

using namespace std;

// Function to calculate profit or loss
double calculateProfitOrLoss(int NS, double PP, double PC, double SP, double SC) {
    double profit = ((NS * SP) - SC) - ((NS * PP) + PC);
    return profit;
}

int main() {
    int NS; // Number of shares
    double PP, PC, SP, SC; // Purchase price, Purchase commission, Sale price, Sale commission

    // Input data from the user
    cout << "Enter the number of shares: ";
    cin >> NS;
    cout << "Enter the purchase price per share: $";
    cin >> PP;
    cout << "Enter the purchase commission paid: $";
    cin >> PC;
    cout << "Enter the sale price per share: $";
    cin >> SP;
    cout << "Enter the sale commission paid: $";
    cin >> SC;

    // Calculate profit or loss using the function
    double result = calculateProfitOrLoss(NS, PP, PC, SP, SC);

    // Display the result
    if (result > 0) {
        cout << "Profit from the sale of stock: $" << result << endl;
    } else if (result < 0) {
        cout << "Loss from the sale of stock: $" << -result << endl;
    } else {
        cout << "No profit or loss." << endl;
    }

    return 0;
}
