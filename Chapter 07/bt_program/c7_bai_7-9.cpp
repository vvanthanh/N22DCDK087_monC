#include <iostream>
using namespace std;

int main() {
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 4, 8}; // Khởi tạo 4 phần tử đầu tiên

    cout << "Noi dung cua mang la:\n";
    for (int index = 0; index < SIZE; index++) {
        cout << numbers[index] << " "; // Hiển thị từng phần tử của mảng
    }

    cout << endl;
    return 0;
}