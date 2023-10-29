#include <iostream>

using namespace std;

int main() {
    // Constants
    const double gallonsOfGasoline = 15.0;
    const double milesDriven = 375.0;

    // Calculate MPG
    double mpg = milesDriven / gallonsOfGasoline;

    // Display the result
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}
