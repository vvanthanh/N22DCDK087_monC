#include <iostream>
#include <fstream>

using namespace std;

// Function to write an array to a binary file
void arrayToFile(const char* filename, int* arr, int size) {
    ofstream outFile(filename, ios::out | ios::binary);

    if (!outFile) {
        cerr << "Error opening file for writing: " << filename << endl;
        return;
    }

    outFile.write(reinterpret_cast<char*>(arr), sizeof(int) * size);
    outFile.close();
}

// Function to read data from a binary file into an array
void fileToArray(const char* filename, int* arr, int size) {
    ifstream inFile(filename, ios::in | ios::binary);

    if (!inFile) {
        cerr << "Error opening file for reading: " << filename << endl;
        return;
    }

    inFile.read(reinterpret_cast<char*>(arr), sizeof(int) * size);
    inFile.close();
}

int main() {
    const char* filename = "data.bin";
    const int arraySize = 5;
    int data[arraySize] = {1, 2, 3, 4, 5};

    // Write the array to the file
    arrayToFile(filename, data, arraySize);
    cout << "Array data written to file." << endl;

    // Read data from the file into a new array
    int newData[arraySize];
    fileToArray(filename, newData, arraySize);
    cout << "Array data read from file:" << endl;

    // Display the contents of the new array
    for (int i = 0; i < arraySize; i++) {
        cout << newData[i] << " ";
    }
    cout << endl;

    return 0;
}
