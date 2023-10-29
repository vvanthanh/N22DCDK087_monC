#include <iostream>
#include <string>
using namespace std;

int main() {
    // Prompt the user for input
    cout << "Enter a date in the format mm/dd/yyyy: ";
    string input;
    getline(cin, input);

    // Extract the month, day, and year from the input string
    int month, day, year;
    sscanf(input.c_str(), "%d/%d/%d", &month, &day, &year);

    // Array of month names
    string months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    // Check if the month is valid (1-12)
    if (month >= 1 && month <= 12) {
        // Check if the day is valid (1-31)
        if (day >= 1 && day <= 31) {
            // Print the date in the desired format
            cout << months[month - 1] << " " << day << ", " << year << endl;
        } else {
            cout << "Invalid day." << endl;
        }
    } else {
        cout << "Invalid month." << endl;
    }

    return 0;
}
