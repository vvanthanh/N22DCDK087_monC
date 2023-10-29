#include <iostream>

int main() {
    double mass;
    const double gravity = 9.8;  // Acceleration due to gravity in m/s^2

    std::cout << "Enter the mass of the object in kilograms: ";
    std::cin >> mass;

    double weight = mass * gravity;

    std::cout << "The weight of the object is " << weight << " newtons." << std::endl;

    if (weight > 1000) {
        std::cout << "The object is too heavy." << std::endl;
    } else if (weight < 10) {
        std::cout << "The object is too light." << std::endl;
    }

    return 0;
}
