#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Open the file for reading

    if (!inputFile) {
        cout << "Error opening the file." << endl;
        return 1;
    }

    vector<string> names;
    string name;

    // Read names from the file until there's no more data
    while (inputFile >> name) {
        names.push_back(name);
    }

    inputFile.close(); // Close the file

    // Display the names in reverse order
    cout << "Names in reverse order:" << endl;
    for (int i = names.size() - 1; i >= 0; i--) {
        cout << names[i] << endl;
    }

    return 0;
}
