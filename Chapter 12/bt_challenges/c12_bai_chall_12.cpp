#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct SalesData {
    string division;
    int quarter;
    double sales;
};

int main() {
    ifstream inputFile("salesdata.txt");
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open the input file." << endl;
        return 1;
    }

    vector<SalesData> salesData;
    string division;
    int quarter;
    double sales;

    while (inputFile >> division >> quarter >> sales) {
        SalesData data = {division, quarter, sales};
        salesData.push_back(data);
    }

    // Calculate and display the requested figures
    vector<double> corporateSales(4, 0.0);
    vector<double> divisionSalesA(4, 0.0);
    vector<double> divisionSalesB(4, 0.0);

    for (const SalesData &data : salesData) {
        int quarterIndex = data.quarter - 1;
        if (data.division == "A") {
            divisionSalesA[quarterIndex] += data.sales;
        } else if (data.division == "B") {
            divisionSalesB[quarterIndex] += data.sales;
        }
        corporateSales[quarterIndex] += data.sales;
    }

    double totalYearlyDivisionASales = accumulate(divisionSalesA.begin(), divisionSalesA.end(), 0.0);
    double totalYearlyDivisionBSales = accumulate(divisionSalesB.begin(), divisionSalesB.end(), 0.0);
    double totalYearlyCorporateSales = accumulate(corporateSales.begin(), corporateSales.end(), 0.0);
    double averageQuarterlyDivisionASales = totalYearlyDivisionASales / 4;
    double averageQuarterlyDivisionBSales = totalYearlyDivisionBSales / 4;

    auto maxQuarter = max_element(corporateSales.begin(), corporateSales.end());
    auto minQuarter = min_element(corporateSales.begin(), corporateSales.end());

    cout << "Total corporate sales for each quarter:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Quarter " << (i + 1) << ": " << corporateSales[i] << endl;
    }

    cout << "Total yearly sales for each division:\n";
    cout << "Division A: " << totalYearlyDivisionASales << endl;
    cout << "Division B: " << totalYearlyDivisionBSales << endl;

    cout << "Total yearly corporate sales: " << totalYearlyCorporateSales << endl;

    cout << "Average quarterly sales for Division A: " << averageQuarterlyDivisionASales << endl;
    cout << "Average quarterly sales for Division B: " << averageQuarterlyDivisionBSales << endl;

    cout << "Highest and Lowest Quarters for the Corporation:\n";
    cout << "Highest Quarter: " << (maxQuarter - corporateSales.begin() + 1) << " with sales " << *maxQuarter << endl;
    cout << "Lowest Quarter: " << (minQuarter - corporateSales.begin() + 1) << " with sales " << *minQuarter << endl;

    inputFile.close();
    return 0;
}
