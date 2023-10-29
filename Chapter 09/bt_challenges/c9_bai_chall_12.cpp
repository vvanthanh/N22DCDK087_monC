#include <iostream>

using namespace std;

int* copyAndEnlargeArray(int originalArray[], int size) {
    // Create a new array one element larger
    int* newArray = new int[size + 1];

    // Set the first element of the new array to 0
    newArray[0] = 0;

    // Copy elements from the original array to the new array
    for (int i = 0; i < size; i++) {
        newArray[i + 1] = originalArray[i];
    }

    return newArray;
}

int main() {
    int originalArray[] = {1, 2, 3, 4, 5};
    int size = 5;

    int* enlargedArray = copyAndEnlargeArray(originalArray, size);

    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << originalArray[i] << " ";
    }
    cout << endl;

    cout << "Enlarged Array: ";
    for (int i = 0; i < size + 1; i++) {
        cout << enlargedArray[i] << " ";
    }
    cout << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] enlargedArray;

    return 0;
}
