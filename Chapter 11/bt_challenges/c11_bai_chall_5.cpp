#include <iostream>
using namespace std;

// Define an enumerated data type for months
enum Month { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

int main()
{
    const int SIZE = 20;
    Month months[SIZE]; // Array of enumerated type

    // Fill the array with months
    for (int x = 0; x < SIZE; x++)
    {
        months[x] = static_cast<Month>(x); // Assign the corresponding month to each element
    }

    // Display the months
    for (int x = 0; x < SIZE; x++)
    {
        switch (months[x])
        {
            case JANUARY:
                cout << "January ";
                break;
            case FEBRUARY:
                cout << "February ";
                break;
            case MARCH:
                cout << "March ";
                break;
            case APRIL:
                cout << "April ";
                break;
            case MAY:
                cout << "May ";
                break;
            case JUNE:
                cout << "June ";
                break;
            case JULY:
                cout << "July ";
                break;
            case AUGUST:
                cout << "August ";
                break;
            case SEPTEMBER:
                cout << "September ";
                break;
            case OCTOBER:
                cout << "October ";
                break;
            case NOVEMBER:
                cout << "November ";
                break;
            case DECEMBER:
                cout << "December ";
                break;
            default:
                cout << "Invalid Month ";
        }
    }
    cout << endl;

    return 0;
}
