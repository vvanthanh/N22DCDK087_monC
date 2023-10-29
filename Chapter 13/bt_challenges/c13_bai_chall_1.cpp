#include <iostream>
#include <string>

using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) : month(m), day(d), year(y) {}

    void printDate1() {
        cout << month << '/' << day << '/' << year << endl;
    }

    void printDate2() {
        const string months[] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << months[month - 1] << " " << day << ", " << year << endl;
    }

    void printDate3() {
        const string months[] = {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
        };

        cout << day << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    int month, day, year;

    // Get user input with input validation
    do {
        cout << "Enter a month (1-12): ";
        cin >> month;
    } while (month < 1 || month > 12);

    do {
        cout << "Enter a day (1-31): ";
        cin >> day;
    } while (day < 1 || day > 31);

    cout << "Enter a year: ";
    cin >> year;

    Date date(month, day, year);

    cout << "Date in the form MM/DD/YYYY: ";
    date.printDate1();

    cout << "Date in the form Month DD, YYYY: ";
    date.printDate2();

    cout << "Date in the form DD Month YYYY: ";
    date.printDate3();

    return 0;
}
