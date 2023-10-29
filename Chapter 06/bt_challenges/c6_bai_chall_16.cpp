#include <iostream>

using namespace std;

// Function to calculate the population size for a year
double calculatePopulation(double previousPopulation, double birthRate, double deathRate) {
    return previousPopulation + (previousPopulation * birthRate / 100) - (previousPopulation * deathRate / 100);
}

int main() {
    double startingSize, birthRate, deathRate;
    int numberOfYears;

    // Input validation
    do {
        cout << "Enter the starting size of the population (>= 2): ";
        cin >> startingSize;
    } while (startingSize < 2);

    do {
        cout << "Enter the annual birth rate (>= 0): ";
        cin >> birthRate;
    } while (birthRate < 0);

    do {
        cout << "Enter the annual death rate (>= 0): ";
        cin >> deathRate;
    } while (deathRate < 0);

    do {
        cout << "Enter the number of years to display (>= 1): ";
        cin >> numberOfYears;
    } while (numberOfYears < 1);

    // Display the population for each year
    cout << "Year 0: Population = " << startingSize << endl;

    for (int year = 1; year <= numberOfYears; year++) {
        startingSize = calculatePopulation(startingSize, birthRate, deathRate);
        cout << "Year " << year << ": Population = " << startingSize << endl;
    }

    return 0;
}
