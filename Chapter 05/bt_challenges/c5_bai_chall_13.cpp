#include <iostream>
using namespace std;

int main() {
    int num, largest, smallest;

    cout << "Enter a series of integers (-99 to end):" << endl;
    cin >> num;

    if (num != -99) {
        largest = smallest = num;
    }

    while (num != -99) {
        if (num > largest) {
            largest = num;
        }
        if (num < smallest) {
            smallest = num;
        }

        cin >> num;
    }

    if (largest == -99 && smallest == -99) {
        cout << "No numbers were entered." << endl;
    } else {
        cout << "Largest number entered: " << largest << endl;
        cout << "Smallest number entered: " << smallest << endl;
    }

    return 0;
}
