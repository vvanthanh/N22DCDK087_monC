#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];

    cout << "Nhap so gio lam viec va muc luong theo gio cho " << NUM_EMPLOYEES << " nhan vien.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "So gio lam viec cua nhan vien #" << (index + 1) << ": ";
        cin >> hours[index];
        cout << "Muc luong theo gio cua nhan vien #" << (index + 1) << ": ";
        cin >> payRate[index];
    }

    cout << "Duoi day la tong thu nhap cua tung nhan vien:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhan vien #" << (index + 1) << ": $" << grossPay << endl;
    }

    return 0;
}