#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    ifstream inputFile("text.txt");

    if (!inputFile.is_open()) {
        cout << "Failed to open the file." << endl;
        return 1;
    }

    string line;
    int sentenceCount = 0;
    int wordCount = 0;

    while (getline(inputFile, line)) {
        sentenceCount++;
        istringstream stream(line);
        string word;
        
        while (stream >> word) {
            wordCount++;
        }
    }

    inputFile.close();

    if (sentenceCount == 0) {
        cout << "No sentences found in the file." << endl;
    } else {
        double averageWordsPerSentence = static_cast<double>(wordCount) / sentenceCount;
        cout << "Average words per sentence: " << averageWordsPerSentence << endl;
    }

    return 0;
}
