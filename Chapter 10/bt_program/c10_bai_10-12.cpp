#include <iostream>
using namespace std;

// Function prototype for stringCopy
void stringCopy(char [], char []);

int main()
{
    const int LENGTH = 30; // Size of the arrays
    char first[LENGTH];    // To hold the user's input
    char second[LENGTH];   // To hold the copy

    // Get a string from the user and store it in 'first.'
    cout << "Enter a string with no more than "
         << (LENGTH - 1) << " characters:\n";
    cin.getline(first, LENGTH);

    // Copy the contents of 'first' to 'second.'
    stringCopy(first, second);

    // Display the copied string.
    cout << "The string you entered is:\n" << second << endl;

    return 0;
}

// Definition of the stringCopy function.
// This function copies the C-string in 'string1' to 'string2.'
void stringCopy(char string1[], char string2[])
{
    int index = 0; // Loop counter

    // Step through 'string1,' copying each element to 'string2.'
    // Stop when the null character ('\0') is encountered.
    while (string1[index] != '\0')
    {
        string2[index] = string1[index];
        index++;
    }

    // Place a null character in 'string2' to terminate it.
    string2[index] = '\0';
}
