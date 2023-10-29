#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

void capitalizeSentences(char* str) {
    // Capitalize the first character of the string.
    if (isalpha(str[0]))
        str[0] = toupper(str[0]);

    // Loop through the string and capitalize the first character of each sentence.
    for (int i = 1; str[i] != '\0'; i++) {
        if (str[i] == '.' && isalpha(str[i + 1])) {
            str[i + 1] = toupper(str[i + 1]);
        }
    }
}

int main() {
    const int MAX_LENGTH = 1000;
    char input[MAX_LENGTH];

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH);

    capitalizeSentences(input);

    cout << "Modified string: " << input << endl;

    return 0;
}
