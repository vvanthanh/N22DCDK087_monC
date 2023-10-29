#include <iostream>
#include <cmath>

using namespace std;

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    // Default Constructor
    Circle() : radius(0.0) {}

    // Constructor with radius argument
    Circle(double r) : radius(r) {}

    // Mutator function for radius
    void setRadius(double r) {
        radius = r;
    }

    // Accessor function for radius
    double getRadius() {
        return radius;
    }

    // Calculate and return the area of the circle
    double getArea() {
        return pi * radius * radius;
    }

    // Calculate and return the diameter of the circle
    double getDiameter() {
        return radius * 2;
    }

    // Calculate and return the circumference of the circle
    double getCircumference() {
        return 2 * pi * radius;
    }
};

int main() {
    double userRadius;

    // Ask the user for the circle's radius
    cout << "Enter the radius of the circle: ";
    cin >> userRadius;

    // Create a Circle object with the user-provided radius
    Circle myCircle(userRadius);

    // Display the circle's area, diameter, and circumference
    cout << "Circle's Area: " << myCircle.getArea() << endl;
    cout << "Circle's Diameter: " << myCircle.getDiameter() << endl;
    cout << "Circle's Circumference: " << myCircle.getCircumference() << endl;

    return 0;
}
