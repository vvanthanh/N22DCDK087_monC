#include <iostream>
#include <iomanip>
#include <cmath> // for sin, cos, and tan functions

int main() {
    double radians, sine, cosine, tangent;

    // Ask the user for an angle in radians
    std::cout << "Enter an angle in radians: ";
    std::cin >> radians;

    // Calculate sine, cosine, and tangent
    sine = std::sin(radians);
    cosine = std::cos(radians);
    tangent = std::tan(radians);

    // Display the results with four decimal places of precision
    std::cout << "Sine: " << std::fixed << std::setprecision(4) << sine << std::endl;
    std::cout << "Cosine: " << std::fixed << std::setprecision(4) << cosine << std::endl;
    std::cout << "Tangent: " << std::fixed << std::setprecision(4) << tangent << std::endl;

    return 0;
}
