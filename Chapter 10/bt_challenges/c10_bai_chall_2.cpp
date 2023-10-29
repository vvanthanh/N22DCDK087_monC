#include <iostream>
#include <cstring> // For C-string functions
using namespace std;

void displayBackward(const char* str) {
    int length = strlen(str);
    for (int i = length - 1; i >= 0; i--) {
        cout << str[i];
    }
    cout << endl;
}

int main() {
    const int MAX_LENGTH = 100;
    char inputString[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(inputString, MAX_LENGTH);

    cout << "Backward: ";
    displayBackward(inputString);

    return 0;
}
