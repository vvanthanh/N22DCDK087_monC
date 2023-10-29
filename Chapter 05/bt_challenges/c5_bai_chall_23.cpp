#include <iostream>

using namespace std;

int main() {
    int n = 10;  // Number of rows for both patterns

    // Pattern A
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << endl;
    }

    // Pattern B
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i; k++) {
            cout << "+";
        }
        cout << endl;
    }

    return 0;
}
