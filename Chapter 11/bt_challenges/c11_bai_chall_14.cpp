#include <iostream>
#include <string>

using namespace std;

const int NUM_BINS = 10;
const int MAX_PARTS_PER_BIN = 30;

struct InventoryBin {
    string description;
    int numParts;
};

void InitializeBins(InventoryBin bins[]) {
    bins[0] = {"Valve", 10};
    bins[1] = {"Bearing", 5};
    bins[2] = {"Bushing", 15};
    bins[3] = {"Coupling", 21};
    bins[4] = {"Flange", 7};
    bins[5] = {"Gear", 5};
    bins[6] = {"Gear Housing", 5};
    bins[7] = {"Vacuum Gripper", 25};
    bins[8] = {"Cable", 18};
    bins[9] = {"Rod", 12};
}

void DisplayBins(const InventoryBin bins[]) {
    cout << "Bin\tDescription\tParts" << endl;
    for (int i = 0; i < NUM_BINS; i++) {
        cout << i + 1 << "\t" << bins[i].description << "\t" << bins[i].numParts << endl;
    }
}

void AddParts(InventoryBin& bin, int quantity) {
    if (bin.numParts + quantity <= MAX_PARTS_PER_BIN) {
        bin.numParts += quantity;
    } else {
        cout << "Cannot add more parts. Bin is full." << endl;
    }
}

void RemoveParts(InventoryBin& bin, int quantity) {
    if (bin.numParts - quantity >= 0) {
        bin.numParts -= quantity;
    } else {
        cout << "Cannot remove more parts than available in the bin." << endl;
    }
}

int main() {
    InventoryBin bins[NUM_BINS];
    InitializeBins(bins);

    int choice;
    int binChoice;
    int quantity;

    while (true) {
        DisplayBins(bins);
        cout << "Enter the bin number (1-10) or 0 to quit: ";
        cin >> binChoice;

        if (binChoice < 0 || binChoice > NUM_BINS) {
            cout << "Invalid bin number. Please try again." << endl;
            continue;
        }

        if (binChoice == 0) {
            break; // Exit the program
        }

        cout << "1. Add parts" << endl;
        cout << "2. Remove parts" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter the quantity of parts to add: ";
            cin >> quantity;
            AddParts(bins[binChoice - 1], quantity);
        } else if (choice == 2) {
            cout << "Enter the quantity of parts to remove: ";
            cin >> quantity;
            RemoveParts(bins[binChoice - 1], quantity);
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
