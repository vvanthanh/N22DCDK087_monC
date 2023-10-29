#include <iostream>
#include <fstream>
#include <string>
#include <ctime>

using namespace std;

struct InventoryItem {
    string description;
    int quantity;
    double wholesaleCost;
    double retailCost;
    string dateAdded;
};

void displayMenu() {
    cout << "Inventory Management System Menu" << endl;
    cout << "1. Add new record" << endl;
    cout << "2. Display a record" << endl;
    cout << "3. Change a record" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
}

bool isValidDate(const string& date) {
    // You can implement date validation logic here
    // Return true if the date is reasonable, else false
    return true;
}

int main() {
    const string filename = "inventory.txt";
    ifstream inFile;
    ofstream outFile;
    InventoryItem item;
    int choice;

    while (true) {
        displayMenu();
        cin >> choice;

        if (choice == 1) {
            // Add new record
            cout << "Enter item description: ";
            cin.ignore();
            getline(cin, item.description);

            cout << "Enter quantity on hand: ";
            cin >> item.quantity;
            while (item.quantity < 0) {
                cout << "Quantity cannot be negative. Enter a valid quantity: ";
                cin >> item.quantity;
            }

            cout << "Enter wholesale cost: $";
            cin >> item.wholesaleCost;
            while (item.wholesaleCost < 0) {
                cout << "Wholesale cost cannot be negative. Enter a valid cost: $";
                cin >> item.wholesaleCost;
            }

            cout << "Enter retail cost: $";
            cin >> item.retailCost;
            while (item.retailCost < 0) {
                cout << "Retail cost cannot be negative. Enter a valid cost: $";
                cin >> item.retailCost;
            }

            cout << "Enter date added to inventory (YYYY-MM-DD): ";
            cin.ignore();
            getline(cin, item.dateAdded);
            while (!isValidDate(item.dateAdded)) {
                cout << "Invalid date. Enter a valid date (YYYY-MM-DD): ";
                getline(cin, item.dateAdded);
            }

            outFile.open(filename, ios::app);
            outFile << item.description << " " << item.quantity << " " << item.wholesaleCost << " "
                     << item.retailCost << " " << item.dateAdded << endl;
            outFile.close();

            cout << "Record added successfully." << endl;
        } else if (choice == 2) {
            // Display a record
            inFile.open(filename);
            if (!inFile) {
                cout << "File not found or unable to open." << endl;
            } else {
                cout << "Enter item description to display: ";
                cin.ignore();
                getline(cin, item.description);
                bool found = false;

                while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
                    if (item.description == item.description) {
                        cout << "Item Description: " << item.description << endl;
                        cout << "Quantity on Hand: " << item.quantity << endl;
                        cout << "Wholesale Cost: $" << item.wholesaleCost << endl;
                        cout << "Retail Cost: $" << item.retailCost << endl;
                        cout << "Date Added to Inventory: " << item.dateAdded << endl;
                        found = true;
                        break;
                    }
                }

                if (!found) {
                    cout << "Item not found in inventory." << endl;
                }

                inFile.close();
            }
        } else if (choice == 3) {
            // Change a record
            inFile.open(filename);
            if (!inFile) {
                cout << "File not found or unable to open." << endl;
            } else {
                cout << "Enter item description to change: ";
                cin.ignore();
                getline(cin, item.description);
                bool found = false;
                string tempFile = "temp_inventory.txt";

                outFile.open(tempFile);
                while (inFile >> item.description >> item.quantity >> item.wholesaleCost >> item.retailCost >> item.dateAdded) {
                    if (item.description == item.description) {
                        cout << "Enter new item description: ";
                        getline(cin, item.description);

                        cout << "Enter new quantity on hand: ";
                        cin >> item.quantity;
                        while (item.quantity < 0) {
                            cout << "Quantity cannot be negative. Enter a valid quantity: ";
                            cin >> item.quantity;
                        }

                        cout << "Enter new wholesale cost: $";
                        cin >> item.wholesaleCost;
                        while (item.wholesaleCost < 0) {
                            cout << "Wholesale cost cannot be negative. Enter a valid cost: $";
                            cin >> item.wholesaleCost;
                        }

                        cout << "Enter new retail cost: $";
                        cin >> item.retailCost;
                        while (item.retailCost < 0) {
                            cout << "Retail cost cannot be negative. Enter a valid cost: $";
                            cin >> item.retailCost;
                        }

                        cout << "Enter new date added to inventory (YYYY-MM-DD): ";
                        cin.ignore();
                        getline(cin, item.dateAdded);
                        while (!isValidDate(item.dateAdded)) {
                            cout << "Invalid date. Enter a valid date (YYYY-MM-DD): ";
                            getline(cin, item.dateAdded);
                        }

                        outFile << item.description << " " << item.quantity << " " << item.wholesaleCost << " "
                                 << item.retailCost << " " << item.dateAdded << endl;
                        cout << "Record changed successfully." << endl;
                        found = true;
                    } else {
                        outFile << item.description << " " << item.quantity << " " << item.wholesaleCost << " "
                                 << item.retailCost << " " << item.dateAdded << endl;
                    }
                }

                if (!found) {
                    cout << "Item not found in inventory." << endl;
                }

                inFile.close();
                outFile.close();

                // Rename the temp file to the original filename
                remove(filename.c_str());
                rename(tempFile.c_str(), filename.c_str());
            }
        } else if (choice == 4) {
            // Exit the program
            cout << "Exiting program." << endl;
            break;
        } else {
            cout << "Invalid choice. Please enter a valid option (1-4)." << endl;
        }
    }

    return 0;
}


