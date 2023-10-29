#include <iostream>

using namespace std;

int main() {
    double caloriesPerMinute = 3.6;
    
    // Display the header
    cout << "Minutes\tCalories Burned" << endl;
    cout << "-------------------------" << endl;

    // Calculate and display the calories burned for each interval
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        double caloriesBurned = caloriesPerMinute * minutes;
        cout << minutes << "\t" << caloriesBurned << endl;
    }

    return 0;
}
