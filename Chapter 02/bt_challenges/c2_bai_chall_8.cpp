#include <iostream>
using namespace std;

int main() {
    double i1 = 15.95;
    double i2 = 24.95;
    double i3 = 6.95;
    double i4 = 12.95;
    double i5 = 3.95;

    double sub = i1 + i2 + i3 + i4 + i5;

    double taxRate = 0.07;
    double tax = sub * taxRate;

    double total = sub + tax;

    cout << "Item 1: $" << i1 << endl;
    cout << "Item 2: $" << i2 << endl;
    cout << "Item 3: $" << i3 << endl;
    cout << "Item 4: $" << i4 << endl;
    cout << "Item 5: $" << i5 << endl;

    cout << "Subtotal: $" << sub << endl;
    cout << "Sales Tax (7%): $" << tax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
