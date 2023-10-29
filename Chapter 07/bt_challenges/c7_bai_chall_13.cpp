#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

// Function to find and drop the lowest score
void dropLowestScore(vector<int>& scores) {
    if (scores.size() <= 1) {
        return; // No scores to drop
    }
    
    int lowest = scores[0];
    int lowestIndex = 0;
    
    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestIndex = i;
        }
    }
    
    scores.erase(scores.begin() + lowestIndex);
}

// Function to calculate the average of scores
double calculateAverage(const vector<int>& scores) {
    int sum = 0;
    for (int score : scores) {
        sum += score;
    }
    return static_cast<double>(sum) / scores.size();
}

// Function to determine the letter grade
char determineLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents, numTests;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the number of tests: ";
    cin >> numTests;

    vector<vector<int>> scores(numStudents);

    for (int student = 0; student < numStudents; student++) {
        cout << "Enter scores for Student " << student + 1 << ": ";
        for (int test = 0; test < numTests; test++) {
            int score;
            cin >> score;
            scores[student].push_back(score);
        }
        
        // Drop the lowest score for this student
        dropLowestScore(scores[student]);
    }

    cout << "\nStudent  Average  Letter Grade" << endl;
    for (int student = 0; student < numStudents; student++) {
        double average = calculateAverage(scores[student]);
        char letterGrade = determineLetterGrade(average);
        
        cout << "   " << student + 1 << "      " << fixed << setprecision(2) << average << "       " << letterGrade << endl;
    }

    return 0;
}
