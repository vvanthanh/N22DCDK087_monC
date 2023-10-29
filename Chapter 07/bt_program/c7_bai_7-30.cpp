#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values(100);

    cout << "Vector values co " << values.size() << " phan tu.\n";
    cout << "Toi se goi ham clear...\n";
    values.clear();
    cout << "Bay gio, vector values co " << values.size() << " phan tu.\n";

    return 0;
}