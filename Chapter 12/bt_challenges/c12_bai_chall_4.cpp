#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename);

    if (!file) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    vector<string> lines;
    string line;

    while (getline(file, line)) {
        lines.push_back(line);
        if (lines.size() > 10) {
            lines.erase(lines.begin());
        }
    }

    file.close();

    cout << "Last 10 lines of the file:" << endl;
    for (const string& l : lines) {
        cout << l << endl;
    }

    if (lines.size() < 10) {
        cout << "The entire file has been displayed." << endl;
    }

    return 0;
}
