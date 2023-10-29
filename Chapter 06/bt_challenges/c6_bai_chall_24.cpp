#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// Function to get the computer's choice (1 for rock, 2 for paper, 3 for scissors)
int getComputerChoice() {
    return rand() % 3 + 1;
}

// Function to get the user's choice
int getUserChoice() {
    int choice;
    cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors): ";
    cin >> choice;
    return choice;
}

// Function to determine the winner and display the result
void determineWinner(int userChoice, int computerChoice) {
    if (userChoice == computerChoice) {
        cout << "It's a tie! Play again." << endl;
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        cout << "You win! Congratulations." << endl;
    } else {
        cout << "Computer wins. Better luck next time." << endl;
    }
}

int main() {
    srand(static_cast<unsigned>(time(0)); // Seed the random number generator

    char playAgain;

    do {
        int computerChoice = getComputerChoice();
        int userChoice = getUserChoice();

        // Display the computer's choice
        cout << "Computer chose: ";
        switch (computerChoice) {
            case 1: cout << "Rock"; break;
            case 2: cout << "Paper"; break;
            case 3: cout << "Scissors"; break;
        }
        cout << endl;

        determineWinner(userChoice, computerChoice);

        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    return 0;
}
