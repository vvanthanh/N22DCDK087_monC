#include <iostream>
#include <algorithm>

void getTestScores(double* scores, int numScores);
void sortScores(double* scores, int numScores);
double calculateAverage(const double* scores, int numScores);

int main() {
    int numScores;

    std::cout << "Enter the number of test scores: ";
    std::cin >> numScores;

    if (numScores <= 0) {
        std::cout << "Invalid input. Number of scores must be positive." << std::endl;
        return 1;
    }

    double* scores = new double[numScores];

    getTestScores(scores, numScores);
    sortScores(scores, numScores);

    std::cout << "Sorted test scores:" << std::endl;
    for (int i = 0; i < numScores; ++i) {
        std::cout << scores[i] << " ";
    }
    std::cout << std::endl;

    double average = calculateAverage(scores, numScores);
    std::cout << "Average score: " << average << std::endl;

    delete[] scores; // Remember to free the dynamically allocated memory
    return 0;
}

void getTestScores(double* scores, int numScores) {
    for (int i = 0; i < numScores; ++i) {
        do {
            std::cout << "Enter test score #" << i + 1 << ": ";
            std::cin >> scores[i];
        } while (scores[i] < 0);
    }
}

void sortScores(double* scores, int numScores) {
    std::sort(scores, scores + numScores);
}

double calculateAverage(const double* scores, int numScores) {
    double sum = 0.0;
    for (int i = 0; i < numScores; ++i) {
        sum += scores[i];
    }
    return sum / numScores;
}
