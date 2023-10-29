#include <iostream>
using namespace std;

int main() {
    double replacementCost;
    
    // Ask the user to enter the replacement cost of the building
    cout << "Enter the replacement cost of the building: $";
    cin >> replacementCost;

    // Calculate the minimum amount of insurance needed (80% of replacement cost)
    double minimumInsurance = 0.8 * replacementCost;

    // Display the minimum insurance amount
    cout << "You should buy at least $" << minimumInsurance << " in insurance for the property." << endl;

    return 0;
}
