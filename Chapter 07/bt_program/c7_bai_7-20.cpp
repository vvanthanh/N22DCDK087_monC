#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main() {
    const int SIZE = 4; // Array size
    double testScores[SIZE], // Array of test scores
           total,            // Total of the scores
           lowestScore,      // Lowest test score
           average;          // Average test score

    // Set up numeric output formatting.
    cout << fixed << showpoint << setprecision(1);

    // Get the test scores from the user.
    getTestScores(testScores, SIZE);

    // Get the total of the test scores.
    total = getTotal(testScores, SIZE);

    // Get the lowest test score.
    lowestScore = getLowest(testScores, SIZE);

    // Subtract the lowest score from the total.
    total -= lowestScore;

    // Calculate the average. Divide by 3 because
    // the lowest test score was dropped.
    average = total / (SIZE - 1);

    // Display the average.
    cout << "The average with the lowest score "
         << "dropped is " << average << ".\n";

    return 0;
}

// Define the getTestScores function (placeholder)
void getTestScores(double scores[], int size) {
    // You can implement this function to get test scores from the user.
}

// Define the getTotal function (placeholder)
double getTotal(const double scores[], int size) {
    // You can implement this function to calculate the total of the scores.
}

// Define the getLowest function (placeholder)
double getLowest(const double scores[], int size) {
    // You can implement this function to find the lowest test score.
}