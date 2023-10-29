#include <iostream>
#include <string>
using namespace std;

void sortScores(int* scores, string* names, int numStudents);
void displayScores(int* scores, string* names, int numStudents);

int main() {
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    int* scores = new int[numStudents];
    string* names = new string[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter student name: ";
        cin >> names[i];
        cout << "Enter student score: ";
        cin >> scores[i];
    }

    sortScores(scores, names, numStudents);
    displayScores(scores, names, numStudents);

    // Free memory
    delete[] scores;
    delete[] names;

    return 0;
}

void sortScores(int* scores, string* names, int numStudents) {
    for (int i = 0; i < numStudents - 1; i++) {
        for (int j = 0; j < numStudents - i - 1; j++) {
            if (scores[j] > scores[j + 1]) {
                // Swap scores
                int tempScore = scores[j];
                scores[j] = scores[j + 1];
                scores[j + 1] = tempScore;

                // Swap names
                string tempName = names[j];
                names[j] = names[j + 1];
                names[j + 1] = tempName;
            }
        }
    }
}

void displayScores(int* scores, string* names, int numStudents) {
    cout << "Sorted scores:" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << names[i] << ": " << scores[i] << endl;
    }
}
