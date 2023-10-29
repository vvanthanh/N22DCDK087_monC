#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle {
private:
    double length;
    double width;

public:
    void setLength(double len) {
        length = len;
    }

    void setWidth(double wid) {
        width = wid;
    }

    double getArea() {
        return length * width;
    }
};

// Function main
int main() {
    double number; // To hold a number
    double totalArea; // The total area
    Rectangle kitchen; // To hold kitchen dimensions
    Rectangle bedroom; // To hold bedroom dimensions
    Rectangle den; // To hold den dimensions

    // Get the kitchen dimensions.
    cout << "What is the kitchen's length? ";
    cin >> number; // Get the length
    kitchen.setLength(number); // Store in the kitchen object
    cout << "What is the kitchen's width? ";
    cin >> number; // Get the width
    kitchen.setWidth(number); // Store in the kitchen object

    // Get the
