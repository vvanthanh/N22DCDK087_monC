#include <iostream>
#include <iomanip> // for setting precision
using namespace std;

int main() {
    const double air_speed = 1100.0;
    const double water_speed = 4900.0;
    const double steel_speed = 16400.0;

    char choice;
    double distance, time;

    cout << "Select a medium:\n";
    cout << "A) Air\n";
    cout << "W) Water\n";
    cout << "S) Steel\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 'A':
        case 'a':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be less than 0.\n";
            } else {
                time = distance / air_speed;
                cout << "It will take " << fixed << setprecision(4) << time << " seconds to travel that distance in air.\n";
            }
            break;
        case 'W':
        case 'w':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be less than 0.\n";
            } else {
                time = distance / water_speed;
                cout << "It will take " << fixed << setprecision(4) << time << " seconds to travel that distance in water.\n";
            }
            break;
        case 'S':
        case 's':
            cout << "Enter the distance in feet: ";
            cin >> distance;
            if (distance < 0) {
                cout << "Distance cannot be less than 0.\n";
            } else {
                time = distance / steel_speed;
                cout << "It will take " << fixed << setprecision(4) << time << " seconds to travel that distance in steel.\n";
            }
            break;
        default:
            cout << "Invalid choice. Please select A, W, or S.\n";
            break;
    }

    return 0;
}
