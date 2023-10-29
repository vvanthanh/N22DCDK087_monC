#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUM_QUESTIONS = 20;

void readAnswersFromFile(const char* filename, char answers[])
{
    ifstream file(filename);
    if (!file)
    {
        cerr << "Error opening file: " << filename << endl;
        exit(1);
    }

    for (int i = 0; i < NUM_QUESTIONS; ++i)
    {
        if (!(file >> answers[i]))
        {
            cerr << "Error reading answer from file: " << filename << endl;
            exit(1);
        }
    }

    file.close();
}

int main()
{
    char correctAnswers[NUM_QUESTIONS];
    char studentAnswers[NUM_QUESTIONS];

    readAnswersFromFile("CorrectAnswers.txt", correctAnswers);
    readAnswersFromFile("StudentAnswers.txt", studentAnswers);

    int missedQuestions = 0;
    int correctlyAnswered = 0;

    cout << "Missed questions:\n";

    for (int i = 0; i < NUM_QUESTIONS; ++i)
    {
        cout << "Question " << (i + 1) << ": ";
        cout << "Correct: " << correctAnswers[i] << ", ";
        cout << "Student: " << studentAnswers[i] << "\n";

        if (correctAnswers[i] == studentAnswers[i])
        {
            correctlyAnswered++;
        }
        else
        {
            missedQuestions++;
        }
    }

    double percentage = static_cast<double>(correctlyAnswered) / NUM_QUESTIONS * 100;

    cout << "Total questions missed: " << missedQuestions << endl;
    cout << "Percentage answered correctly: " << fixed << setprecision(2) << percentage << "%" << endl;

    if (percentage >= 70)
    {
        cout << "The student passed the exam." << endl;
    }
    else
    {
        cout << "The student failed the exam." << endl;
    }

    return 0;
}
