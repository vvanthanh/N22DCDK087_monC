#include <iostream>

using namespace std;

// Function prototypes
void getScore(double &score);
void calcAverage(double scores[]);
int findLowest(double scores[]);

int main() {
    const int NUM_SCORES = 5;
    double scores[NUM_SCORES];

    // Get test scores from the user
    for (int i = 0; i < NUM_SCORES; i++) {
        getScore(scores[i]);
    }

    // Calculate and display the average of the four highest scores
    calcAverage(scores);

    return 0;
}

void getScore(double &score) {
    do {
        cout << "Enter a test score: ";
        cin >> score;

        // Validate the input
        if (score < 0 || score > 100) {
            cout << "Invalid input. Please enter a score between 0 and 100." << endl;
        }
    } while (score < 0 || score > 100);
}

int findLowest(double scores[]) {
    int lowestIndex = 0;
    double lowestScore = scores[0];

    for (int i = 1; i < 5; i++) {
        if (scores[i] < lowestScore) {
            lowestScore = scores[i];
            lowestIndex = i;
        }
    }

    return lowestIndex;
}

void calcAverage(double scores[]) {
    int lowestIndex = findLowest(scores);
    double sum = 0;

    for (int i = 0; i < 5; i++) {
        if (i != lowestIndex) {
            sum += scores[i];
        }
    }

    double average = sum / 4;
    cout << "The average of the four highest scores is: " << average << endl;
}
