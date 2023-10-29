#include <iostream>
#include <cstdlib> // For rand() and srand() functions
#include <ctime>   // For time() function

using namespace std;

class Die {
public:
    Die() {
        // Initialize the random number generator with the current time
        srand(static_cast<unsigned>(time(0)));
    }

    int roll() {
        return (rand() % 6) + 1; // Simulate rolling a six-sided die
    }
};

int main() {
    Die die;
    int fishingPoints = 0;

    cout << "Welcome to the Fishing Game!" << endl;

    do {
        cout << "Do you want to fish for an item? (y/n): ";
        char choice;
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            int item = die.roll();

            cout << "You caught item " << item << ": ";

            switch (item) {
                case 1:
                    cout << "a huge fish (5 points)" << endl;
                    fishingPoints += 5;
                    break;
                case 2:
                    cout << "an old shoe (1 point)" << endl;
                    fishingPoints += 1;
                    break;
                case 3:
                    cout << "a little fish (3 points)" << endl;
                    fishingPoints += 3;
                    break;
                // Add more cases for other items and their points here
                default:
                    cout << "something unknown (0 points)" << endl;
            }
        } else {
            cout << "You chose to stop fishing." << endl;
            break;
        }
    } while (true);

    cout << "Total fishing points: " << fishingPoints << endl;

    if (fishingPoints >= 10) {
        cout << "Congratulations! You're a great fisher!" << endl;
    } else if (fishingPoints >= 5) {
        cout << "Not bad! You're an average fisher." << endl;
    } else {
        cout << "Better luck next time. Keep practicing!" << endl;
    }

    return 0;
}
