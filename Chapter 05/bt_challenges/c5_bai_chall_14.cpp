#include <iostream>
#include <string>

using namespace std;

int main() {
    int numStudents;

    // Get the number of students and validate the input
    do {
        cout << "Enter the number of students (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Invalid input. Please enter a number between 1 and 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    string firstName;
    string firstStudent;
    string lastStudent;

    // Loop to read the names of students
    for (int i = 1; i <= numStudents; i++) {
        cout << "Enter the name of student " << i << ": ";
        cin >> firstName;

        if (i == 1) {
            firstStudent = firstName;
            lastStudent = firstName;
        } else {
            if (firstName < firstStudent) {
                firstStudent = firstName;
            } else if (firstName > lastStudent) {
                lastStudent = firstName;
            }
        }
    }

    // Report the student at the front and at the end of the line
    cout << "The student at the front of the line is: " << firstStudent << endl;
    cout << "The student at the end of the line is: " << lastStudent << endl;

    return 0;
}
