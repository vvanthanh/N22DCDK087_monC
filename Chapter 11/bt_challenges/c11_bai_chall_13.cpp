#include <iostream>
#include <iomanip>
using namespace std;

struct Drink {
    string name;
    double cost;
    int quantity;
};

int main() {
    const int NUM_DRINKS = 5;
    double totalEarnings = 0.0;

    Drink drinks[NUM_DRINKS] = {
        {"Cola", 0.75, 20},
        {"Root Beer", 0.75, 20},
        {"Lemon-Lime", 0.75, 20},
        {"Grape Soda", 0.80, 20},
        {"Cream Soda", 0.80, 20}
    };

    while (true) {
        cout << "Available Drinks:\n";
        for (int i = 0; i < NUM_DRINKS; i++) {
            cout << i + 1 << ". " << drinks[i].name << " - $" << fixed << setprecision(2) << drinks[i].cost;
            if (drinks[i].quantity <= 0) {
                cout << " (Sold Out)";
            }
            cout << endl;
        }

        int choice;
        cout << "Enter the number of the drink you want (0 to quit): ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice < 1 || choice > NUM_DRINKS) {
            cout << "Invalid selection. Please try again." << endl;
            continue;
        }

        int quantity;
        cout << "Enter the amount of money you want to insert (in cents, e.g., 75 cents for $0.75): ";
        cin >> quantity;

        if (quantity <= 0 || quantity > 100) {
            cout << "Invalid amount. Please insert between 1 and 100 cents." << endl;
            continue;
        }

        if (quantity < drinks[choice - 1].cost * 100) {
            cout << "Not enough money inserted. Please insert more money." << endl;
        } else if (drinks[choice - 1].quantity <= 0) {
            cout << "Sorry, " << drinks[choice - 1].name << " is sold out." << endl;
        } else {
            double change = (quantity - drinks[choice - 1].cost * 100) / 100.0;
            totalEarnings += drinks[choice - 1].cost;
            drinks[choice - 1].quantity--;
            cout << "Enjoy your " << drinks[choice - 1].name << "!\n";
            cout << "Change: $" << fixed << setprecision(2) << change << endl;
        }
    }

    cout << "Total earnings: $" << fixed << setprecision(2) << totalEarnings << endl;
    return 0;
}
