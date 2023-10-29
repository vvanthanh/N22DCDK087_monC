#include <iostream>
#include <string>
using namespace std;

struct Student {
    string Name;
    int Idnum;
    double* Tests;
    double Average;
    char Grade;
};

char calculateGrade(double average) {
    if (average >= 91) return 'A';
    else if (average >= 81) return 'B';
    else if (average >= 71) return 'C';
    else if (average >= 61) return 'D';
    else return 'F';
}

int main() {
    int numStudents, numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "Enter the number of tests: ";
    cin >> numTests;

    Student* students = new Student[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter Student " << i + 1 << " Name: ";
        cin >> students[i].Name;

        cout << "Enter Student " << i + 1 << " ID number: ";
        cin >> students[i].Idnum;

        students[i].Tests = new double[numTests];
        double total = 0;

        for (int j = 0; j < numTests; j++) {
            do {
                cout << "Enter Test Score " << j + 1 << " for Student " << i + 1 << ": ";
                cin >> students[i].Tests[j];
            } while (students[i].Tests[j] < 0);

            total += students[i].Tests[j];
        }

        students[i].Average = total / numTests;
        students[i].Grade = calculateGrade(students[i].Average);
    }

    // Display the table
    cout << "\nStudent Data:\n";
    cout << "Name\tID Number\tAverage\tGrade\n";
    for (int i = 0; i < numStudents; i++) {
        cout << students[i].Name << "\t" << students[i].Idnum << "\t" << students[i].Average << "\t" << students[i].Grade << endl;
    }

    // Cleanup: Deallocate dynamic memory
    for (int i = 0; i < numStudents; i++) {
        delete[] students[i].Tests;
    }
    delete[] students;

    return 0;
}
