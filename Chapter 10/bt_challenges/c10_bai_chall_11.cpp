#include <iostream>
#include <cstring>
using namespace std;

void upper(char* str) {
    for (int i = 0; str[i]; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

void lower(char* str) {
    for (int i = 0; str[i]; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

void reverse(char* str) {
    for (int i = 0; str[i]; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        } else if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

int main() {
    char input[100];

    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));

    // Test the functions in the specified order
    reverse(input);
    cout << "Reversed and swapped case: " << input << endl;

    lower(input);
    cout << "Lowercase: " << input << endl;

    upper(input);
    cout << "Uppercase: " << input << endl;

    return 0;
}
