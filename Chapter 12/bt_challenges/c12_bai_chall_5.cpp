#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);

    if (!file.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    int lineCount = 0;
    string line;
    while (getline(file, line)) {
        lineCount++;
        cout << lineCount << ":" << line << endl;

        if (lineCount % 24 == 0) {
            cout << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }
    }

    file.close();

    return 0;
}
