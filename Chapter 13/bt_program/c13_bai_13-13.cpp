#include <iostream>
#include <iomanip>
#include "InventoryItem.h"

int main()
{
    // Create an InventoryItem object and call
    // the default constructor.
    InventoryItem item1;
    item1.setDescription("Hammer"); // Set the description
    item1.setCost(6.95); // Set the cost
    item1.setUnits(12); // Set the units

    // Create an InventoryItem object and call
    // constructor #2.
    InventoryItem item2("Pliers");

    // Create an InventoryItem object and call
    // constructor #3.
    InventoryItem item3("Wrench", 8.75, 20);

    std::cout << "The following items are in inventory:\n";
    std::cout << std::setprecision(2) << std::fixed << std::showpoint;

    // Display the data for item 1.
    std::cout << "Description: " << item1.getDescription() << std::endl;
    std::cout << "Cost: $" << item1.getCost() << std::endl;
    std::cout << "Units on Hand: " << item1.getUnits() << std::endl << std::endl;

    // Display the data for item 2.
    std::cout << "Description: " << item2.getDescription() << std::endl;
    std::cout << "Cost: $" << item2.getCost() << std::endl;
    std::cout << "Units on Hand: " << item2.getUnits() << std::endl << std::endl;

    // Display the data for item 3.
    std::cout << "Description: " << item3.getDescription() << std::endl;
    std::cout << "Cost: $" << item3.getCost() << std::endl;
    std::cout << "Units on Hand: " << item3.getUnits() << std::endl;

    return 0;
}
