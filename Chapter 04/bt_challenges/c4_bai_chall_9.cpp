#include <iostream>
using namespace std;

int main() {
    int pennies, nickels, dimes, quarters;

    cout << "Welcome to the Change-Counting Game!" << endl;
    cout << "Enter the number of pennies: ";
    cin >> pennies;
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    cout << "Enter the number of quarters: ";
    cin >> quarters;

    // Calculate the total value in cents
    int total_cents = pennies + 5 * nickels + 10 * dimes + 25 * quarters;

    // Check if the total value is equal to one dollar (100 cents)
    if (total_cents == 100) {
        cout << "Congratulations! You've won the game. You made exactly one dollar!" << endl;
    } else if (total_cents < 100) {
        cout << "Sorry, the amount entered is less than one dollar. You have " << (100 - total_cents) << " cents to go." << endl;
    } else {
        cout << "Sorry, the amount entered is more than one dollar. You have " << (total_cents - 100) << " cents extra." << endl;
    }

    return 0;
}
