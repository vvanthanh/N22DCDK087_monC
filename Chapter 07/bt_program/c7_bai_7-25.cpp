#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Định nghĩa và khởi tạo một vector.
    vector<int> numbers {10, 20, 30, 40, 50};

    // Hiển thị các phần tử trong vector.
    for (int val : numbers)
        cout << val << endl;

    return 0;
}