#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Starting value
    const int MAX_NUMBER = 10; // Ending value
    int num;

    cout << "Number\tNumber Squared\n";
    cout << "-------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
