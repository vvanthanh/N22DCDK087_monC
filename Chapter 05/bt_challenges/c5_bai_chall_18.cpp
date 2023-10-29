#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inputFile("People.txt");
    if (!inputFile.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)" << endl;

    int year = 1900;
    while (!inputFile.eof()) {
        int population;
        inputFile >> population;

        cout << year << " ";
        for (int i = 0; i < population / 1000; i++) {
            cout << "*";
        }
        cout << endl;

        year += 20;
    }

    inputFile.close();
    return 0;
}
