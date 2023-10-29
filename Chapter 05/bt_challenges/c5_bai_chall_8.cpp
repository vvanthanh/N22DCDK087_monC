#include <iostream>

using namespace std;

int main() {
    int choice;

    do {
        cout << "Math Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Goodbye!" << endl;
            break;
        } else if (choice < 1 || choice > 4) {
            cout << "Invalid choice. Please enter a valid option (1-5)." << endl;
        } else {
            double num1, num2, result;
            cout << "Enter the first number: ";
            cin >> num1;
            cout << "Enter the second number: ";
            cin >> num2;

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                    break;
                case 2:
                    result = num1 - num2;
                    cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                    break;
                case 3:
                    result = num1 * num2;
                    cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                    break;
                case 4:
                    if (num2 == 0) {
                        cout << "Error: Division by zero!" << endl;
                    } else {
                        result = num1 / num2;
                        cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                    }
                    break;
            }
        }
    } while (true);

    return 0;
}
