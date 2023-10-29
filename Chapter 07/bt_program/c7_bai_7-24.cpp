#include <iostream>
#include <iomanip>
#include <vector> // Cần để định nghĩa vectors
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5; // Số lượng nhân viên
    vector<int> hours(NUM_EMPLOYEES); // Một vector chứa các số nguyên (giờ làm việc)
    vector<double> payRate(NUM_EMPLOYEES); // Một vector chứa các số thập phân (mức lương theo giờ)
    int index; // Biến đếm vòng lặp

    // Nhập dữ liệu.
    cout << "Nhap so gio lam viec cua " << NUM_EMPLOYEES;
    cout << " nhan vien va muc luong theo gio cua ho.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "So gio lam viec cua nhan vien #" << (index + 1);
        cout << ": ";
        cin >> hours[index];
        cout << "Muc luong theo gio cua nhan vien #";
        cout << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hiển thị tổng thu nhập của từng nhân viên.
    cout << "\nDay la tong thu nhap cua tung nhan vien:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhan vien #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}