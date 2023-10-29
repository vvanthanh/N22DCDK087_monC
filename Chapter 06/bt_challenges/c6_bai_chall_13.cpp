#include <iostream>
using namespace std;

// Function to get the number of employees from the user
int getNumEmployees() {
    int numEmployees;
    do {
        cout << "Enter the number of employees in the company: ";
        cin >> numEmployees;
    } while (numEmployees < 1); // Input validation
    return numEmployees;
}

// Function to get the total number of days absent for all employees
int getTotalDaysAbsent(int numEmployees) {
    int totalDaysAbsent = 0;
    for (int i = 1; i <= numEmployees; i++) {
        int daysMissed;
        do {
            cout << "Enter the number of days employee " << i << " missed: ";
            cin >> daysMissed;
        } while (daysMissed < 0); // Input validation
        totalDaysAbsent += daysMissed;
    }
    return totalDaysAbsent;
}

// Function to calculate the average number of days absent
double calculateAverageDaysAbsent(int numEmployees, int totalDaysAbsent) {
    return static_cast<double>(totalDaysAbsent) / numEmployees;
}

int main() {
    int numEmployees = getNumEmployees();
    int totalDaysAbsent = getTotalDaysAbsent(numEmployees);
    double averageDaysAbsent = calculateAverageDaysAbsent(numEmployees, totalDaysAbsent);

    cout << "The average number of days absent for all employees is: " << averageDaysAbsent << endl;

    return 0;
}
