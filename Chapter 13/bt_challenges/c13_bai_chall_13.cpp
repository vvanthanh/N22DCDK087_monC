#include <iostream>
#include <cstdlib> // For rand() function
#include <ctime>   // For time() function

using namespace std;

class Coin {
public:
    Coin();
    void toss();
    bool isHeads() const;

private:
    bool heads;
};

Coin::Coin() {
    srand(time(0)); // Seed the random number generator with the current time
    toss();        // Toss the coin when it's created
}

void Coin::toss() {
    heads = (rand() % 2 == 0);
}

bool Coin::isHeads() const {
    return heads;
}

int main() {
    Coin quarter, dime, nickel;
    double balance = 0.0;

    while (balance < 1.0) {
        quarter.toss();
        dime.toss();
        nickel.toss();

        if (quarter.isHeads()) {
            cout << "Quarter: Heads! +$0.25" << endl;
            balance += 0.25;
        } else {
            cout << "Quarter: Tails! +$0.00" << endl;
        }

        if (dime.isHeads()) {
            cout << "Dime: Heads! +$0.10" << endl;
            balance += 0.10;
        } else {
            cout << "Dime: Tails! +$0.00" << endl;
        }

        if (nickel.isHeads()) {
            cout << "Nickel: Heads! +$0.05" << endl;
            balance += 0.05;
        } else {
            cout << "Nickel: Tails! +$0.00" << endl;
        }

        cout << "Current Balance: $" << balance << endl;
    }

    if (balance == 1.0) {
        cout << "Congratulations! You win the game!" << endl;
    } else {
        cout << "Sorry, you lost the game. Balance exceeded $1.00." << endl;
    }

    return 0;
}
