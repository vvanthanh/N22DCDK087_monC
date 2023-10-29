#include <iostream>
using namespace std;

int main() {
    const double RATE_2KG_OR_LESS = 1.10;
    const double RATE_OVER_2KG_6KG = 2.20;
    const double RATE_OVER_6KG_10KG = 3.70;
    const double RATE_OVER_10KG_20KG = 4.80;

    const int MIN_DISTANCE = 10;
    const int MAX_DISTANCE = 3000;
    const double MAX_WEIGHT = 20.0;

    double weight, distance, charges;

    // Get the weight of the package from the user.
    cout << "Enter the weight of the package in kilograms: ";
    cin >> weight;

    // Validate the weight input.
    if (weight <= 0 || weight > MAX_WEIGHT) {
        cout << "Invalid weight. Weight must be between 0 and 20 kg." << endl;
        return 1;  // Exit program with an error code.
    }

    // Get the distance to be shipped from the user.
    cout << "Enter the distance to be shipped in miles: ";
    cin >> distance;

    // Validate the distance input.
    if (distance < MIN_DISTANCE || distance > MAX_DISTANCE) {
        cout << "Invalid distance. Distance must be between 10 and 3000 miles." << endl;
        return 1;  // Exit program with an error code.
    }

    // Calculate the charges based on weight and distance.
    if (weight <= 2) {
        charges = (distance / 500) * RATE_2KG_OR_LESS;
    } else if (weight <= 6) {
        charges = (distance / 500) * RATE_OVER_2KG_6KG;
    } else if (weight <= 10) {
        charges = (distance / 500) * RATE_OVER_6KG_10KG;
    } else {
        charges = (distance / 500) * RATE_OVER_10KG_20KG;
    }

    // Display the calculated charges.
    cout << "The shipping charges for the package are: $" << charges << endl;

    return 0;  // Exit program with a success code.
}
