#include <iostream>
#include <map>
#include <string>
using namespace std;

// Define a map to store Morse code for each character.
map<char, string> morseCodeMap = {
    {'A', ".-"}, {'B', "-..."}, {'C', "-.-."}, {'D', "-.."}, {'E', "."}, {'F', "..-."}, {'G', "--."}, {'H', "...."},
    {'I', ".."}, {'J', ".---"}, {'K', "-.-"}, {'L', ".-.."}, {'M', "--"}, {'N', "-."}, {'O', "---"}, {'P', ".--."},
    {'Q', "--.-"}, {'R', ".-."}, {'S', "..."}, {'T', "-"}, {'U', "..-"}, {'V', "...-"}, {'W', ".--"}, {'X', "-..-"},
    {'Y', "-.--"}, {'Z', "--.."},
    {'0', "-----"}, {'1', ".----"}, {'2', "..---"}, {'3', "...--"}, {'4', "....-"}, {'5', "....."}, {'6', "-...."},
    {'7', "--..."}, {'8', "---.."}, {'9', "----."}
};

// Function to convert a string to Morse code.
string stringToMorse(const string& input) {
    string morseCode;
    for (char c : input) {
        if (c == ' ') {
            morseCode += " ";  // Add space for word separation.
        } else {
            char upperC = toupper(c);
            if (morseCodeMap.find(upperC) != morseCodeMap.end()) {
                morseCode += morseCodeMap[upperC] + " ";
            }
        }
    }
    return morseCode;
}

int main() {
    cout << "Enter a string: ";
    string userInput;
    getline(cin, userInput);

    string morseCode = stringToMorse(userInput);
    cout << "Morse Code: " << morseCode << endl;

    return 0;
}
