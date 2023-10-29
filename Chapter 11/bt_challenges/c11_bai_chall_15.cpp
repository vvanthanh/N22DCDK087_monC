#include <iostream>
using namespace std;

// Structure for Hourly Paid Worker
struct HourlyPaid {
    double HoursWorked;
    double HourlyRate;
};

// Structure for Salaried Worker
struct Salaried {
    double Salary;
    double Bonus;
};

// Union for storing worker data
union WorkerData {
    HourlyPaid hourly;
    Salaried salaried;
};

int main() {
    WorkerData worker;
    char workerType;

    cout << "Enter 'H' for hourly paid worker or 'S' for salaried worker: ";
    cin >> workerType;

    if (workerType == 'H' || workerType == 'h') {
        cout << "Enter the number of hours worked: ";
        cin >> worker.hourly.HoursWorked;
        cout << "Enter the hourly rate: ";
        cin >> worker.hourly.HourlyRate;

        if (worker.hourly.HoursWorked < 0 || worker.hourly.HoursWorked > 80 || worker.hourly.HourlyRate < 0) {
            cout << "Invalid input. Negative values or hours worked > 80 are not allowed." << endl;
        } else {
            double pay = worker.hourly.HoursWorked * worker.hourly.HourlyRate;
            cout << "Hourly Paid Worker's Pay: $" << pay << endl;
        }
    } else if (workerType == 'S' || workerType == 's') {
        cout << "Enter the base salary: ";
        cin >> worker.salaried.Salary;
        cout << "Enter the bonus: ";
        cin >> worker.salaried.Bonus;

        if (worker.salaried.Salary < 0 || worker.salaried.Bonus < 0) {
            cout << "Invalid input. Negative values are not allowed." << endl;
        } else {
            double pay = worker.salaried.Salary + worker.salaried.Bonus;
            cout << "Salaried Worker's Pay: $" << pay << endl;
        }
    } else {
        cout << "Invalid worker type. Please enter 'H' or 'S'." << endl;
    }

    return 0;
}
