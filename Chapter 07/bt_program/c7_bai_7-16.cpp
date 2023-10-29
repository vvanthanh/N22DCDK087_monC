#include <iostream>
using namespace std;

// Khai báo hàm showValue (Function prototype)
void showValue(int);

int main() {
    const int SIZE = 8;
    int numbers[SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    // Duyệt qua mảng numbers và gọi hàm showValue cho từng phần tử
    for (int index = 0; index < SIZE; index++)
        showValue(numbers[index]);

    return 0;
}

// Định nghĩa hàm showValue
void showValue(int num) {
    cout << num << " ";
}