#include <iostream>
#include <iomanip>
using namespace std;

int getTotalDays();
void getTimes(int &depHr, int &arrHr);
double getAirfare();
double getCarRental();
double getMilesDriven();
double getParkingFees(int days);
double getTaxiFees(int days);
double getConfFees();
double getHotelExpenses(int days);
double getMealsExp(int depHr, int arrHr, int days);
void displayResults(double totalExp, double totalAllowedExp);

int main() {
    int days, depHr, arrHr;
    double airfare, carRental, milesDriven, parkingFees, taxiFees, confFees, hotelExp, mealsExp;

    days = getTotalDays();
    getTimes(depHr, arrHr);
    airfare = getAirfare();
    carRental = getCarRental();
    milesDriven = getMilesDriven();
    parkingFees = getParkingFees(days);
    taxiFees = getTaxiFees(days);
    confFees = getConfFees();
    hotelExp = getHotelExpenses(days);
    mealsExp = getMealsExp(depHr, arrHr, days);

    double totalExp = airfare + carRental + (milesDriven * 0.27) + parkingFees + taxiFees + confFees + hotelExp + mealsExp;

    double totalAllowedExp = days * 90 + (days - 1) * 10;

    displayResults(totalExp, totalAllowedExp);

    return 0;
}

int getTotalDays() {
    int days;
    do {
        cout << "Enter total days on the trip: ";
        cin >> days;
    } while (days < 1);
    return days;
}

void getTimes(int &depHr, int &arrHr) {
    do {
        cout << "Enter departure time (0-23): ";
        cin >> depHr;
    } while (depHr < 0 || depHr > 23);

    do {
        cout << "Enter arrival time (0-23): ";
        cin >> arrHr;
    } while (arrHr < 0 || arrHr > 23);
}

double getAirfare() {
    double airfare;
    cout << "Enter airfare: $";
    cin >> airfare;
    return airfare;
}

double getCarRental() {
    double carRental;
    cout << "Enter car rental cost: $";
    cin >> carRental;
    return carRental;
}

double getMilesDriven() {
    double milesDriven;
    do {
        cout << "Enter miles driven: ";
        cin >> milesDriven;
    } while (milesDriven < 0);
    return milesDriven;
}

double getParkingFees(int days) {
    double parkingFees = 0;
    for (int day = 1; day <= days; day++) {
        double dailyParking;
        do {
            cout << "Enter parking fees for day " << day << " (up to $6 allowed): $";
            cin >> dailyParking;
        } while (dailyParking < 0 || dailyParking > 6);
        parkingFees += dailyParking;
    }
    return parkingFees;
}

double getTaxiFees(int days) {
    double taxiFees = 0;
    for (int day = 1; day <= days; day++) {
        double dailyTaxi;
        do {
            cout << "Enter taxi fees for day " << day << " (up to $10 allowed): $";
            cin >> dailyTaxi;
        } while (dailyTaxi < 0 || dailyTaxi > 10);
        taxiFees += dailyTaxi;
    }
    return taxiFees;
}

double getConfFees() {
    double confFees;
    cout << "Enter conference/seminar fees: $";
    cin >> confFees;
    return confFees;
}

double getHotelExpenses(int days) {
    double hotelExp = 0;
    for (int day = 1; day <= days; day++) {
        double dailyHotel;
        do {
            cout << "Enter hotel expenses for day " << day << " (up to $90 allowed): $";
            cin >> dailyHotel;
        } while (dailyHotel < 0 || dailyHotel > 90);
        hotelExp += dailyHotel;
    }
    return hotelExp;
}

double getMealsExp(int depHr, int arrHr, int days) {
    double mealsExp = 0;
    if (depHr < 7)
        mealsExp += 9;
    if (depHr < 12)
        mealsExp += 12;
    if (depHr < 18)
        mealsExp += 16;

    if (arrHr > 8)
        mealsExp += 9;
    if (arrHr > 13)
        mealsExp += 12;
    if (arrHr > 19)
        mealsExp += 16;

    return mealsExp * days;
}

void displayResults(double totalExp, double totalAllowedExp) {
    double excess = totalExp - totalAllowedExp;
    double saved = (excess > 0) ? 0 : totalAllowedExp - totalExp;

    cout << fixed << setprecision(2);
    cout << "Total expenses: $" << totalExp << endl;
    cout << "Total allowed expenses: $" << totalAllowedExp << endl;

    if (excess > 0) {
        cout << "Excess to reimburse: $" << excess << endl;
    } else {
        cout << "Amount saved: $" << saved << endl;
    }
}
