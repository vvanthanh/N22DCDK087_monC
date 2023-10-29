#include <iostream>
using namespace std;

int main() {
    // Display the table header
    cout << "Celsius  Fahrenheit" << endl;

    for (int celsius = 0; celsius <= 20; celsius++) {
        // Convert Celsius to Fahrenheit
        double fahrenheit = (static_cast<double>(celsius) * 9 / 5) + 32;

        // Display the temperature in both Celsius and Fahrenheit
        cout << celsius << "        " << fahrenheit << endl;
    }

    return 0;
}
