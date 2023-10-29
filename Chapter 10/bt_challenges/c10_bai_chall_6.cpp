#include <iostream>
#include <cstring>
using namespace std;

int countVowels(const char* str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
        str++;
    }
    return count;
}

int countConsonants(const char* str) {
    int count = 0;
    while (*str) {
        char ch = tolower(*str);
        if (isalpha(ch) && ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u')
            count++;
        str++;
    }
    return count;
}

int main() {
    char input[100];
    int choice;

    while (true) {
        cout << "Enter a string: ";
        cin.getline(input, sizeof(input));

        cout << "Menu:\n";
        cout << "A) Count the number of vowels in the string\n";
        cout << "B) Count the number of consonants in the string\n";
        cout << "C) Count both the vowels and consonants in the string\n";
        cout << "D) Enter another string\n";
        cout << "E) Exit the program\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the input buffer.

        switch (choice) {
            case 'A':
            case 'a':
                cout << "Number of vowels: " << countVowels(input) << endl;
                break;
            case 'B':
            case 'b':
                cout << "Number of consonants: " << countConsonants(input) << endl;
                break;
            case 'C':
            case 'c':
                cout << "Number of vowels: " << countVowels(input) << endl;
                cout << "Number of consonants: " << countConsonants(input) << endl;
                break;
            case 'D':
            case 'd':
                continue; // Continue to enter another string.
            case 'E':
            case 'e':
                cout << "Exiting the program. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
