#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int getTotal(int array[][COLS]) {
    int total = 0;
    for (int row = 0; row < ROWS; row++) {
        for (int col = 0; col < COLS; col++) {
            total += array[row][col];
        }
    }
    return total;
}

double getAverage(int array[][COLS]) {
    return static_cast<double>(getTotal(array)) / (ROWS * COLS);
}

int getRowTotal(int array[][COLS], int row) {
    int total = 0;
    for (int col = 0; col < COLS; col++) {
        total += array[row][col];
    }
    return total;
}

int getColumnTotal(int array[][COLS], int col) {
    int total = 0;
    for (int row = 0; row < ROWS; row++) {
        total += array[row][col];
    }
    return total;
}

int getHighestInRow(int array[][COLS], int row) {
    int highest = array[row][0];
    for (int col = 1; col < COLS; col++) {
        if (array[row][col] > highest) {
            highest = array[row][col];
        }
    }
    return highest;
}

int getLowestInRow(int array[][COLS], int row) {
    int lowest = array[row][0];
    for (int col = 1; col < COLS; col++) {
        if (array[row][col] < lowest) {
            lowest = array[row][col];
        }
    }
    return lowest;
}

int main() {
    int data[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Demonstrate the functions
    cout << "Total: " << getTotal(data) << endl;
    cout << "Average: " << getAverage(data) << endl;
    cout << "Row 1 Total: " << getRowTotal(data, 1) << endl;
    cout << "Column 2 Total: " << getColumnTotal(data, 2) << endl;
    cout << "Highest in Row 2: " << getHighestInRow(data, 2) << endl;
    cout << "Lowest in Row 0: " << getLowestInRow(data, 0) << endl;

    return 0;
}
