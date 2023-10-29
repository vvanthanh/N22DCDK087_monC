#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i <= 127; ++i) {
        // Hiển thị ký tự và mã ASCII
        cout << char(i) << " ";

        // Nếu đã hiển thị 16 ký tự, xuống dòng
        if ((i + 1) % 16 == 0) {
            cout << endl;
        }
    }

    return 0;
}
