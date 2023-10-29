#include <iostream>

int main() {
    double ts = 8.6; // Total sales in million dollars
    double ec = 0.58; // 58 percent as a decimal

    double es = ts * ec;

    std::cout << "The East Coast division is predicted to generate $" << es << " million in sales this year." << std::endl;

    return 0;
}
