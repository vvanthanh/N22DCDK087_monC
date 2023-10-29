#include <iostream>
#include <string>

// Function to find the most frequently appearing character in a C-string or a string object
char findMostFrequentCharacter(const char* cstr) {
    if (cstr == nullptr) {
        // Handle null pointer
        std::cerr << "Error: Null pointer passed.\n";
        return '\0';
    }

    // Create an array to count character frequencies
    int charCount[256] = {0};  // Assuming ASCII characters

    char mostFrequentChar = '\0';
    int maxCount = 0;

    // Count character frequencies
    for (int i = 0; cstr[i] != '\0'; i++) {
        char currentChar = cstr[i];
        charCount[currentChar]++;
        if (charCount[currentChar] > maxCount) {
            maxCount = charCount[currentChar];
            mostFrequentChar = currentChar;
        }
    }

    return mostFrequentChar;
}

int main() {
    // Test the function with a C-string
    const char* cString = "hello, world!";
    char mostFrequentCharC = findMostFrequentCharacter(cString);

    // Test the function with a string object
    std::string str = "programming";
    char mostFrequentCharStr = findMostFrequentCharacter(str.c_str());

    std::cout << "Most frequent character in C-string: " << mostFrequentCharC << std::endl;
    std::cout << "Most frequent character in string object: " << mostFrequentCharStr << std::endl;

    return 0;
}
