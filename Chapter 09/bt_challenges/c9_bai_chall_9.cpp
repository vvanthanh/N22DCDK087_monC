#include <iostream>

double calculateMedian(int* array, int size) {
    // Check if the array is empty
    if (size == 0) {
        return 0.0;
    }

    // Calculate the median
    if (size % 2 == 1) {
        // If the size is odd, return the middle element
        return static_cast<double>(array[size / 2]);
    } else {
        // If the size is even, return the average of the two middle elements
        return static_cast<double>((array[size / 2 - 1] + array[size / 2])) / 2.0;
    }
}

int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int* array = new int[size];

    std::cout << "Enter the sorted array elements:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> array[i];
    }

    double median = calculateMedian(array, size);

    std::cout << "The median of the array is: " << median << std::endl;

    delete[] array; // Don't forget to release the dynamically allocated memory

    return 0;
}
