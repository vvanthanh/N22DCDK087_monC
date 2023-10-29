#include <iostream>
using namespace std;

int findMode(const int* arr, int size) {
    if (size <= 0) {
        return -1; // Return -1 for an empty array or invalid size.
    }

    int mode = -1;
    int maxCount = 0;

    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[j] == arr[i]) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    if (maxCount <= 1) {
        return -1; // No mode found.
    }

    return mode;
}

int main() {
    const int size = 10;
    int arr[size] = {1, 2, 3, 3, 4, 4, 4, 5, 5, 6};

    int mode = findMode(arr, size);

    if (mode != -1) {
        cout << "The mode is: " << mode << endl;
    } else {
        cout << "The array has no mode." << endl;
    }

    return 0;
}
