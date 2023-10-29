#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    
    cout << "Enter a series of single-digit numbers with no spaces: ";
    cin >> input;

    int sum = 0;
    char highest = '0';
    char lowest = '9';

    for (char digit : input) {
        if (isdigit(digit)) {
            int num = digit - '0'; // Convert char to int
            sum += num;

            if (digit > highest) {
                highest = digit;
            }

            if (digit < lowest) {
                lowest = digit;
            }
        }
    }

    cout << "Sum of single-digit numbers: " << sum << endl;
    cout << "Highest digit: " << highest << endl;
    cout << "Lowest digit: " << lowest << endl;

    return 0;
}
