#include <iostream>

using namespace std;

int* allocateIntArray(int numElements) {
    int* dynamicArray = new int[numElements];
    return dynamicArray;
}

int main() {
    int numElements;
    cout << "Enter the number of elements to allocate: ";
    cin >> numElements;

    int* myArray = allocateIntArray(numElements);

    if (myArray != nullptr) {
        cout << "Dynamic array has been allocated successfully." << endl;

        // You can now use myArray to store and access integers.

        // Don't forget to deallocate the memory when you're done.
        delete[] myArray;
    } else {
        cout << "Failed to allocate dynamic array." << endl;
    }

    return 0;
}
