#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values;

    // Lưu trữ các giá trị vào vector.
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);

    cout << "Kich thuoc cua vector la " << values.size() << endl;

    // Loại bỏ một giá trị khỏi vector.
    cout << "Loai bo mot gia tri tu vector...\n";
    values.pop_back();
    cout << "Kich thuoc cua vector bay gio la " << values.size() << endl;

    // Loại bỏ một giá trị khỏi vector.
    cout << "Loai bo mot gia tri tu vector...\n";
    values.pop_back();
    cout << "Kich thuoc cua vector bay gio la " << values.size() << endl;

    // Loại bỏ giá trị cuối cùng khỏi vector.
    cout << "Loai bo mot gia tri tu vector...\n";
    values.pop_back();
    cout << "Kich thuoc cua vector bay gio la " << values.size() << endl;

    return 0;
}