#include <iostream>

using namespace std;

int main()
{
    char choice;

    cout << "Enter A, B, or C: ";
    cin >> choice;
    switch (choice)
    {
    case 'A': cout << "You entered A.\n"; break;
    case 'B': cout << "You entered B.\n"; break;
    case 'C': cout << "You entered C.\n"; break;
    default: cout << "You did not enter A, B, or C!\n"; break;
    }

    return 0;
}
