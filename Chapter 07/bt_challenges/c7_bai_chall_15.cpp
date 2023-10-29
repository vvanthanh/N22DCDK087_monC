#include <iostream>
#include <vector>
using namespace std;

// Function prototypes
bool testPIN(const vector<int> &originalPIN, const vector<int> &enteredPIN);

int main()
{
    vector<int> pin1 = {1, 2, 3, 4, 5};
    vector<int> pin2 = {0, 2, 3, 7, 8};
    vector<int> pin3 = {1, 2, 3, 4, 5};

    if (testPIN(pin1, pin2))
        cout << "PINs match.\n";
    else
        cout << "PINs do not match.\n";

    if (testPIN(pin1, pin3))
        cout << "PINs match.\n";
    else
        cout << "PINs do not match.\n";

    return 0;
}

// Function to test whether two PINs are the same
bool testPIN(const vector<int> &originalPIN, const vector<int> &enteredPIN)
{
    if (originalPIN.size() != enteredPIN.size())
        return false;

    for (size_t i = 0; i < originalPIN.size(); i++)
    {
        if (originalPIN[i] != enteredPIN[i])
            return false;
    }

    return true;
}
