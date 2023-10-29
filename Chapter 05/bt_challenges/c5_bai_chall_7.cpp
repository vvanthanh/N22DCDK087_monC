#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int numDays;
    
    // Input validation: Ensure numDays is at least 1
    do {
        cout << "Enter the number of days worked (must be at least 1): ";
        cin >> numDays;
    } while (numDays < 1);

    cout << "Day           Salary" << endl;
    cout << "------------------------" << endl;

    double totalPay = 0.01; // Initial salary on the first day
    for (int day = 1; day <= numDays; day++) {
        cout << setw(2) << day << "            $ " << fixed << setprecision(2) << totalPay << endl;
        totalPay *= 2; // Double the salary for the next day
    }

    cout << "------------------------" << endl;
    cout << "Total Pay: $ " << fixed << setprecision(2) << totalPay / 100.0 << endl;

    return 0;
}
