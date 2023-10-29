#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// Function to check if a name is in the vector
bool isPopularName(const vector<string>& names, const string& name) {
    for (const string& popularName : names) {
        if (popularName == name) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<string> girlNames;
    vector<string> boyNames;

    // Read girl names from the file "GirlNames.txt"
    ifstream girlNamesFile("GirlNames.txt");
    if (girlNamesFile.is_open()) {
        string name;
        while (getline(girlNamesFile, name)) {
            girlNames.push_back(name);
        }
        girlNamesFile.close();
    } else {
        cerr << "Unable to open GirlNames.txt" << endl;
        return 1;
    }

    // Read boy names from the file "BoyNames.txt"
    ifstream boyNamesFile("BoyNames.txt");
    if (boyNamesFile.is_open()) {
        string name;
        while (getline(boyNamesFile, name)) {
            boyNames.push_back(name);
        }
        boyNamesFile.close();
    } else {
        cerr << "Unable to open BoyNames.txt" << endl;
        return 1;
    }

    // Input names from the user
    string input;
    cout << "Enter a boy's name, a girl's name, or both (press Enter to exit): ";
    while (getline(cin, input) && !input.empty()) {
        if (isPopularName(girlNames, input)) {
            cout << input << " is among the most popular girl names." << endl;
        }
        if (isPopularName(boyNames, input)) {
            cout << input << " is among the most popular boy names." << endl;
        }
        if (!isPopularName(girlNames, input) && !isPopularName(boyNames, input)) {
            cout << input << " is not among the most popular names." << endl;
        }
        cout << "Enter another name (or press Enter to exit): ";
    }

    return 0;
}
