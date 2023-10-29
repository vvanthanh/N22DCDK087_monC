#include <iostream>

using namespace std;

// Function prototypes
double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main() {
    double length, width, area;

    length = getLength();
    width = getWidth();
    area = getArea(length, width);
    displayData(length, width, area);

    return 0;
}

// Function to get the length of the rectangle from the user
double getLength() {
    double length;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    return length;
}

// Function to get the width of the rectangle from the user
double getWidth() {
    double width;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    return width;
}

// Function to calculate the area of the rectangle
double getArea(double length, double width) {
    return length * width;
}

// Function to display the rectangle's data
void displayData(double length, double width, double area) {
    cout << "Rectangle Length: " << length << " units" << endl;
    cout << "Rectangle Width: " << width << " units" << endl;
    cout << "Rectangle Area: " << area << " square units" << endl;
}
