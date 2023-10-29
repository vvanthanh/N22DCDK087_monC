#include <iostream>
#include <fstream>

using namespace std;

int main() {
    string inputFileName = "input.txt";    // Replace with your input file name
    string outputFileName = "output.txt";  // Replace with your output file name
    int encryptionKey = 10;

    ifstream inputFile(inputFileName);

    if (!inputFile) {
        cerr << "Error opening input file." << endl;
        return 1;
    }

    ofstream outputFile(outputFileName);

    if (!outputFile) {
        cerr << "Error creating output file." << endl;
        return 1;
    }

    char ch;

    while (inputFile.get(ch)) {
        // Encrypt the character by adding the encryption key
        ch += encryptionKey;
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();

    cout << "File encrypted successfully." << endl;

    return 0;
}
