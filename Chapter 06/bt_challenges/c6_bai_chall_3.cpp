#include <iostream>
using namespace std;

double getSales(string divisionName) {
    double sales;
    cout << "Enter quarterly sales for " << divisionName << ": $";
    cin >> sales;

    while (sales < 0.0) {
        cout << "Sales cannot be negative. Enter quarterly sales for " << divisionName << " again: $";
        cin >> sales;
    }

    return sales;
}

void findHighest(double northeastSales, double southeastSales, double northwestSales, double southwestSales) {
    double highestSales = northeastSales;
    string highestDivision = "Northeast";

    if (southeastSales > highestSales) {
        highestSales = southeastSales;
        highestDivision = "Southeast";
    }
    if (northwestSales > highestSales) {
        highestSales = northwestSales;
        highestDivision = "Northwest";
    }
    if (southwestSales > highestSales) {
        highestSales = southwestSales;
        highestDivision = "Southwest";
    }

    cout << "The division with the highest sales is " << highestDivision << " with $"
         << highestSales << " in sales." << endl;
}

int main() {
    double northeastSales = getSales("Northeast");
    double southeastSales = getSales("Southeast");
    double northwestSales = getSales("Northwest");
    double southwestSales = getSales("Southwest");

    findHighest(northeastSales, southeastSales, northwestSales, southwestSales);

    return 0;
}
