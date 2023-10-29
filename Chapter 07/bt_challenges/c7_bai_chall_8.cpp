#include <iostream>
using namespace std;

const int SIZE = 3;

bool isLoShuMagicSquare(int grid[SIZE][SIZE]) {
    // Calculate the sum of the first row
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += grid[0][i];
    }

    // Check the sums of all rows and columns
    for (int i = 0; i < SIZE; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < SIZE; j++) {
            rowSum += grid[i][j];
            colSum += grid[j][i];
        }
        if (rowSum != sum || colSum != sum) {
            return false;
        }
    }

    // Check the sum of the main diagonal
    int mainDiagonalSum = grid[0][0] + grid[1][1] + grid[2][2];
    if (mainDiagonalSum != sum) {
        return false;
    }

    // Check the sum of the secondary diagonal
    int secondaryDiagonalSum = grid[0][2] + grid[1][1] + grid[2][0];
    if (secondaryDiagonalSum != sum) {
        return false;
    }

    return true;
}

int main() {
    int grid[SIZE][SIZE] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

    if (isLoShuMagicSquare(grid)) {
        cout << "The given grid is a Lo Shu Magic Square." << endl;
    } else {
        cout << "The given grid is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}
