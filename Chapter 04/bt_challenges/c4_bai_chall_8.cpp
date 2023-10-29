#include <iostream>
#include <string>
using namespace std;

int main() {
    string color1, color2;

    cout << "Enter the first primary color (red, blue, or yellow): ";
    cin >> color1;

    cout << "Enter the second primary color (red, blue, or yellow): ";
    cin >> color2;

    if ((color1 == "red" || color1 == "blue" || color1 == "yellow") &&
        (color2 == "red" || color2 == "blue" || color2 == "yellow")) {
        if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
            cout << "Mixing " << color1 << " and " << color2 << " results in purple." << endl;
        } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
            cout << "Mixing " << color1 << " and " << color2 << " results in orange." << endl;
        } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
            cout << "Mixing " << color1 << " and " << color2 << " results in green." << endl;
        } else {
            cout << "No secondary color can be formed by mixing " << color1 << " and " << color2 << "." << endl;
        }
    } else {
        cout << "Error: Invalid color input. Please enter 'red,' 'blue,' or 'yellow'." << endl;
    }

    return 0;
}
