#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int ARRAY_SIZE = 10; // Kích thước của mảng
    int numbers[ARRAY_SIZE];   // Mảng với 10 phần tử
    int count;                 // Biến đếm vòng lặp
    ofstream outputFile;       // Đối tượng luồng ghi vào tệp

    // Lưu các giá trị vào mảng.
    for (count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = count;

    // Mở tệp để ghi dữ liệu.
    outputFile.open("SavedNumbers.txt");

    // Ghi nội dung của mảng vào tệp.
    for (count = 0; count < ARRAY_SIZE; count++)
        outputFile << numbers[count] << endl;

    // Đóng tệp.
    outputFile.close();

    // Đã xong!
    cout << "Cac so da duoc luu vao tep.\n";
    return 0;
}