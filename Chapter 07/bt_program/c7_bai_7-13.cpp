#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5; // So luong nhan vien
    int hours[NUM_EMPLOYEES]; // Mang luu so gio lam viec cua tung nhan vien
    double payrate; // Ty le luong theo gio
    double grossPay; // Bien luu tong thu nhap

    // Nhap so gio lam viec cua tung nhan vien.
    cout << "Nhap so gio lam viec cua " << NUM_EMPLOYEES << " nhan vien, co cung\n";
    cout << "muc luong theo gio.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        cout << "Nhan vien #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Nhap ty le luong theo gio cho tat ca nhan vien.
    cout << "Nhap ty le luong theo gio cho tat ca nhan vien: ";
    cin >> payrate;

    // Hien thi tong thu nhap cua tung nhan vien.
    cout << "Duoi day la tong thu nhap cua tung nhan vien:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++) {
        grossPay = hours[index] * payrate;
        cout << "Nhan vien #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}