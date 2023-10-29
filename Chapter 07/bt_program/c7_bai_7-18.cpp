#include <iostream>
using namespace std;

// Khai báo hàm showValues (Function prototype)
void showValues(int [], int); 

int main() {
    const int SIZE1 = 8; // Kích thước của mảng set1
    const int SIZE2 = 5; // Kích thước của mảng set2
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};

    // Gọi hàm showValues và truyền mảng set1 và kích thước của mảng set1
    cout << "Contents of set1: ";
    showValues(set1, SIZE1);

    // Gọi hàm showValues và truyền mảng set2 và kích thước của mảng set2
    cout << "Contents of set2: ";
    showValues(set2, SIZE2);

    return 0;
}

// Định nghĩa hàm showValues để hiển thị nội dung của mảng
void showValues(int arr[], int size) {
    for (int index = 0; index < size; index++) {
        cout << arr[index];
        if (index < size - 1) {
            cout << ", "; // Hiển thị dấu phẩy sau mỗi phần tử ngoại trừ phần tử cuối cùng
        }
    }
    cout << endl;
}