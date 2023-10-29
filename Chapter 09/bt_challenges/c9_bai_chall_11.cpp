#include <iostream>

using namespace std;

int* doubleArraySize(const int* arr, int size) {
    int new_size = 2 * size;
    int* new_array = new int[new_size];  // Create a new array of twice the size.

    // Copy the contents of the original array to the new array.
    for (int i = 0; i < size; i++) {
        new_array[i] = arr[i];
    }

    // Initialize the unused elements of the new array with 0.
    for (int i = size; i < new_size; i++) {
        new_array[i] = 0;
    }

    return new_array;  // Return a pointer to the new array.
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int size = 5;

    int* newArray = doubleArraySize(originalArray, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << originalArray[i] << " ";
    }

    cout << "\nNew Array: ";
    for (int i = 0; i < 2 * size; i++) {
        cout << newArray[i] << " ";
    }

    delete[] newArray;  // Don't forget to release the memory when done with the new array.

    return 0;
}
