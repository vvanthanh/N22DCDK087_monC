#include <iostream>

using namespace std;

class Population {
private:
    int population;
    int numBirths;
    int numDeaths;

public:
    Population(int pop, int births, int deaths) {
        setPopulation(pop);
        setBirths(births);
        setDeaths(deaths);
    }

    void setPopulation(int pop) {
        if (pop >= 1) {
            population = pop;
        } else {
            cout << "Invalid population figure. Population must be at least 1." << endl;
            exit(1);
        }
    }

    void setBirths(int births) {
        if (births >= 0) {
            numBirths = births;
        } else {
            cout << "Invalid number of births. Births cannot be negative." << endl;
            exit(1);
        }
    }

    void setDeaths(int deaths) {
        if (deaths >= 0) {
            numDeaths = deaths;
        } else {
            cout << "Invalid number of deaths. Deaths cannot be negative." << endl;
            exit(1);
        }
    }

    double getBirthRate() {
        return static_cast<double>(numBirths) / population;
    }

    double getDeathRate() {
        return static_cast<double>(numDeaths) / population;
    }
};

int main() {
    int population, births, deaths;

    cout << "Enter the population: ";
    cin >> population;

    cout << "Enter the number of births: ";
    cin >> births;

    cout << "Enter the number of deaths: ";
    cin >> deaths;

    Population popData(population, births, deaths);

    cout << "Birth Rate: " << popData.getBirthRate() << endl;
    cout << "Death Rate: " << popData.getDeathRate() << endl;

    return 0;
}
