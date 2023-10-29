#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {
    // Open the Teams.txt file to display the list of teams.
    ifstream teamsFile("Teams.txt");
    if (!teamsFile) {
        cerr << "Error: Unable to open Teams.txt" << endl;
        return 1;
    }

    cout << "List of Major League baseball teams that won the World Series at least once:" << endl;
    string teamName;
    while (getline(teamsFile, teamName)) {
        cout << teamName << endl;
    }

    // Close the Teams.txt file.
    teamsFile.close();

    // Open the WorldSeriesWinners.txt file to read the list of World Series winners.
    ifstream winnersFile("WorldSeriesWinners.txt");
    if (!winnersFile) {
        cerr << "Error: Unable to open WorldSeriesWinners.txt" << endl;
        return 1;
    }

    vector<string> winners;
    string winner;
    while (getline(winnersFile, winner)) {
        winners.push_back(winner);
    }

    // Close the WorldSeriesWinners.txt file.
    winnersFile.close();

    // Prompt the user to enter a team name.
    cout << "\nEnter the name of a team: ";
    string userTeam;
    getline(cin, userTeam);

    // Count the number of times the user-specified team has won the World Series.
    int count = 0;
    for (const string& team : winners) {
        if (team == userTeam) {
            count++;
        }
    }

    // Display the count of World Series wins for the user-specified team.
    cout << userTeam << " won the World Series " << count << " times from 1903 to 2012." << endl;

    return 0;
}
