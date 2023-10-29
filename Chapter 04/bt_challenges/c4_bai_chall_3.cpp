#include <iostream>
using namespace std;

int main() {
    int month, day, year;

    cout << "Enter a month (in numeric form): ";
    cin >> month;
    
    cout << "Enter a day: ";
    cin >> day;
    
    cout << "Enter a two-digit year: ";
    cin >> year;

    // Calculate the result of month times day
    int result = month * day;

    // Check if the result is equal to the year
    if (result == year) {
        cout << "The date is magic!" << endl;
    } else {
        cout << "The date is not magic." << endl;
    }

    return 0;
}
