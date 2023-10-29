#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncrease;
    int days;

    // Input validation for starting population
    do {
        cout << "Enter the starting number of organisms (greater than or equal to 2): ";
        cin >> startingPopulation;
    } while (startingPopulation < 2);

    // Input validation for daily population increase
    do {
        cout << "Enter the average daily population increase (as a percentage, non-negative): ";
        cin >> dailyIncrease;
    } while (dailyIncrease < 0);

    // Input validation for the number of days
    do {
        cout << "Enter the number of days they will multiply (greater than or equal to 1): ";
        cin >> days;
    } while (days < 1);

    // Calculate and display the population for each day
    cout << "Day 1: " << startingPopulation << " organisms" << endl;
    for (int day = 2; day <= days; day++) {
        startingPopulation += (startingPopulation * dailyIncrease / 100);
        cout << "Day " << day << ": " << startingPopulation << " organisms" << endl;
    }

    return 0;
}
