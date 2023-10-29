#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Starting number to square
    const int MAX_NUMBER = 10; // Maximum number to square

    int num = MIN_NUMBER; // Counter

    cout << "Number\tNumber Squared\n";
    cout << "-------------------------\n";
    while (num <= MAX_NUMBER)
    {
        cout << num << "\t\t" << (num * num) << endl;
        num++; // Increment the counter.
    }

    return 0;
}
