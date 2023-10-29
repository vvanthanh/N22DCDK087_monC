#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Input variables
    string date, payeeName;
    double amount;

    // Get the date
    cout << "Enter the date (MM/DD/YYYY): ";
    getline(cin, date);

    // Get the payee's name
    cout << "Pay to the Order of: ";
    getline(cin, payeeName);

    // Get the amount of the check with input validation
    do {
        cout << "Enter the amount of the check (up to $10,000): $";
        cin >> amount;

        if (amount < 0 || amount > 10000) {
            cout << "Invalid input. Please enter a non-negative amount up to $10,000." << endl;
        }
    } while (amount < 0 || amount > 10000);

    // Display the simulated check
    cout << fixed << setprecision(2);
    cout << "\nDate: " << date << endl;
    cout << "Pay to the Order of: " << payeeName << " $" << amount << endl;

    // Convert the amount to words
    int dollars = static_cast<int>(amount);
    int cents = static_cast<int>((amount - dollars) * 100);

    string ones[] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    string teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    string tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (dollars >= 1000) {
        cout << "One thousand ";
        dollars %= 1000;
    }

    if (dollars >= 100) {
        cout << ones[dollars / 100] << " hundred ";
        dollars %= 100;
    }

    if (dollars >= 20) {
        cout << tens[dollars / 10] << " ";
        dollars %= 10;
    }

    if (dollars >= 1) {
        cout << ones[dollars] << " ";
    }

    cout << "and " << cents << " cents" << endl;

    return 0;
}


