#include <iostream>
#include <string>
using namespace std;

int main() {
    double temperature;

    cout << "Enter a temperature in Fahrenheit: ";
    cin >> temperature;

    // Define the substances and their freezing/boiling points
    string substances[] = {"Ethyl alcohol", "Mercury", "Oxygen", "Water"};
    double freezingPoints[] = {-173, -38, -362, 32};
    double boilingPoints[] = {172, 676, -306, 212};

    bool substancesThatWillFreeze = false;
    bool substancesThatWillBoil = false;

    cout << "Substances that will freeze at " << temperature << "°F: ";
    for (int i = 0; i < 4; i++) {
        if (temperature <= freezingPoints[i]) {
            cout << substances[i] << " ";
            substancesThatWillFreeze = true;
        }
    }

    cout << endl;

    cout << "Substances that will boil at " << temperature << "°F: ";
    for (int i = 0; i < 4; i++) {
        if (temperature >= boilingPoints[i]) {
            cout << substances[i] << " ";
            substancesThatWillBoil = true;
        }
    }

    cout << endl;

    if (!substancesThatWillFreeze && !substancesThatWillBoil) {
        cout << "No substances will freeze or boil at " << temperature << "°F." << endl;
    }

    return 0;
}
