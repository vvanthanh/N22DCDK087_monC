#include <iostream>

using namespace std;

int main() {
    double budget;
    cout << "Enter the amount budgeted for the month: $";
    cin >> budget;

    double expenses = 0;
    char continueInput;

    do {
        double expense;
        cout << "Enter an expense for the month: $";
        cin >> expense;

        expenses += expense;

        cout << "Do you want to enter another expense? (y/n): ";
        cin >> continueInput;
    } while (continueInput == 'y' || continueInput == 'Y');

    double budgetDifference = budget - expenses;

    if (budgetDifference > 0) {
        cout << "You are under budget by: $" << budgetDifference << endl;
    } else if (budgetDifference < 0) {
        cout << "You are over budget by: $" << -budgetDifference << endl;
    } else {
        cout << "You are right on budget!" << endl;
    }

    return 0;
}
