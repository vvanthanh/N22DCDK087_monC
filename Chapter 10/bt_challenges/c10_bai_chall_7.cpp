#include <iostream>
#include <string>

using namespace std;

int main() {
    const int MAX_NAME_LENGTH = 50;

    char first[MAX_NAME_LENGTH];
    char middle[MAX_NAME_LENGTH];
    char last[MAX_NAME_LENGTH];

    cout << "Enter your first name: ";
    cin.getline(first, MAX_NAME_LENGTH);

    cout << "Enter your middle name: ";
    cin.getline(middle, MAX_NAME_LENGTH);

    cout << "Enter your last name: ";
    cin.getline(last, MAX_NAME_LENGTH);

    char fullName[MAX_NAME_LENGTH * 3]; // The maximum length needed for the full name

    // Combine the names into the desired format
    sprintf(fullName, "%s, %s %s", last, first, middle);

    cout << "Full Name: " << fullName << endl;

    return 0;
}
