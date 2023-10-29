#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to simulate coin toss
void coinToss() {
    int result = rand() % 2 + 1; // Generate a random number in the range 1-2

    if (result == 1) {
        cout << "Heads" << endl;
    } else {
        cout << "Tails" << endl;
    }
}

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    int numTosses;

    cout << "How many times would you like to toss the coin? ";
    cin >> numTosses;

    if (numTosses <= 0) {
        cout << "Invalid number of tosses. Please enter a positive integer." << endl;
        return 1; // Exit with an error code
    }

    cout << "Coin Toss Results:" << endl;

    for (int i = 0; i < numTosses; i++) {
        cout << "Toss " << i + 1 << ": ";
        coinToss();
    }

    return 0;
}
