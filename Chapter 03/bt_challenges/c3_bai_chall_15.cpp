#include <iostream>
using namespace std;

int main() {
    // Constants
    const double ASSESSMENT_PERCENT = 0.60;
    const double TAX_RATE = 0.0075;  // 75¢ per $100

    // Variables
    double actualValue, assessmentValue, propertyTax;

    // Input
    cout << "Enter the actual value of the property: $";
    cin >> actualValue;

    // Calculate assessment value
    assessmentValue = actualValue * ASSESSMENT_PERCENT;

    // Calculate property tax
    propertyTax = assessmentValue * TAX_RATE;

    // Display the results
    cout << "Assessment Value: $" << assessmentValue << endl;
    cout << "Property Tax: $" << propertyTax << endl;

    return 0;
}
