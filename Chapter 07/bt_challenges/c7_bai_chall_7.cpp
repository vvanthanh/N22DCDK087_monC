#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string fileName;
    cout << "Enter the file name: ";
    cin >> fileName;

    ifstream inputFile(fileName);

    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    double number;
    double lowest = 0, highest = 0, total = 0, average = 0;
    int count = 0;

    if (inputFile >> number) {
        lowest = highest = total = number;
        count = 1;
    }

    while (inputFile >> number) {
        if (number < lowest) {
            lowest = number;
        }
        if (number > highest) {
            highest = number;
        }
        total += number;
        count++;
    }

    inputFile.close();

    if (count > 0) {
        average = total / count;

        cout << "Lowest number: " << lowest << endl;
        cout << "Highest number: " << highest << endl;
        cout << "Total of numbers: " << total << endl;
        cout << "Average of numbers: " << average << endl;
    } else {
        cout << "The file is empty." << endl;
    }

    return 0;
}
