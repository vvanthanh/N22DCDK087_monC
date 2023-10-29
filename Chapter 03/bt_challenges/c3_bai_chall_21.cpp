#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double slicesPerPizza = 8; // 8 slices in a pizza

    int numberOfPeople;
    double pizzaDiameter;

    cout << "Enter the number of people at the party: ";
    cin >> numberOfPeople;

    cout << "Enter the diameter of the pizzas to be ordered (in inches): ";
    cin >> pizzaDiameter;

    // Calculate the area of a single pizza
    double singlePizzaArea = M_PI * pow(pizzaDiameter / 2, 2);

    // Calculate the total number of slices needed
    double slicesNeeded = numberOfPeople * 4; // 4 slices per person

    // Calculate the number of pizzas needed
    int pizzasNeeded = static_cast<int>(ceil(slicesNeeded / slicesPerPizza));

    cout << "You should order " << pizzasNeeded << " pizzas for the party." << endl;

    return 0;
}
