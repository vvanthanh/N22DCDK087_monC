#include <iostream>

int main() {
    // Constants
    const double widgetWeight = 12.5;

    // Variables
    double palletWeight, totalWeight;
    int numWidgets;

    // Input
    std::cout << "Enter the weight of the pallet by itself (in pounds): ";
    std::cin >> palletWeight;

    std::cout << "Enter the total weight of the pallet with widgets (in pounds): ";
    std::cin >> totalWeight;

    // Calculate the number of widgets
    numWidgets = static_cast<int>((totalWeight - palletWeight) / widgetWeight);

    // Display the result
    std::cout << "The number of widgets stacked on the pallet is: " << numWidgets << std::endl;

    return 0;
}
