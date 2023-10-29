#include <iostream>

using namespace std;

const int NUM_MONKEYS = 3;
const int NUM_DAYS = 5;

int main() {
    double foodEaten[NUM_MONKEYS][NUM_DAYS];
    double totalFoodEaten = 0;
    double minFoodEaten = numeric_limits<double>::max();
    double maxFoodEaten = numeric_limits<double>::min();

    // Input for food eaten by each monkey
    for (int monkey = 0; monkey < NUM_MONKEYS; monkey++) {
        cout << "Monkey " << monkey + 1 << " - Enter pounds of food eaten for 5 days:\n";
        for (int day = 0; day < NUM_DAYS; day++) {
            do {
                cout << "Day " << day + 1 << ": ";
                cin >> foodEaten[monkey][day];
                if (foodEaten[monkey][day] < 0) {
                    cout << "Please enter a non-negative value for food eaten.\n";
                }
            } while (foodEaten[monkey][day] < 0);

            totalFoodEaten += foodEaten[monkey][day];
            minFoodEaten = min(minFoodEaten, foodEaten[monkey][day]);
            maxFoodEaten = max(maxFoodEaten, foodEaten[monkey][day]);
        }
    }

    // Calculate and display the average amount of food eaten per day by all monkeys
    double averageFoodEaten = totalFoodEaten / (NUM_MONKEYS * NUM_DAYS);
    cout << "Average amount of food eaten per day by the whole family of monkeys: " << averageFoodEaten << " pounds\n";

    // Display the least and greatest amount of food eaten during the week
    cout << "Least amount of food eaten during the week by any one monkey: " << minFoodEaten << " pounds\n";
    cout << "Greatest amount of food eaten during the week by any one monkey: " << maxFoodEaten << " pounds\n";

    return 0;
}
