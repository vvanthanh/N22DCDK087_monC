#include <iostream>

using namespace std;

class TestScores {
private:
    double score1;
    double score2;
    double score3;

public:
    TestScores() {
        score1 = 0.0;
        score2 = 0.0;
        score3 = 0.0;
    }

    void setScores(double s1, double s2, double s3) {
        score1 = s1;
        score2 = s2;
        score3 = s3;
    }

    double getAverage() {
        return (score1 + score2 + score3) / 3.0;
    }
};

int main() {
    double score1, score2, score3;

    cout << "Enter three test scores: ";
    cin >> score1 >> score2 >> score3;

    TestScores scoresObject;
    scoresObject.setScores(score1, score2, score3);

    double average = scoresObject.getAverage();

    cout << "Average test score: " << average << endl;

    return 0;
}
