#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// Function to calculate the median of an array
double calculateMedian(int arr[], int size) {
    sort(arr, arr + size);
    if (size % 2 == 0) {
        return (arr[size / 2 - 1] + arr[size / 2]) / 2.0;
    } else {
        return arr[size / 2];
    }
}

// Function to calculate the mode of an array
int calculateMode(int arr[], int size) {
    vector<int> values(arr, arr + size);
    sort(values.begin(), values.end());

    int currentNum = values[0];
    int mode = currentNum;
    int currentCount = 1;
    int maxCount = 1;

    for (int i = 1; i < size; i++) {
        if (values[i] == currentNum) {
            currentCount++;
        } else {
            if (currentCount > maxCount) {
                maxCount = currentCount;
                mode = currentNum;
            }
            currentNum = values[i];
            currentCount = 1;
        }
    }

    return mode;
}

int main() {
    int numStudents;

    cout << "How many students were surveyed? ";
    cin >> numStudents;

    if (numStudents <= 0) {
        cout << "Invalid input. Please enter a positive number of students." << endl;
        return 1;
    }

    int* movieCounts = new int[numStudents];

    for (int i = 0; i < numStudents; i++) {
        do {
            cout << "Enter the number of movies student " << (i + 1) << " saw: ";
            cin >> movieCounts[i];
        } while (movieCounts[i] < 0);
    }

    // Calculate and display the average
    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += movieCounts[i];
    }
    double average = static_cast<double>(sum) / numStudents;
    cout << "Average: " << average << endl;

    // Calculate and display the median
    double median = calculateMedian(movieCounts, numStudents);
    cout << "Median: " << median << endl;

    // Calculate and display the mode
    int mode = calculateMode(movieCounts, numStudents);
    cout << "Mode: " << mode << endl;

    delete[] movieCounts; // Deallocate the dynamically allocated array

    return 0;
}
