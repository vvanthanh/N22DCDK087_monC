#include <iostream>
using namespace std;

int main() {
    double air, bal, dep, with, intAmt, totDep = 0, totWith = 0, totInt = 0;
    int mon;

    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> air;

    cout << "Enter the starting balance: ";
    cin >> bal;

    cout << "Enter the number of months: ";
    cin >> mon;

    for (int m = 1; m <= mon; m++) {
        double deposit, withdrawal;
        
        cout << "Month " << m << ":\n";
        
        do {
            cout << "Enter the amount deposited (must be non-negative): ";
            cin >> dep;
        } while (dep < 0);

        do {
            cout << "Enter the amount withdrawn (must be non-negative): ";
            cin >> with;
        } while (with < 0);

        bal += dep - with;

        if (bal < 0) {
            cout << "Account has been closed due to a negative balance." << endl;
            break;
        }

        intAmt = (air / 12) * bal;
        bal += intAmt;

        totDep += dep;
        totWith += with;
        totInt += intAmt;
    }

    if (bal >= 0) {
        cout << "Ending Balance: " << bal << endl;
        cout << "Total Deposits: " << totDep << endl;
        cout << "Total Withdrawals: " << totWith << endl;
        cout << "Total Interest Earned: " << totInt << endl;
    }

    return 0;
}
