#include <iostream>

using namespace std;

int main()
{
    int number = 65;

    // Hiển thị giá trị của biến number.
    cout << number << endl;

    // Hiển thị giá trị của number sau khi được chuyển đổi
    // sang kiểu dữ liệu char.
    cout << static_cast<char>(number) << endl;

    return 0;
}
