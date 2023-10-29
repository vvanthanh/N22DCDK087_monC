#include <iostream>
using namespace std;

int main() {
    int startingPopulation, numYears;
    double birthRate, deathRate, arrivals, departures;

    // Input validation for starting population size
    do {
        cout << "Enter the starting population size (greater than or equal to 2): ";
        cin >> startingPopulation;
    } while (startingPopulation < 2);

    // Input validation for birth rate, death rate, arrivals, and departures
    do {
        cout << "Enter the annual birth rate (positive): ";
        cin >> birthRate;
    } while (birthRate < 0);

    do {
        cout << "Enter the annual death rate (positive): ";
        cin >> deathRate;
    } while (deathRate < 0);

    do {
        cout << "Enter the number of individuals moving in each year (non-negative): ";
        cin >> arrivals;
    } while (arrivals < 0);

    do {
        cout << "Enter the number of individuals moving out each year (non-negative): ";
        cin >> departures;
    } while (departures < 0);

    // Input for the number of years for population projection
    cout << "Enter the number of years for population projection: ";
    cin >> numYears;

    // Project the population for numYears
    for (int year = 1; year <= numYears; year++) {
        startingPopulation = startingPopulation + (birthRate * startingPopulation) - (deathRate * startingPopulation) + arrivals - departures;
    }

    // Display the projected population
    cout << "The projected population after " << numYears << " years is: " << startingPopulation << endl;

    return 0;
}
