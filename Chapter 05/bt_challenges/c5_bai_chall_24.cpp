#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt"); // Open the file

    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    double number;
    int count = 0;
    double sum = 0;

    while (inputFile >> number) {
        sum += number;
        count++;
    }

    inputFile.close(); // Close the file

    if (count == 0) {
        cout << "The file is empty." << endl;
    } else {
        double average = sum / count;
        cout << "A) Number of numbers in the file: " << count << endl;
        cout << "B) Sum of all the numbers in the file: " << sum << endl;
        cout << "C) Average of all the numbers in the file: " << average << endl;
    }

    return 0;
}
