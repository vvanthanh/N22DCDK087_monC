#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void readAndDisplayJoke(const string& jokeFile) {
    ifstream inputFile(jokeFile);

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open joke file." << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        cout << line << endl;
    }

    inputFile.close();
}

void readAndDisplayPunchline(const string& punchlineFile) {
    ifstream inputFile(punchlineFile);

    if (!inputFile.is_open()) {
        cerr << "Error: Could not open punchline file." << endl;
        return;
    }

    string line;
    string lastLine;

    while (getline(inputFile, line)) {
        lastLine = line;
    }

    cout << "Punchline: " << lastLine << endl;

    inputFile.close();
}

int main() {
    const string jokeFile = "joke.txt";
    const string punchlineFile = "punchline.txt";

    cout << "Joke:" << endl;
    readAndDisplayJoke(jokeFile);

    cout << "\n";

    cout << "Punchline:" << endl;
    readAndDisplayPunchline(punchlineFile);

    return 0;
}
