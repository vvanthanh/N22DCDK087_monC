#include <iostream>
#include <iomanip>

int main() {
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    double usDollars;

    std::cout << "Enter the amount in U.S. dollars: $";
    std::cin >> usDollars;

    double yenAmount = usDollars * YEN_PER_DOLLAR;
    double euroAmount = usDollars * EUROS_PER_DOLLAR;

    // Format currency amounts with two decimal places
    std::cout << std::fixed << std::setprecision(2);

    std::cout << "$" << usDollars << " is equivalent to " << yenAmount << " Yen." << std::endl;
    std::cout << "$" << usDollars << " is equivalent to " << euroAmount << " Euros." << std::endl;

    return 0;
}
