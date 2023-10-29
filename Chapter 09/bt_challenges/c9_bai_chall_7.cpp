#include <iostream>
#include <algorithm>
using namespace std;

// Function to compare two integers in descending order
bool compareDescending(int a, int b) {
    return a > b;
}

int main() {
    const int NUM_DONATIONS = 15;
    int donations[NUM_DONATIONS] = {5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10};
    int* arrptr[NUM_DONATIONS];

    // Initialize the arrptr array with pointers to the donations array
    for (int i = 0; i < NUM_DONATIONS; i++) {
        arrptr[i] = &donations[i];
    }

    // Sort the arrptr array in descending order using the custom comparator
    sort(arrptr, arrptr + NUM_DONATIONS, compareDescending);

    // Display the donations in descending order
    cout << "The donations, sorted in descending order, are:\n";
    for (int i = 0; i < NUM_DONATIONS; i++) {
        cout << *arrptr[i] << " ";
    }
    cout << endl;

    return 0;
}
