#include <iostream>

int main() {
    double num1, num2;

    // Ask the user to enter two numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Use the conditional operator to determine which number is smaller and larger
    double smaller = (num1 < num2) ? num1 : num2;
    double larger = (num1 > num2) ? num1 : num2;

    // Display the results
    std::cout << "The smaller number is: " << smaller << std::endl;
    std::cout << "The larger number is: " << larger << std::endl;

    return 0;
}
