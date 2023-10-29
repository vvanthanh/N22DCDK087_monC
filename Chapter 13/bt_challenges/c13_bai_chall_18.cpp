#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll a six-sided die
int rollDie() {
    return (rand() % 6) + 1;
}

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(nullptr)));

    int playerTotal = 0;
    int computerTotal = 0;

    char rollAgain;
    do {
        // Roll the computer's dice
        int computerDie1 = rollDie();
        int computerDie2 = rollDie();
        computerTotal += computerDie1 + computerDie2;

        // Ask the user if they want to roll
        cout << "Do you want to roll the dice (y/n)? ";
        cin >> rollAgain;

        if (rollAgain == 'y' || rollAgain == 'Y') {
            // Roll the user's dice
            int userDie1 = rollDie();
            int userDie2 = rollDie();
            playerTotal += userDie1 + userDie2;

            cout << "You rolled " << userDie1 << " and " << userDie2 << ". Your total is " << playerTotal << endl;
        }

    } while ((rollAgain == 'y' || rollAgain == 'Y') && playerTotal <= 21);

    // Reveal the computer's total
    cout << "Computer's total is " << computerTotal << endl;

    // Determine the winner
    if (playerTotal > 21 || (playerTotal < computerTotal && computerTotal <= 21))
        cout << "Computer wins!" << endl;
    else if (computerTotal > 21 || (playerTotal > computerTotal && playerTotal <= 21))
        cout << "You win!" << endl;
    else
        cout << "It's a tie!" << endl;

    return 0;
}


