#include <iostream>

using namespace std;

// Function prototypes
void getJudgeData(double &score);
void calcScore(double scores[]);
int findLowest(double scores[]);
int findHighest(double scores[]);

int main() {
    double scores[5];

    for (int i = 0; i < 5; i++) {
        getJudgeData(scores[i]);
    }

    calcScore(scores);

    return 0;
}

void getJudgeData(double &score) {
    do {
        cout << "Enter a judge's score (0-10): ";
        cin >> score;
        if (score < 0 || score > 10) {
            cout << "Invalid score. Please enter a score between 0 and 10." << endl;
        }
    } while (score < 0 || score > 10);
}

int findLowest(double scores[]) {
    int lowestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (scores[i] < scores[lowestIndex]) {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

int findHighest(double scores[]) {
    int highestIndex = 0;
    for (int i = 1; i < 5; i++) {
        if (scores[i] > scores[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}

void calcScore(double scores[]) {
    int lowestIndex = findLowest(scores);
    int highestIndex = findHighest(scores);

    double total = 0;
    for (int i = 0; i < 5; i++) {
        if (i != lowestIndex && i != highestIndex) {
            total += scores[i];
        }
    }

    double average = total / 3;
    cout << "Contestant's final score: " << average << endl;
}
