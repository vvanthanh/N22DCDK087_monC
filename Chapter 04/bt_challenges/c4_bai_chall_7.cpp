#include <iostream>
using namespace std;

int main() {
    // Constants for conversions
    const int SECONDS_PER_MINUTE = 60;
    const int SECONDS_PER_HOUR = 3600;
    const int SECONDS_PER_DAY = 86400;

    // Variables to store user input and results
    int seconds, minutes, hours, days;

    // Ask the user to enter the number of seconds
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    // Check and convert to minutes if necessary
    if (seconds >= SECONDS_PER_MINUTE) {
        minutes = seconds / SECONDS_PER_MINUTE;
        seconds %= SECONDS_PER_MINUTE;
        cout << "Minutes: " << minutes << endl;
    }

    // Check and convert to hours if necessary
    if (seconds >= SECONDS_PER_HOUR) {
        hours = seconds / SECONDS_PER_HOUR;
        seconds %= SECONDS_PER_HOUR;
        cout << "Hours: " << hours << endl;
    }

    // Check and convert to days if necessary
    if (seconds >= SECONDS_PER_DAY) {
        days = seconds / SECONDS_PER_DAY;
        seconds %= SECONDS_PER_DAY;
        cout << "Days: " << days << endl;
    }

    // Display remaining seconds
    cout << "Remaining Seconds: " << seconds << endl;

    return 0;
}
