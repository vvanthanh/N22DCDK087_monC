#include <iostream>
using namespace std;

int main() {
    const int cookiesPerBag = 30;
    const int servingsPerBag = 10;
    const int caloriesPerServing = 300;

    int cookiesEaten;

    cout << "Enter the number of cookies you ate: ";
    cin >> cookiesEaten;

    if (cookiesEaten < 0) {
        cout << "Please enter a non-negative number of cookies." << endl;
    } else {
        int servingsConsumed = cookiesEaten / (cookiesPerBag / servingsPerBag);
        int totalCaloriesConsumed = servingsConsumed * caloriesPerServing;

        cout << "You consumed " << servingsConsumed << " servings." << endl;
        cout << "Total calories consumed: " << totalCaloriesConsumed << " calories." << endl;
    }

    return 0;
}
