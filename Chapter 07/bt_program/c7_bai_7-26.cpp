#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Định nghĩa và khởi tạo một vector với 5 phần tử.
    vector<int> numbers(5);

    // Nhập giá trị cho các phần tử của vector.
    for (int &val : numbers) {
        cout << "Nhap mot gia tri nguyen: ";
        cin >> val;
    }

    // Hiển thị các phần tử của vector.
    cout << "Danh sach cac gia tri ban nhap:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}