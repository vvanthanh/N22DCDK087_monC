#include <iostream>
#include <iomanip>
using namespace std;

// Khai báo hàm showArray (Function prototype)
void showArray(const int[][COLS], int);

// Hằng số toàn cục
const int COLS = 4; // Số cột trong mỗi mảng
const int TBL1_ROWS = 3; // Số hàng trong bảng 1
const int TBL2_ROWS = 4; // Số hàng trong bảng 2

int main() {
    int table1[TBL1_ROWS][COLS] = {{1, 2, 3, 4},
                                    {5, 6, 7, 8},
                                    {9, 10, 11, 12}};
    int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                    {50, 60, 70, 80},
                                    {90, 100, 110, 120},
                                    {130, 140, 150, 160}};

    cout << "Noi dung cua bang 1 la:\n";
    showArray(table1, TBL1_ROWS);

    cout << "Noi dung cua bang 2 la:\n";
    showArray(table2, TBL2_ROWS);

    return 0;
}

// Định nghĩa hàm showArray để hiển thị nội dung của mảng 2D
void showArray(const int numbers[][COLS], int rows) {
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < COLS; y++) {
            cout << setw(4) << numbers[x][y] << " ";
        }
        cout << endl;
    }
}