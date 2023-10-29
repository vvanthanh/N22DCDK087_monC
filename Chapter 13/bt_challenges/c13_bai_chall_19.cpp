#include <iostream>
#include <string>

using namespace std;

class Question {
private:
    string question;
    string answers[4];
    int correctAnswer;

public:
    Question(string q, string a1, string a2, string a3, string a4, int correct)
        : question(q), correctAnswer(correct) {
        answers[0] = a1;
        answers[1] = a2;
        answers[2] = a3;
        answers[3] = a4;
    }

    string getQuestion() {
        return question;
    }

    string getAnswer(int index) {
        if (index >= 0 && index < 4) {
            return answers[index];
        }
        return "Invalid index";
    }

    int getCorrectAnswer() {
        return correctAnswer;
    }
};

int main() {
    Question questions[10] = {
        Question("What is the capital of France?", "London", "Berlin", "Paris", "Madrid", 3),
        Question("Which planet is known as the Red Planet?", "Mars", "Venus", "Earth", "Jupiter", 1),
        Question("Who wrote 'Romeo and Juliet'?", "Charles Dickens", "William Shakespeare", "Jane Austen", "Leo Tolstoy", 2),
        Question("What is the largest mammal on Earth?", "Elephant", "Giraffe", "Blue Whale", "Lion", 3),
        Question("What is the chemical symbol for gold?", "Fe", "Au", "Ag", "Cu", 2),
        Question("How many continents are there on Earth?", "5", "6", "7", "8", 3),
        Question("What is the largest planet in our solar system?", "Venus", "Mars", "Earth", "Jupiter", 4),
        Question("What is the freezing point of water in Fahrenheit?", "32°F", "0°F", "100°F", "212°F", 1),
        Question("Which gas do plants absorb from the atmosphere?", "Oxygen", "Carbon Dioxide", "Nitrogen", "Hydrogen", 2),
        Question("What is the primary color of the sun?", "Red", "Yellow", "Green", "White", 2)
    };

    int player1Score = 0;
    int player2Score = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Player 1, here is your question:" << endl;
        cout << questions[i].getQuestion() << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << questions[i].getAnswer(j) << endl;
        }
        int player1Answer;
        cout << "Enter your answer (1-4): ";
        cin >> player1Answer;
        if (player1Answer == questions[i].getCorrectAnswer()) {
            cout << "Correct! You earn a point." << endl;
            player1Score++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << questions[i].getCorrectAnswer() << endl;
        }

        cout << "Player 2, here is your question:" << endl;
        cout << questions[i].getQuestion() << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << questions[i].getAnswer(j) << endl;
        }
        int player2Answer;
        cout << "Enter your answer (1-4): ";
        cin >> player2Answer;
        if (player2Answer == questions[i].getCorrectAnswer()) {
            cout << "Correct! You earn a point." << endl;
            player2Score++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << questions[i].getCorrectAnswer() << endl;
        }
    }

    cout << "Player 1's score: " << player1Score << endl;
    cout << "Player 2's score: " << player2Score << endl;

    if (player1Score > player2Score) {
        cout << "Player 1 wins!" << endl;
    }
    else if (player2Score > player1Score) {
        cout << "Player 2 wins!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}

