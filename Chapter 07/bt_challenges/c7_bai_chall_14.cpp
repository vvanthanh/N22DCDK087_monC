#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
using namespace std;

int main() {
    const int SIZE = 5;
    int lottery[SIZE];
    int user[SIZE];
    int matchingDigits = 0;

    // Seed the random number generator
    srand(time(0));

    // Generate random lottery numbers
    cout << "Lottery numbers: ";
    for (int i = 0; i < SIZE; i++) {
        lottery[i] = rand() % 10; // Generate a random number between 0 and 9
        cout << lottery[i] << " ";
    }
    cout << endl;

    // Get user's numbers
    cout << "Enter your 5 lottery numbers (0-9): ";
    for (int i = 0; i < SIZE; i++) {
        cin >> user[i];
    }

    // Compare and count matching digits
    for (int i = 0; i < SIZE; i++) {
        if (user[i] == lottery[i]) {
            matchingDigits++;
        }
    }

    // Display the number of matching digits
    cout << "Matching digits: " << matchingDigits << endl;

    // Check if all digits match
    if (matchingDigits == SIZE) {
        cout << "Congratulations! You are a grand prize winner!" << endl;
    }

    return 0;
}
