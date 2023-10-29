#include <iostream>
using namespace std;

int main() {
    double calories, fatGrams;

    // Input
    cout << "Enter the number of calories in the food: ";
    cin >> calories;
    cout << "Enter the number of fat grams in the food: ";
    cin >> fatGrams;

    // Input validation
    if (calories < 0 || fatGrams < 0 || fatGrams * 9 > calories) {
        cout << "Error: Invalid input. Calories and fat grams must be non-negative, and fat calories cannot exceed total calories." << endl;
    } else {
        // Calculate fat calories
        double fatCalories = fatGrams * 9;
        // Calculate the percentage of calories from fat
        double fatPercentage = (fatCalories / calories) * 100;

        // Output
        cout << "Percentage of calories from fat: " << fatPercentage << "%" << endl;

        if (fatPercentage < 30) {
            cout << "This food is low in fat." << endl;
        }
    }

    return 0;
}
