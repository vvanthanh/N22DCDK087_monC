#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
    string names[3];
    double times[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter the name of runner " << (i + 1) << ": ";
        getline(cin, names[i]);

        // Input validation for time
        do {
            cout << "Enter the time for " << names[i] << " (in seconds): ";
            if (!(cin >> times[i]) || times[i] <= 0) {
                cout << "Invalid input. Please enter a positive number for time.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
        } while (times[i] <= 0);
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear any extra input

    }

    // Determine the winner, second, and third places
    int firstPlace = 0, secondPlace = 1, thirdPlace = 2;

    if (times[1] < times[firstPlace]) {
        secondPlace = firstPlace;
        firstPlace = 1;
    } else if (times[1] < times[secondPlace]) {
        secondPlace = 1;
    }

    if (times[2] < times[firstPlace]) {
        thirdPlace = secondPlace;
        secondPlace = firstPlace;
        firstPlace = 2;
    } else if (times[2] < times[secondPlace]) {
        thirdPlace = secondPlace;
        secondPlace = 2;
    } else if (times[2] < times[thirdPlace]) {
        thirdPlace = 2;
    }

    // Display the results
    cout << "Results:\n";
    cout << "1st Place: " << names[firstPlace] << " - " << times[firstPlace] << " seconds\n";
    cout << "2nd Place: " << names[secondPlace] << " - " << times[secondPlace] << " seconds\n";
    cout << "3rd Place: " << names[thirdPlace] << " - " << times[thirdPlace] << " seconds\n";

    return 0;
}
