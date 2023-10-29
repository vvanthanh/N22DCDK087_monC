#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
    int partNum;        // Part number
    string description; // Item description
    int onHand;         // Units on hand
    double price;       // Unit price
};

// Function Prototypes
void getItem(InventoryItem&);  // Function to get item details (passed by reference)
void showItem(InventoryItem);  // Function to display item details (passed by value)

int main()
{
    InventoryItem part; // Create an instance of the InventoryItem structure

    getItem(part);      // Get item details from the user
    showItem(part);     // Display the item's details
    return 0;
}

// Function to get item details from the user and store them in the structure
void getItem(InventoryItem &p)
{
    // Get the part number.
    cout << "Enter the part number: ";
    cin >> p.partNum;

    // Get the part description.
    cout << "Enter the part description: ";
    cin.ignore(); // Ignore the remaining newline character
    getline(cin, p.description);

    // Get the quantity on hand.
    cout << "Enter the quantity on hand: ";
    cin >> p.onHand;

    // Get the unit price.
    cout << "Enter the unit price: ";
    cin >> p.price;
}

// Function to display the item's details
void showItem(InventoryItem p)
{
    cout << fixed << showpoint << setprecision(2);
    cout << "Part Number: " << p.partNum << endl;
    cout << "Description: " << p.description << endl;
    cout << "Units On Hand: " << p.onHand << endl;
    cout << "Price: $" << p.price << endl;
}
