#include <iostream>
using namespace std;

int main() {
    // Constants for the ingredient measurements
    const double SUGAR_PER_COOKIE = 1.5 / 48;
    const double BUTTER_PER_COOKIE = 1.0 / 48;
    const double FLOUR_PER_COOKIE = 2.75 / 48;

    // Variables to store user input and ingredient amounts
    int numCookies;
    double sugarAmount, butterAmount, flourAmount;

    // Get the number of cookies the user wants to make
    cout << "Enter the number of cookies you want to make: ";
    cin >> numCookies;

    // Calculate the amount of each ingredient
    sugarAmount = SUGAR_PER_COOKIE * numCookies;
    butterAmount = BUTTER_PER_COOKIE * numCookies;
    flourAmount = FLOUR_PER_COOKIE * numCookies;

    // Display the ingredient amounts
    cout << "For " << numCookies << " cookies, you will need:" << endl;
    cout << "Sugar: " << sugarAmount << " cups" << endl;
    cout << "Butter: " << butterAmount << " cups" << endl;
    cout << "Flour: " << flourAmount << " cups" << endl;

    return 0;
}
