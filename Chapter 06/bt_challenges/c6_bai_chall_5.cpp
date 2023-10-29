#include <iostream>
using namespace std;

// Function to calculate the falling distance
double fallingDistance(double time) {
    const double g = 9.8;  // Acceleration due to gravity (m/s^2)
    double distance = 0.5 * g * time * time;
    return distance;
}

int main() {
    for (int time = 1; time <= 10; time++) {
        double distance = fallingDistance(time);
        cout << "Time: " << time << " seconds - Falling Distance: " << distance << " meters" << endl;
    }

    return 0;
}
