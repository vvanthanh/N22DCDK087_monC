#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;

    // Input weight in pounds
    cout << "Enter your weight in pounds: ";
    cin >> weight;

    // Input height in inches
    cout << "Enter your height in inches: ";
    cin >> height;

    // Calculate BMI
    bmi = (weight * 703) / (height * height);

    // Display the calculated BMI
    cout << "Your BMI is: " << bmi << endl;

    // Determine the weight status
    if (bmi >= 18.5 && bmi <= 25) {
        cout << "You have optimal weight." << endl;
    } else if (bmi < 18.5) {
        cout << "You are underweight." << endl;
    } else {
        cout << "You are overweight." << endl;
    }

    return 0;
}
