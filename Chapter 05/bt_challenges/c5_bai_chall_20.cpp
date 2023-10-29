#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNum = rand() % 100 + 1;

    int userGuess;
    bool guessedCorrectly = false;

    while (!guessedCorrectly) {
        cout << "Guess the random number (between 1 and 100): ";
        cin >> userGuess;

        if (userGuess < randomNum) {
            cout << "Too low, try again." << endl;
        }
        else if (userGuess > randomNum) {
            cout << "Too high, try again." << endl;
        }
        else {
            cout << "Congratulations! You guessed the number correctly: " << randomNum << endl;
            guessedCorrectly = true;
        }
    }

    return 0;
}
