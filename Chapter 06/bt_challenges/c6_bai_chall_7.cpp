#include <iostream>
using namespace std;

// Function to convert Fahrenheit to Celsius
double celsius(double fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

int main() {
    cout << "Fahrenheit to Celsius Conversion Table" << endl;
    cout << "-------------------------------------" << endl;
    cout << "Fahrenheit    Celsius" << endl;

    for (int fahrenheit = 0; fahrenheit <= 20; fahrenheit++) {
        double celsius_temp = celsius(fahrenheit);
        cout << fahrenheit << "            " << celsius_temp << endl;
    }

    return 0;
}
