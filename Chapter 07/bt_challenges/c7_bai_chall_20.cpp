#include <iostream>
using namespace std;

const int NUM_ROWS = 15;
const int SEATS_PER_ROW = 30;

// Function to display the seating chart
void displaySeatingChart(char seats[NUM_ROWS][SEATS_PER_ROW]) {
    cout << "Seats\n";
    cout << "123456789012345678901234567890" << endl;
    for (int row = 0; row < NUM_ROWS; row++) {
        cout << "Row " << (row + 1) << " ";
        for (int seat = 0; seat < SEATS_PER_ROW; seat++) {
            cout << seats[row][seat];
        }
        cout << endl;
    }
}

// Function to calculate total ticket price
double calculateTotalPrice(int row, int seat, double seatPrices[NUM_ROWS]) {
    return seatPrices[row - 1];
}

int main() {
    char seats[NUM_ROWS][SEATS_PER_ROW];
    double seatPrices[NUM_ROWS];

    for (int row = 0; row < NUM_ROWS; row++) {
        for (int seat = 0; seat < SEATS_PER_ROW; seat++) {
            seats[row][seat] = '#'; // Initialize all seats as available
        }
    }

    // Ask for seat prices
    for (int row = 0; row < NUM_ROWS; row++) {
        cout << "Enter the price for Row " << (row + 1) << ": $";
        cin >> seatPrices[row];
    }

    double totalSales = 0.0;

    while (true) {
        displaySeatingChart(seats);

        int row, seat;
        cout << "Enter the row and seat number (0 to exit): ";
        cin >> row;
        if (row == 0) {
            break;
        }
        cin >> seat;

        if (row < 1 || row > NUM_ROWS || seat < 1 || seat > SEATS_PER_ROW) {
            cout << "Invalid seat selection. Please try again." << endl;
            continue;
        }

        if (seats[row - 1][seat - 1] == '*') {
            cout << "Sorry, that seat is already taken." << endl;
        } else {
            double ticketPrice = calculateTotalPrice(row, seat, seatPrices);
            cout << "Ticket price: $" << ticketPrice << endl;
            totalSales += ticketPrice;
            seats[row - 1][seat - 1] = '*';
        }
    }

    cout << "Total ticket sales: $" << totalSales << endl;

    return 0;
}
