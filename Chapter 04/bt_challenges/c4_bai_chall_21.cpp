#include <iostream>
using namespace std;

int main() {
    // Constants for the speed of sound in various media (in meters per second)
    const double SPEED_CARBON_DIOXIDE = 258.0;
    const double SPEED_AIR = 331.5;
    const double SPEED_HELIUM = 972.0;
    const double SPEED_HYDROGEN = 1270.0;

    // Display the menu
    cout << "Select a gas medium:" << endl;
    cout << "1. Carbon Dioxide" << endl;
    cout << "2. Air" << endl;
    cout << "3. Helium" << endl;
    cout << "4. Hydrogen" << endl;

    int choice;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    double speed;
    switch (choice) {
        case 1:
            speed = SPEED_CARBON_DIOXIDE;
            break;
        case 2:
            speed = SPEED_AIR;
            break;
        case 3:
            speed = SPEED_HELIUM;
            break;
        case 4:
            speed = SPEED_HYDROGEN;
            break;
        default:
            cout << "Invalid choice. Please select a valid option (1-4)." << endl;
            return 1;
    }

    double time;
    cout << "Enter the time it took for the sound to travel (0-30 seconds): ";
    cin >> time;

    if (time < 0 || time > 30) {
        cout << "Invalid time. Please enter a time between 0 and 30 seconds." << endl;
        return 1;
    }

    // Calculate the distance
    double distance = speed * time;

    // Display the result
    cout << "The source of the sound was approximately " << distance << " meters away." << endl;

    return 0;
}
