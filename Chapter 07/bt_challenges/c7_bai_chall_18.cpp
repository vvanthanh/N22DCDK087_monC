#include <iostream>

using namespace std;

const int BOARD_SIZE = 3;

void initializeBoard(char board[][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = '*';
        }
    }
}

void displayBoard(char board[][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool checkWin(char board[][BOARD_SIZE], char player) {
    // Check rows, columns, and diagonals
    for (int i = 0; i < BOARD_SIZE; i++) {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||  // Check rows
            (board[0][i] == player && board[1][i] == player && board[2][i] == player) ||  // Check columns
            (board[0][0] == player && board[1][1] == player && board[2][2] == player) ||  // Check main diagonal
            (board[0][2] == player && board[1][1] == player && board[2][0] == player))    // Check secondary diagonal
        {
            return true;
        }
    }
    return false;
}

bool isBoardFull(char board[][BOARD_SIZE]) {
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == '*') {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char board[BOARD_SIZE][BOARD_SIZE];
    initializeBoard(board);
    int currentPlayer = 1;

    while (true) {
        cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
        int row, col;
        cin >> row >> col;

        // Check if the input is valid
        if (row < 1 || row > BOARD_SIZE || col < 1 || col > BOARD_SIZE || board[row - 1][col - 1] != '*') {
            cout << "Invalid move. Try again." << endl;
            continue;
        }

        if (currentPlayer == 1) {
            board[row - 1][col - 1] = 'X';
            if (checkWin(board, 'X')) {
                cout << "Player 1 (X) wins!" << endl;
                break;
            }
        } else {
            board[row - 1][col - 1] = 'O';
            if (checkWin(board, 'O')) {
                cout << "Player 2 (O) wins!" << endl;
                break;
            }
        }

        displayBoard(board);

        if (isBoardFull(board)) {
            cout << "It's a tie!" << endl;
            break;
        }

        currentPlayer = (currentPlayer % 2) + 1; // Switch players (1 -> 2, 2 -> 1)
    }

    return 0;
}
