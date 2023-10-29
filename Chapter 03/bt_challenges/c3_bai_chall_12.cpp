#include <iostream>
using namespace std;

int main() {
    double celsius, fahrenheit;

    // Prompt the user to enter the temperature in Celsius
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula F = 9/5 * C + 32
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display the result
    cout << "Temperature in Fahrenheit: " << fahrenheit << " degrees Fahrenheit" << endl;

    return 0;
}
