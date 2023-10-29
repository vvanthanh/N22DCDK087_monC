#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For time

using namespace std;

class Coin {
private:
    string sideUp;

public:
    Coin() {
        // Initialize the random number generator with the current time
        srand(time(0));
        // Call toss to set the initial sideUp value
        toss();
    }

    void toss() {
        // Generate a random number (0 or 1)
        int randomNum = rand() % 2;
        // Set sideUp based on the random number
        if (randomNum == 0) {
            sideUp = "heads";
        } else {
            sideUp = "tails";
        }
    }

    string getSideUp() {
        return sideUp;
    }
};

int main() {
    Coin coin;
    int headsCount = 0;
    int tailsCount = 0;

    cout << "Initial side facing up: " << coin.getSideUp() << endl;

    for (int i = 0; i < 20; i++) {
        coin.toss();
        cout << "Toss " << (i + 1) << ": " << coin.getSideUp() << endl;
        if (coin.getSideUp() == "heads") {
            headsCount++;
        } else {
            tailsCount++;
        }
    }

    cout << "Heads count: " << headsCount << endl;
    cout << "Tails count: " << tailsCount << endl;

    return 0;
}
