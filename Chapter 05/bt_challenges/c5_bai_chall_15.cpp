#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, ficaWithholdings;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFICA = 0, totalNetPay = 0;

    while (true) {
        cout << "Enter employee number (0 to exit): ";
        cin >> employeeNumber;

        if (employeeNumber == 0) {
            break;
        }

        if (employeeNumber < 0) {
            cout << "Employee number cannot be negative. Please reenter." << endl;
            continue;
        }

        cout << "Enter gross pay: ";
        cin >> grossPay;

        if (grossPay < 0) {
            cout << "Gross pay cannot be negative. Please reenter." << endl;
            continue;
        }

        cout << "Enter state tax: ";
        cin >> stateTax;

        if (stateTax < 0 || stateTax > grossPay) {
            cout << "State tax should be non-negative and not greater than gross pay. Please reenter." << endl;
            continue;
        }

        cout << "Enter federal tax: ";
        cin >> federalTax;

        if (federalTax < 0 || federalTax > grossPay) {
            cout << "Federal tax should be non-negative and not greater than gross pay. Please reenter." << endl;
            continue;
        }

        cout << "Enter FICA withholdings: ";
        cin >> ficaWithholdings;

        if (ficaWithholdings < 0 || ficaWithholdings > grossPay) {
            cout << "FICA withholdings should be non-negative and not greater than gross pay. Please reenter." << endl;
            continue;
        }

        if (stateTax + federalTax + ficaWithholdings > grossPay) {
            cout << "Error: The sum of state tax, federal tax, and FICA withholdings is greater than gross pay. Please reenter data for this employee." << endl;
            continue;
        }

        // Calculate net pay
        double netPay = grossPay - stateTax - federalTax - ficaWithholdings;

        // Update totals
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFICA += ficaWithholdings;
        totalNetPay += netPay;
    }

    // Display totals
    cout << "Total Gross Pay: $" << totalGrossPay << endl;
    cout << "Total State Tax: $" << totalStateTax << endl;
    cout << "Total Federal Tax: $" << totalFederalTax << endl;
    cout << "Total FICA Withholdings: $" << totalFICA << endl;
    cout << "Total Net Pay: $" << totalNetPay << endl;

    return 0;
}
