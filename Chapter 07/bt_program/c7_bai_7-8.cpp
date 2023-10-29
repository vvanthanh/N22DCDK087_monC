#include <iostream>

using namespace std;

int main() {
    const int NUM_LETTERS = 10;
    char letters[NUM_LETTERS] = {'A', 'B', 'C', 'D', 'E',
                                  'F', 'G', 'H', 'I', 'J'};

    // In tiêu đề cho bảng
    cout << "Character" << "\t" << "ASCII Code\n";
    cout << "---------" << "\t" << "----------\n";

    // Duyệt qua mảng và in ký tự và mã ASCII tương ứng
    for (int count = 0; count < NUM_LETTERS; count++) {
        cout << letters[count] << "\t\t";
        cout << static_cast<int>(letters[count]) << endl;
    }

    return 0;
}