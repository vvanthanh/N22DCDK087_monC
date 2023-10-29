#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate two random numbers between 1 and 1000
    int num1 = rand() % 1000 + 1;
    int num2 = rand() % 1000 + 1;

    // Calculate the correct answer
    int correctAnswer = num1 + num2;

    // Display the addition problem
    cout << num1 << " + " << num2 << endl;
    cout << "Enter your answer: ";

    // Read the student's answer
    int userAnswer;
    cin >> userAnswer;

    // Check if the answer is correct
    if (userAnswer == correctAnswer) {
        cout << "Congratulations! Your answer is correct." << endl;
    } else {
        cout << "Sorry, your answer is incorrect." << endl;
        cout << "The correct answer is: " << correctAnswer << endl;
    }

    return 0;
}
