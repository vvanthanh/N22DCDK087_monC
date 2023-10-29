#include <iostream>
using namespace std;

int main() {
    const int MAX_SCORES = 10; // Maximum number of test scores
    int scores[MAX_SCORES];    // Array to store test scores

    cout << "Enter " << MAX_SCORES << " test scores:" << endl;

    // Read test scores from the user
    for (int i = 0; i < MAX_SCORES; i++) {
        cout << "Enter score " << (i + 1) << ": ";
        cin >> scores[i];
    }

    // Find and remove the lowest score
    int lowest = scores[0];
    int lowestIndex = 0;

    for (int i = 1; i < MAX_SCORES; i++) {
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowestIndex = i;
        }
    }

    // Shift the remaining scores to remove the lowest score
    for (int i = lowestIndex; i < MAX_SCORES - 1; i++) {
        scores[i] = scores[i + 1];
    }

    // Calculate the average of the remaining scores
    int sum = 0;
    for (int i = 0; i < MAX_SCORES - 1; i++) {
        sum += scores[i];
    }
    double average = static_cast<double>(sum) / (MAX_SCORES - 1);

    cout << "The lowest score has been dropped." << endl;
    cout << "The average of the remaining scores is: " << average << endl;

    return 0;
}
