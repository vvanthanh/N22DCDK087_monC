#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate two random numbers between 100 and 999
    int num1 = rand() % 900 + 100;
    int num2 = rand() % 900 + 100;

    // Display the math problem
    cout << num1 << endl;
    cout << "+" << endl;
    cout << num2 << endl;
    cout << "------" << endl;
    cout << "Press any key to see the answer...";

    // Wait for user input
    cin.get();

    // Calculate and display the correct solution
    int sum = num1 + num2;
    cout << num1 << endl;
    cout << "+" << endl;
    cout << num2 << endl;
    cout << "------" << endl;
    cout << sum << endl;

    return 0;
}
