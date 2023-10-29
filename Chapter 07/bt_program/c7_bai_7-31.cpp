#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main() {
    vector<int> values; // Một vector để lưu trữ giá trị
    int numValues; // Số lượng giá trị
    double average; // Để lưu giá trị trung bình

    // Nhập số lượng giá trị cần tính trung bình.
    cout << "Ban muon tinh trung binh cua bao nhieu so? ";
    cin >> numValues;

    // Nhập các giá trị và lưu trữ chúng trong vector.
    for (int count = 0; count < numValues; count++) {
        int tempValue;
        cout << "Nhap gia tri: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Tính trung bình của các giá trị và hiển thị nó.
    average = avgVector(values);
    cout << "Trung binh: " << average << endl;

    return 0;
}

//*************************************************************
// Definition of function avgVector. *
// This function accepts an int vector as its argument. If *
// the vector contains values, the function returns the *
// average of those values. Otherwise, an error message is *
// displayed and the function returns 0.0. *
//*************************************************************
double avgVector(vector<int> vect) {
    int total = 0; // Biến tích lũy
    double avg; // Trung bình

    if (vect.empty()) // Kiểm tra vector có trống không
    {
        cout << "Khong co gia tri de tinh trung binh.\n";
        avg = 0.0;
    } else {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }

    return avg;
}