#include <iostream>
#include <fstream>
#include <conio.h> // For _getch() on Windows, use <ncurses.h> for Linux

using namespace std;

int main() {
    string filename;
    cout << "Enter the name of the file: ";
    cin >> filename;

    ifstream file(filename.c_str());

    if (!file.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    const int linesPerPage = 24;
    int linesDisplayed = 0;
    char ch;

    while (!file.eof()) {
        string line;
        getline(file, line);
        cout << line << endl;
        linesDisplayed++;

        if (linesDisplayed >= linesPerPage) {
            cout << "Press any key to continue..." << endl;
            ch = _getch(); // Wait for user input

            if (ch == 27) {
                break; // Exit if the user presses the Esc key
            }

            linesDisplayed = 0; // Reset line count
        }
    }

    file.close();

    return 0;
}
