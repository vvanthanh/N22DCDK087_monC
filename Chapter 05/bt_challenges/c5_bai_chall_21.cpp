#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int userGuess;
    int numberOfGuesses = 0;

    cout << "Welcome to the Number Guessing Game!" << endl;

    do {
        cout << "Guess the number (between 1 and 100): ";
        cin >> userGuess;

        numberOfGuesses++;

        if (userGuess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (userGuess > randomNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << randomNumber << " in " << numberOfGuesses << " guesses!" << endl;
        }

    } while (userGuess != randomNumber);

    return 0;
}
