#include <iostream>
#include <cstring> // for C-string functions
#include <string>  // for std::string

using namespace std;

// Function to count words in a C-string
int countWords(const char* str) {
    if (str == nullptr) {
        return 0; // Handle null pointer case
    }

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    return wordCount;
}

// Overloaded function to count words in a std::string
int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;

    for (char ch : str) {
        if (isalpha(ch)) {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    return wordCount;
}

int main() {
    // Ask the user to input a string
    string userInput;
    cout << "Enter a string: ";
    getline(cin, userInput);

    // Using the C-string function
    int countCStr = countWords(userInput.c_str());
    cout << "Number of words (C-string function): " << countCStr << endl;

    // Using the std::string function
    int countStr = countWords(userInput);
    cout << "Number of words (std::string function): " << countStr << endl;

    return 0;
}
