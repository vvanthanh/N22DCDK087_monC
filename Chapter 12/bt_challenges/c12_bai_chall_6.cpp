#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    string filename, searchStr;
    cout << "Enter the file name: ";
    cin >> filename;

    cout << "Enter the string to search for: ";
    cin >> searchStr;

    ifstream file(filename);

    if (!file) {
        cerr << "Error: Unable to open the file." << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(file, line)) {
        size_t found = line.find(searchStr);
        if (found != string::npos) {
            cout << "Found at line " << count + 1 << ": " << line << endl;
            count++;
        }
    }

    if (count > 0) {
        cout << "The string \"" << searchStr << "\" appeared " << count << " time(s) in the file." << endl;
    } else {
        cout << "The string \"" << searchStr << "\" was not found in the file." << endl;
    }

    file.close();
    return 0;
}
