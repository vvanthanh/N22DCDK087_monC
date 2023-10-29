#include <iostream>
using namespace std;

// Function to get the number of accidents in a region
int getNumAccidents(const string& regionName) {
    int accidents;
    
    do {
        cout << "Enter the number of accidents reported in " << regionName << ": ";
        cin >> accidents;
        
        if (accidents < 0) {
            cout << "Please enter a non-negative number of accidents." << endl;
        }
    } while (accidents < 0);
    
    return accidents;
}

// Function to find the region with the lowest accidents
void findLowest(int& north, int& south, int& east, int& west, int& central) {
    int regions[] = {north, south, east, west, central};
    int lowestAccidents = regions[0];
    string regionNames[] = {"North", "South", "East", "West", "Central"};
    string regionWithLowest = regionNames[0];

    for (int i = 1; i < 5; i++) {
        if (regions[i] < lowestAccidents) {
            lowestAccidents = regions[i];
            regionWithLowest = regionNames[i];
        }
    }

    cout << "The region with the fewest accidents is " << regionWithLowest
         << " with " << lowestAccidents << " accidents." << endl;
}

int main() {
    int north, south, east, west, central;
    
    // Get the number of accidents in each region
    north = getNumAccidents("North");
    south = getNumAccidents("South");
    east = getNumAccidents("East");
    west = getNumAccidents("West");
    central = getNumAccidents("Central");
    
    // Find and display the region with the lowest accidents
    findLowest(north, south, east, west, central);
    
    return 0;
}
