#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    string line;
    int lineCount = 0;

    while (getline(file, line) && lineCount < 10) {
        cout << line << endl;
        lineCount++;
    }

    if (lineCount == 0) {
        cout << "The file is empty." << endl;
    } else if (lineCount < 10) {
        cout << "The entire file has been displayed." << endl;
    }

    file.close();
    return 0;
}
