#include <iostream>
#include <string>

using namespace std;

class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    // Constructor
    RetailItem(string desc, int units, double pr) {
        description = desc;
        unitsOnHand = units;
        price = pr;
    }

    // Mutator functions
    void setDescription(string desc) {
        description = desc;
    }

    void setUnitsOnHand(int units) {
        unitsOnHand = units;
    }

    void setPrice(double pr) {
        price = pr;
    }

    // Accessor functions
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    RetailItem item1("Jacket", 12, 59.95);
    RetailItem item2("Designer Jeans", 40, 34.95);
    RetailItem item3("Shirt", 20, 24.95);

    // Output the data for each RetailItem
    cout << "Item #1\nDescription: " << item1.getDescription()
         << "\nUnits On Hand: " << item1.getUnitsOnHand()
         << "\nPrice: $" << item1.getPrice() << "\n\n";

    cout << "Item #2\nDescription: " << item2.getDescription()
         << "\nUnits On Hand: " << item2.getUnitsOnHand()
         << "\nPrice: $" << item2.getPrice() << "\n\n";

    cout << "Item #3\nDescription: " << item3.getDescription()
         << "\nUnits On Hand: " << item3.getUnitsOnHand()
         << "\nPrice: $" << item3.getPrice() << "\n";

    return 0;
}
