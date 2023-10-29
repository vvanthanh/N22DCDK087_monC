#include <iostream>
#include <fstream>
#include <cctype> // for islower and toupper functions

using namespace std;

int main() {
    string inputFileName, outputFileName;
    
    // Get the file names from the user
    cout << "Enter the name of the input file: ";
    cin >> inputFileName;
    cout << "Enter the name of the output file: ";
    cin >> outputFileName;

    // Open the input file for reading
    ifstream inputFile(inputFileName);
    
    // Check if the input file opened successfully
    if (!inputFile.is_open()) {
        cout << "Error opening the input file." << endl;
        return 1; // Exit with an error code
    }

    // Open the output file for writing
    ofstream outputFile(outputFileName);

    // Check if the output file opened successfully
    if (!outputFile.is_open()) {
        cout << "Error opening the output file." << endl;
        inputFile.close(); // Close the input file
        return 1; // Exit with an error code
    }

    bool newSentence = true;
    char c;

    // Process the input file character by character
    while (inputFile.get(c)) {
        if (newSentence) {
            // Uppercase the first character of the sentence
            outputFile.put(toupper(c));
            newSentence = false;
        } else {
            // Lowercase all other characters
            outputFile.put(tolower(c));
        }

        // Check if we've reached the end of a sentence
        if (c == '.') {
            newSentence = true;
        }
    }

    // Close the input and output files
    inputFile.close();
    outputFile.close();

    cout << "File conversion complete." << endl;

    return 0; // Exit with a success code
