#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

string wordToPigLatin(const string& word) {
    string pigLatinWord = word;
    if (isVowel(pigLatinWord[0])) {
        pigLatinWord += "ay";
    } else {
        char firstLetter = pigLatinWord[0];
        pigLatinWord = pigLatinWord.substr(1) + firstLetter + "ay";
    }
    return pigLatinWord;
}

int main() {
    cout << "Enter a sentence: ";
    string sentence;
    getline(cin, sentence);

    istringstream iss(sentence);
    string word;
    string pigLatinSentence;

    while (iss >> word) {
        pigLatinSentence += wordToPigLatin(word) + " ";
    }

    cout << "Pig Latin: " << pigLatinSentence << endl;

    return 0;
}
