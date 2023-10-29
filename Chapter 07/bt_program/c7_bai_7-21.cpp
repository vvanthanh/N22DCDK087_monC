#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_DIVS = 3; // Số lượng phòng ban
    const int NUM_QTRS = 4; // Số lượng quý
    double sales[NUM_DIVS][NUM_QTRS]; // Mảng có 3 hàng và 4 cột.
    double totalSales = 0; // Để lưu tổng doanh số.
    int div, qtr; // Biến đếm vòng lặp.

    cout << "Chuong trinh nay se tinh tong doanh so cua\n";
    cout << "tat ca cac phong ban cua cong ty.\n";
    cout << "Nhap thong tin doanh so nhu sau:\n\n";

    // Vòng lặp lồng nhau để điền mảng với các con số doanh số theo quý cho từng phòng ban.
    for (div = 0; div < NUM_DIVS; div++) {
        for (qtr = 0; qtr < NUM_QTRS; qtr++) {
            cout << "Phong ban " << (div + 1);
            cout << ", Quy " << (qtr + 1) << ": $";
            cin >> sales[div][qtr];
        }
        cout << endl; // In một dòng trắng để ngăn cách giữa các phòng ban.
    }

    // Vòng lặp lồng nhau được sử dụng để tính tổng của tất cả các phần tử.
    for (div = 0; div < NUM_DIVS; div++) {
        for (qtr = 0; qtr < NUM_QTRS; qtr++) {
            totalSales += sales[div][qtr];
        }
    }

    cout << fixed << showpoint << setprecision(2);
    cout << "Tong doanh so cua cong ty la: $";
    cout << totalSales << endl;

    return 0;
}