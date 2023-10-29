#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Structure to represent an item in the inventory
struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailPrice;
};

int main() {
    const string filename = "inventory.dat"; // Adjust the filename as needed

    ifstream inputFile(filename, ios::in | ios::binary);
    
    if (!inputFile) {
        cerr << "Error opening file " << filename << endl;
        return 1;
    }

    InventoryItem item;
    double totalWholesaleValue = 0.0;
    double totalRetailValue = 0.0;
    int totalQuantity = 0;

    cout << left << setw(20) << "Description" << setw(10) << "Quantity" << setw(15) << "Wholesale Cost" << setw(15) << "Retail Price" << endl;
    
    while (inputFile.read(reinterpret_cast<char*>(&item), sizeof(InventoryItem))) {
        cout << left << setw(20) << item.description << setw(10) << item.quantity << setw(15) << item.wholesaleCost << setw(15) << item.retailPrice << endl;
        
        totalWholesaleValue += item.wholesaleCost * item.quantity;
        totalRetailValue += item.retailPrice * item.quantity;
        totalQuantity += item.quantity;
    }
    
    inputFile.close();

    cout << "Total Wholesale Value: $" << totalWholesaleValue << endl;
    cout << "Total Retail Value: $" << totalRetailValue << endl;
    cout << "Total Quantity: " << totalQuantity << " items" << endl;

    return 0;
}
