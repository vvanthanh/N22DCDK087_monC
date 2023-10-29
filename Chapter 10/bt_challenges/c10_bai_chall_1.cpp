#include <iostream>

using namespace std;

int countCharactersInCString(const char* str) {
    int count = 0;

    while (str[count] != '\0') {
        count++;
    }

    return count;
}

int main() {
    char inputString[100];  // Define a character array to store the input string.

    cout << "Enter a string: ";
    cin.getline(inputString, sizeof(inputString));

    int charCount = countCharactersInCString(inputString);

    cout << "Number of characters in the string: " << charCount << endl;

    return 0;
}
