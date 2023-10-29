#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants
    const int sp = 1000;  // sharesPurchased
    const double pp = 45.50;  // purchasePricePerShare
    const double pc = 0.02;  // purchaseCommissionRate (2%)
    const double sps = 56.90;  // sellingPricePerShare
    const double sc = 0.02;  // sellingCommissionRate (2%)

    // Calculate the amounts
    double pa = sp * pp;  // purchaseAmount
    double pcn = pa * pc;  // purchaseCommission
    double sa = sp * sps;  // sellingAmount
    double scn = sa * sc;  // sellingCommission
    double p = (sa - scn) - (pa + pcn);  // profit

    // Display the information
    cout << fixed << setprecision(2);
    cout << "Amount paid for the stock: $" << pa << endl;
    cout << "Commission paid when buying the stock: $" << pcn << endl;
    cout << "Amount sold the stock for: $" << sa << endl;
    cout << "Commission paid when selling the stock: $" << scn << endl;
    cout << "Profit after commissions: $" << p << endl;

    return 0;
}
