#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main() {
    vector<int> hours; // hours là một vector rỗng
    vector<double> payRate; // payRate là một vector rỗng
    int numEmployees; // Số lượng nhân viên
    int index; // Biến đếm vòng lặp

    // Nhập số lượng nhân viên.
    cout << "Ban co bao nhieu nhan vien? ";
    cin >> numEmployees;

    // Nhập dữ liệu về lương.
    cout << "Nhap so gio lam viec va muc luong theo gio cho " << numEmployees << " nhan vien.\n";
    for (index = 0; index < numEmployees; index++) {
        int tempHours; // Để lưu số giờ làm việc
        double tempRate; // Để lưu mức lương theo giờ
        cout << "So gio lam viec cua nhan vien #" << (index + 1) << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Thêm một phần tử vào vector hours
        cout << "Muc luong theo gio cua nhan vien #" << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Thêm một phần tử vào vector payRate
    }

    // Hiển thị tổng thu nhập của từng nhân viên.
    cout << "Duoi day la tong thu nhap cua tung nhan vien:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhan vien #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}