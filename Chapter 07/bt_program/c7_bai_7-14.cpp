#include <iostream>
#include <fstream> // Đã thêm thư viện fstream

using namespace std;

int main()
{
    const int ARRAY_SIZE = 100; // Kích thước của mảng
    int numbers[ARRAY_SIZE];    // Mảng có 100 phần tử
    int count = 0;              // Biến đếm vòng lặp
    ifstream inputFile;         // Đối tượng luồng đầu vào từ file

    inputFile.open("numbers.txt"); // Mở tệp tin.

    // Đọc các số từ tệp tin vào mảng.
    // Sau khi vòng lặp này thực hiện, biến count sẽ chứa
    // số lượng giá trị đã được lưu trong mảng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Đóng tệp tin.
    inputFile.close();

    // Hiển thị các số đã đọc.
    cout << "Cac so la: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;

    return 0;
}