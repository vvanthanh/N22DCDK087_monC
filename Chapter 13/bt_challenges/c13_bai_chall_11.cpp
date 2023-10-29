#include <iostream>
using namespace std;

class PayRoll {
private:
    double hourlyPayRate;
    double hoursWorked;
    double totalPay;

public:
    PayRoll() : hourlyPayRate(0.0), hoursWorked(0.0), totalPay(0.0) {}

    void setHourlyPayRate(double rate) {
        hourlyPayRate = rate;
    }

    void setHoursWorked(double hours) {
        if (hours > 60.0) {
            cout << "Error: Hours worked cannot exceed 60. Setting to 60 hours." << endl;
            hoursWorked = 60.0;
        } else {
            hoursWorked = hours;
        }
    }

    void calculateTotalPay() {
        totalPay = hourlyPayRate * hoursWorked;
    }

    double getTotalPay() {
        return totalPay;
    }
};

int main() {
    const int numEmployees = 7;
    PayRoll employees[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        double hours;
        cout << "Enter the number of hours worked for employee " << (i + 1) << ": ";
        cin >> hours;

        employees[i].setHourlyPayRate(10.0);  // You can set the hourly pay rate here.
        employees[i].setHoursWorked(hours);
        employees[i].calculateTotalPay();
    }

    cout << "\nGross pay for each employee:\n";
    for (int i = 0; i < numEmployees; i++) {
        cout << "Employee " << (i + 1) << ": $" << employees[i].getTotalPay() << endl;
    }

    return 0;
}
