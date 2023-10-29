#include <iostream>
#include <string>

using namespace std;

const int NUM_STUDENTS = 5;
const int NUM_TESTS = 4;

// Function to calculate the average and assign a letter grade
char calculateLetterGrade(double average) {
    if (average >= 90 && average <= 100) {
        return 'A';
    } else if (average >= 80 && average < 90) {
        return 'B';
    } else if (average >= 70 && average < 80) {
        return 'C';
    } else if (average >= 60 && average < 70) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    string studentNames[NUM_STUDENTS];
    char letterGrades[NUM_STUDENTS];
    double testScores[NUM_STUDENTS][NUM_TESTS];

    // Input student names and test scores
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        getline(cin, studentNames[i]);

        double totalScore = 0;
        for (int j = 0; j < NUM_TESTS; j++) {
            do {
                cout << "Enter test score " << j + 1 << " for " << studentNames[i] << ": ";
                cin >> testScores[i][j];

                if (testScores[i][j] < 0 || testScores[i][j] > 100) {
                    cout << "Invalid input. Test scores must be between 0 and 100. Please try again." << endl;
                }
            } while (testScores[i][j] < 0 || testScores[i][j] > 100);

            totalScore += testScores[i][j];
        }

        // Calculate the average and assign a letter grade
        double average = totalScore / NUM_TESTS;
        letterGrades[i] = calculateLetterGrade(average);
    }

    // Display results
    cout << "\nStudent Results:" << endl;
    for (int i = 0; i < NUM_STUDENTS; i++) {
        cout << "Student: " << studentNames[i] << endl;
        cout << "Average Score: " << testScores[i][0] << endl;
        cout << "Letter Grade: " << letterGrades[i] << endl;
        cout << "----------------------------------" << endl;
    }

    return 0;
}
