#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    // Constants for tax rates
    const double STATE_SALES_TAX_RATE = 0.04;
    const double COUNTY_SALES_TAX_RATE = 0.02;
    const double TOTAL_SALES_TAX_RATE = 0.06;

    string month;
    int year;
    double totalCollected;

    cout << "Enter the month: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter the total amount collected: $";
    cin >> totalCollected;

    // Calculate the product sales
    double productSales = totalCollected / (1 + TOTAL_SALES_TAX_RATE);

    // Calculate the sales tax amounts
    double stateSalesTax = productSales * STATE_SALES_TAX_RATE;
    double countySalesTax = productSales * COUNTY_SALES_TAX_RATE;
    double totalSalesTax = stateSalesTax + countySalesTax;

    // Display the report
    cout << "Month: " << month << endl;
    cout << "--------------------" << endl;
    cout << fixed << setprecision(2);
    cout << "Total Collected: $ " << totalCollected << endl;
    cout << "Sales: $ " << productSales << endl;
    cout << "County Sales Tax: $ " << countySalesTax << endl;
    cout << "State Sales Tax: $ " << stateSalesTax << endl;
    cout << "Total Sales Tax: $ " << totalSalesTax << endl;

    return 0;
}

