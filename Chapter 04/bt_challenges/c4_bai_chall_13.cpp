#include <iostream>

int main() {
    int numberOfBooks;
    int points = 0;

    // Ask the user to enter the number of books purchased.
    std::cout << "Enter the number of books purchased this month: ";
    std::cin >> numberOfBooks;

    // Calculate the points based on the number of books purchased.
    if (numberOfBooks == 0) {
        points = 0;
    } else if (numberOfBooks == 1) {
        points = 5;
    } else if (numberOfBooks == 2) {
        points = 15;
    } else if (numberOfBooks == 3) {
        points = 30;
    } else if (numberOfBooks >= 4) {
        points = 60;
    }

    // Display the number of points awarded.
    std::cout << "You have earned " << points << " points.\n";

    return 0;
}
