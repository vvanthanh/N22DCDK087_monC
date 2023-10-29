#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void decryptFile(const string& inputFileName, const string& outputFileName) {
    ifstream inputFile(inputFileName, ios::binary);
    ofstream outputFile(outputFileName, ios::binary);

    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open input file." << endl;
        return;
    }

    if (!outputFile.is_open()) {
        cerr << "Error: Unable to open output file." << endl;
        return;
    }

    char key = 'X'; // You should use the same key used for encryption.

    char ch;
    while (inputFile.get(ch)) {
        ch = ch ^ key; // XOR decryption with the same key used for encryption
        outputFile.put(ch);
    }

    inputFile.close();
    outputFile.close();

    cout << "Decryption completed. Decrypted data saved to " << outputFileName << endl;
}

int main() {
    string inputFileName = "encoded_file.txt"; // Replace with your input file
    string outputFileName = "decrypted_file.txt"; // Replace with your output file

    decryptFile(inputFileName, outputFileName);

    return 0;
}
