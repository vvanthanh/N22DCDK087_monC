#include <iostream>

using namespace std;

int main() {
    int number, sum = 0;

    // Prompt the user for input and validate it
    cout << "Enter a positive integer: ";
    cin >> number;

    while (number <= 0) {
        cout << "Please enter a positive integer: ";
        cin >> number;
    }

    // Calculate the sum
    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    // Display the result
    cout << "The sum of integers from 1 to " << number << " is: " << sum << endl;

    return 0;
}
