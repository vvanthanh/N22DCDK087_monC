#include <iostream>
#include <cctype> // for isdigit, isupper, and islower functions
using namespace std;

int main() {
    string password;
    bool hasUppercase = false;
    bool hasLowercase = false;
    bool hasDigit = false;

    cout << "Please enter your password: ";
    cin >> password;

    if (password.length() < 6) {
        cout << "Password is too short. It should be at least six characters long." << endl;
    } else {
        for (char c : password) {
            if (isupper(c)) {
                hasUppercase = true;
            } else if (islower(c)) {
                hasLowercase = true;
            } else if (isdigit(c)) {
                hasDigit = true;
            }
        }

        if (hasUppercase && hasLowercase && hasDigit) {
            cout << "Password is valid." << endl;
        } else {
            cout << "Password does not meet the criteria:" << endl;
            if (!hasUppercase) {
                cout << "- It should contain at least one uppercase letter." << endl;
            }
            if (!hasLowercase) {
                cout << "- It should contain at least one lowercase letter." << endl;
            }
            if (!hasDigit) {
                cout << "- It should have at least one digit." << endl;
            }
        }
    }

    return 0;
}
