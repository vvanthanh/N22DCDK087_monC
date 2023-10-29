#include <iostream>
using namespace std;

// Khai báo hàm doubleArray (Function prototype)
void doubleArray(int [], int);

// Khai báo hàm showValues (Function prototype)
void showValues(int [], int);

int main() {
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Hiển thị giá trị ban đầu của mảng.
    cout << "Cac gia tri cua mang la:\n";
    showValues(set, ARRAY_SIZE);

    // Gọi hàm doubleArray để làm gấp đôi giá trị trong mảng.
    doubleArray(set, ARRAY_SIZE);

    // Hiển thị giá trị kết quả sau khi gọi hàm doubleArray.
    cout << "Sau khi goi ham doubleArray, cac gia tri la:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// Định nghĩa hàm doubleArray để làm gấp đôi giá trị trong mảng.
void doubleArray(int arr[], int size) {
    for (int index = 0; index < size; index++) {
        arr[index] *= 2;
    }
}

// Định nghĩa hàm showValues để hiển thị giá trị của mảng.
void showValues(int arr[], int size) {
    for (int index = 0; index < size; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;
}