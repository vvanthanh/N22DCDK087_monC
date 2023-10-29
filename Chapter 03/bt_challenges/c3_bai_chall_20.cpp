#include <iostream>
#include <iomanip> // for setting precision
using namespace std;

int main() {
    const double PI = 3.14159;
    const double sliceArea = 14.125;

    double diameter, radius, area;
    int numSlices;

    // Step A: Ask the user for the diameter of the pizza
    cout << "Enter the diameter of the pizza in inches: ";
    cin >> diameter;

    // Step B: Calculate the number of slices
    radius = diameter / 2;
    area = PI * radius * radius;
    numSlices = static_cast<int>(area / sliceArea); // Truncate to an integer

    // Step C: Display the number of slices
    cout << fixed << setprecision(1); // Display one decimal place
    cout << "The pizza can be divided into " << numSlices << " slices." << endl;

    return 0;
}
