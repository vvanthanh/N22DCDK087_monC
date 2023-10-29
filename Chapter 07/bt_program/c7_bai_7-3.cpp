#include <iostream>
#include <fstream> // Thư viện để làm việc với tệp tin
using namespace std;

int main() {
    const int ARRAY_SIZE = 10; // Kích thước của mảng
    int numbers[ARRAY_SIZE]; // Mảng gồm 10 phần tử
    int count = 0; // Biến đếm vòng lặp
    ifstream inputFile; // Đối tượng luồng đầu vào từ tệp tin

    // Mở tệp tin.
    inputFile.open("TenNumbers.txt");

    // Đọc các số từ tệp tin vào mảng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Đóng tệp tin.
    inputFile.close();

    // Hiển thị các số đã đọc:
    cout << "Cac so da doc: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}