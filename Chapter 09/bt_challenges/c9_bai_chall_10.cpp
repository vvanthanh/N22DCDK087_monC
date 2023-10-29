#include <iostream>

using namespace std;

int* reverseArray(const int arr[], int size) {
    int* reversedArray = new int[size];

    for (int i = 0; i < size; i++) {
        reversedArray[i] = arr[size - 1 - i];
    }

    return reversedArray;
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(originalArray) / sizeof(originalArray[0]);

    int* reversed = reverseArray(originalArray, arraySize);

    cout << "Original Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Reversed Array: ";
    for (int i = 0; i < arraySize; i++) {
        cout << reversed[i] << " ";
    }
    cout << endl;

    delete[] reversed; // Remember to release memory when done with the reversed array

    return 0;
}
