#include <iostream>
using namespace std;

int main() {
    const int NUM_QUESTIONS = 20;
    char correctAnswers[NUM_QUESTIONS] = {'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D',
                                          'A', 'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B'};
    char studentAnswers[NUM_QUESTIONS];
    int correctCount = 0;
    int incorrectCount = 0;
    int incorrectQuestions[NUM_QUESTIONS];
    
    // Input: Ask the user to enter student's answers
    cout << "Enter the student's answers for each of the 20 questions (A, B, C, or D):\n";
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << "Question " << (i + 1) << ": ";
        cin >> studentAnswers[i];
        
        // Input validation: Check if the answer is A, B, C, or D
        while (studentAnswers[i] != 'A' && studentAnswers[i] != 'B' &&
               studentAnswers[i] != 'C' && studentAnswers[i] != 'D') {
            cout << "Invalid answer. Please enter A, B, C, or D: ";
            cin >> studentAnswers[i];
        }
    }
    
    // Grading
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        if (studentAnswers[i] == correctAnswers[i]) {
            correctCount++;
        } else {
            incorrectQuestions[incorrectCount] = i + 1; // Store the question number
            incorrectCount++;
        }
    }
    
    // Output: Display the results
    cout << "Results:\n";
    cout << "Total number of correctly answered questions: " << correctCount << endl;
    cout << "Total number of incorrectly answered questions: " << incorrectCount << endl;
    
    if (correctCount >= 15) {
        cout << "The student passed the exam." << endl;
    } else {
        cout << "The student failed the exam." << endl;
    }
    
    if (incorrectCount > 0) {
        cout << "List of incorrectly answered questions:";
        for (int i = 0; i < incorrectCount; i++) {
            cout << " " << incorrectQuestions[i];
        }
        cout << endl;
    }
    
    return 0;
}
