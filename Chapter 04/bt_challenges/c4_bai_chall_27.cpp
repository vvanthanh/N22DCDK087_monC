#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int minutes;

    // Create a map of months to their maximum minutes
    const string months[] = {
        "January", "February", "March", "April",
        "May", "June", "July", "August",
        "September", "October", "November", "December"
    };
    const int maxMinutes[] = {
        744, 672, 744, 720,
        744, 720, 744, 744,
        720, 744, 720, 744
    };

    cout << "Enter the name of a month: ";
    cin >> month;

    // Convert the input month to title case (e.g., january -> January)
    month[0] = toupper(month[0]);
    for (int i = 1; i < month.length(); i++) {
        month[i] = tolower(month[i]);
    }

    // Find the index of the entered month in the array
    int index = -1;
    for (int i = 0; i < 12; i++) {
        if (month == months[i]) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        cout << "Enter the number of minutes used in " << month << ": ";
        cin >> minutes;

        if (minutes <= maxMinutes[index]) {
            cout << "Valid input. The number of minutes is within the maximum for " << month << "." << endl;
        } else {
            cout << "Invalid input. The number of minutes entered exceeds the maximum for " << month << "." << endl;
        }
    } else {
        cout << "Invalid month name entered." << endl;
    }

    return 0;
}
