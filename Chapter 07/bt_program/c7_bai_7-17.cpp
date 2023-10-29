#include <iostream>
using namespace std;

// Khai báo hàm showValues (Function prototype)
void showValues(int [], int);

int main() {
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    // Gọi hàm showValues và truyền mảng numbers và kích thước của mảng
    showValues(numbers, ARRAY_SIZE);

    return 0;
}

// Định nghĩa hàm showValues
void showValues(int nums[], int size) {
    // Duyệt qua mảng và hiển thị giá trị của từng phần tử
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}