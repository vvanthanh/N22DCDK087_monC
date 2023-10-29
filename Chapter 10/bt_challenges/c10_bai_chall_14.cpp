#include <iostream>
#include <string>
#include <cctype> // for isupper and tolower
using namespace std;

int main() {
    string input;
    string output;

    // Prompt the user to enter the input sentence
    cout << "Enter a sentence with run-together words: ";
    getline(cin, input);

    bool newWord = true; // Flag to track the start of a new word

    // Iterate through the input sentence and process each character
    for (char c : input) {
        if (newWord) {
            output += toupper(c); // Convert the first character of a word to uppercase
            newWord = false;
        } else {
            if (isupper(c)) {
                output += ' '; // Add a space before uppercase characters
                output += tolower(c); // Convert the uppercase character to lowercase
            } else {
                output += c;
            }
        }

        // Set the newWord flag for the next character
        if (c == ' ' || c == '\t') {
            newWord = true;
        }
    }

    // Output the converted sentence
    cout << "Converted sentence: " << output << endl;

    return 0;
}
