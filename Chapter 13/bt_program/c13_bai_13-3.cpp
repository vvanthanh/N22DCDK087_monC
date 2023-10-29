#include <iostream>
using namespace std;

// Rectangle class declaration.
class Rectangle {
    private:
        double length;
        double width;

    public:
        // Constructor
        Rectangle() {
            length = 0.0;
            width = 0.0;
        }

        // Destructor
        ~Rectangle() {}

        // Setter functions
        void setLength(double len) {
            length = len;
        }

        void setWidth(double wid) {
            width = wid;
        }

        // Getter functions
        double getLength() {
            return length;
        }

        double getWidth() {
            return width;
        }

        // Calculate and return the area of the rectangle
        double getArea() {
            return length * width;
        }
};

//*****************************************************
// Function main
//*****************************************************
int main() {
    double number; // To hold a number
    double totalArea; // The total area
    Rectangle *kitchen = nullptr; // To point to kitchen dimensions
    Rectangle *bedroom = nullptr; // To point to bedroom dimensions
    Rectangle *den = nullptr; // To point to den dimensions

    // Dynamically allocate the objects.
    kitchen = new Rectangle;
    bedroom = new Rectangle;
    den = new Rectangle;

   
