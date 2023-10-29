#include <iostream>
#include <string>

using namespace std;

const int NUM_PLAYERS = 12;

struct SoccerPlayer {
    string name;
    int number;
    int pointsScored;
};

int main() {
    SoccerPlayer players[NUM_PLAYERS];
    int totalPoints = 0;
    int maxPoints = 0;
    string maxPlayerName;

    cout << "Enter information for 12 soccer players:" << endl;

    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << "Player " << (i + 1) << ":" << endl;

        cout << "Enter player's name: ";
        cin >> players[i].name;

        do {
            cout << "Enter player's number: ";
            cin >> players[i].number;
            if (players[i].number < 0) {
                cout << "Player's number cannot be negative. Please enter a non-negative number." << endl;
            }
        } while (players[i].number < 0);

        do {
            cout << "Enter points scored by the player: ";
            cin >> players[i].pointsScored;
            if (players[i].pointsScored < 0) {
                cout << "Points scored cannot be negative. Please enter a non-negative value." << endl;
            }
        } while (players[i].pointsScored < 0);

        totalPoints += players[i].pointsScored;

        if (players[i].pointsScored > maxPoints) {
            maxPoints = players[i].pointsScored;
            maxPlayerName = players[i].name;
        }
    }

    cout << "\nSoccer Player Data:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Player Number   Player Name        Points Scored" << endl;
    cout << "-----------------------------------------------------" << endl;

    for (int i = 0; i < NUM_PLAYERS; i++) {
        cout << players[i].number << "\t\t" << players[i].name << "\t\t" << players[i].pointsScored << endl;
    }

    cout << "-----------------------------------------------------" << endl;
    cout << "Total Points Scored by the Team: " << totalPoints << endl;
    cout << "Player with the Most Points: " << maxPlayerName << " (" << maxPoints << " points)" << endl;

    return 0;
}
