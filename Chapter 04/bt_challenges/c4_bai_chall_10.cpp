#include <iostream>
using namespace std;

int main() {
    int month, year;

    // Input month and year from the user
    cout << "Enter a month (1-12): ";
    cin >> month;
    cout << "Enter a year: ";
    cin >> year;

    // Check if the year is a leap year based on the criteria provided
    bool isLeapYear = false;
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        isLeapYear = true;
    }

    // Array to store the number of days in each month
    int daysInMonth[] = {0, 31, (isLeapYear ? 29 : 28), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Check if the input month is valid
    if (month >= 1 && month <= 12) {
        cout << "Number of days in month " << month << " in year " << year << ": " << daysInMonth[month] << " days" << endl;
    } else {
        cout << "Invalid month input. Please enter a month between 1 and 12." << endl;
    }

    return 0;
}
