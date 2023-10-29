#include <iostream>

using namespace std;

int main() {
    const int NUM_EMPLOYEES = 6; // Số lượng nhân viên
    int hours[NUM_EMPLOYEES];    // Số giờ làm việc của mỗi nhân viên
    int count;                    // Biến đếm vòng lặp

    // Nhập số giờ làm việc của từng nhân viên.
    for (count = 0; count < NUM_EMPLOYEES; count++) {
        cout << "Enter the hours worked by employee " << (count + 1) << ": ";
        cin >> hours[count];
    }

    // Hiển thị nội dung của mảng.
    cout << "The hours you entered are:";
    for (count = 0; count < NUM_EMPLOYEES; count++) {
        cout << " " << hours[count];
    }
    cout << endl;

    return 0;
}