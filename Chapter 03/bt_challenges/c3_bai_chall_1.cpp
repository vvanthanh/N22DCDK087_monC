#include <iostream>
using namespace std;

int main() {
    double gallons_of_gas, miles_driven, mileage;

    // Prompt the user to enter the number of gallons of gas the car can hold.
    cout << "Enter the number of gallons of gas the car can hold: ";
    cin >> gallons_of_gas;

    // Prompt the user to enter the number of miles the car can be driven on a full tank.
    cout << "Enter the number of miles the car can be driven on a full tank: ";
    cin >> miles_driven;

    // Calculate the gas mileage (miles per gallon).
    if (gallons_of_gas > 0) {
        mileage = miles_driven / gallons_of_gas;
        cout << "The car's gas mileage is: " << mileage << " miles per gallon." << endl;
    } else {
        cout << "Invalid input. The number of gallons must be greater than 0." << endl;
    }

    return 0;
}
