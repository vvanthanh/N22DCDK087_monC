#include <iostream>

using namespace std;

int main() {
    // Ocean's level rise rate (in millimeters per year)
    double riseRate = 1.5;

    // Number of years
    int years5 = 5;
    int years7 = 7;
    int years10 = 10;

    // Calculate the rise in millimeters for each year
    double rise5 = riseRate * years5;
    double rise7 = riseRate * years7;
    double rise10 = riseRate * years10;

    // Display the results
    cout << "In " << years5 << " years, the ocean's level will be " << rise5 << " millimeters higher." << endl;
    cout << "In " << years7 << " years, the ocean's level will be " << rise7 << " millimeters higher." << endl;
    cout << "In " << years10 << " years, the ocean's level will be " << rise10 << " millimeters higher." << endl;

    return 0;
}
