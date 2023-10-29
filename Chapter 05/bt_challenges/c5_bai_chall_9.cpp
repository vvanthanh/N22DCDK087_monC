#include <iostream>
using namespace std;

int main() {
    int numFloors, totalRooms = 0, totalOccupied = 0;

    // Ask the user for the number of floors, validating the input
    do {
        cout << "Enter the number of floors in the hotel (must be at least 1): ";
        cin >> numFloors;
    } while (numFloors < 1);

    // Loop through each floor
    for (int floor = 1; floor <= numFloors; floor++) {
        // Skip the 13th floor
        if (floor == 13)
            continue;

        int numRooms, numOccupied;

        // Ask for the number of rooms and the number of occupied rooms on this floor
        do {
            cout << "Enter the number of rooms on floor " << floor << " (must be at least 10): ";
            cin >> numRooms;
        } while (numRooms < 10);

        cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        cin >> numOccupied;

        // Update the total counts
        totalRooms += numRooms;
        totalOccupied += numOccupied;
    }

    // Calculate the occupancy rate
    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100.0;

    // Display the results
    cout << "Total number of rooms in the hotel: " << totalRooms << endl;
    cout << "Total number of occupied rooms: " << totalOccupied << endl;
    cout << "Total number of unoccupied rooms: " << (totalRooms - totalOccupied) << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}
