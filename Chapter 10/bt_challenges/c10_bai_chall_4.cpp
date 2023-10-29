#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string text;
    cout << "Enter a sentence: ";
    getline(cin, text);

    istringstream iss(text);
    string word;
    int totalLetters = 0;
    int wordCount = 0;

    while (iss >> word) {
        totalLetters += word.length();
        wordCount++;
    }

    if (wordCount > 0) {
        double averageLetters = static_cast<double>(totalLetters) / wordCount;
        cout << "Number of words: " << wordCount << endl;
        cout << "Total number of letters: " << totalLetters << endl;
        cout << "Average number of letters per word: " << averageLetters << endl;
    } else {
        cout << "No words entered." << endl;
    }

    return 0;
}
