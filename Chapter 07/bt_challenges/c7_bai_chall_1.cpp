#include <iostream>

using namespace std;

int main() {
    const int SIZE = 10;
    int values[SIZE];

    // Input: Get 10 values from the user
    cout << "Enter 10 integer values, one at a time:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> values[i];
    }

    // Find the largest and smallest values
    int largest = values[0];
    int smallest = values[0];

    for (int i = 1; i < SIZE; i++) {
        if (values[i] > largest) {
            largest = values[i];
        }
        if (values[i] < smallest) {
            smallest = values[i];
        }
    }

    // Output: Display the largest and smallest values
    cout << "The largest value is: " << largest << endl;
    cout << "The smallest value is: " << smallest << endl;

    return 0;
}
