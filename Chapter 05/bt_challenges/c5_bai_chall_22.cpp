#include <iostream>

using namespace std;

int main() {
    int sideLength;

    // Ask the user for a positive integer no greater than 15
    cout << "Enter a positive integer (no greater than 15): ";
    cin >> sideLength;

    if (sideLength > 0 && sideLength <= 15) {
        // Display the square
        for (int i = 0; i < sideLength; i++) {
            for (int j = 0; j < sideLength; j++) {
                cout << 'X';
            }
            cout << endl;
        }
    } else {
        cout << "Invalid input. Please enter a positive integer between 1 and 15." << endl;
    }

    return 0;
}
