#include <iostream>

using namespace std;

int main() {
    int cust = 16500; // Total customers surveyed
    double pctE = 0.15; // Percentage purchasing energy drinks
    double pctC = 0.58; // Percentage preferring citrus-flavored

    int custE = cust * pctE;
    int custC = custE * pctC;

    cout << "Approx. customers purchasing energy drinks: " << custE << endl;
    cout << "Approx. customers preferring citrus-flavored: " << custC << endl;

    return 0;
}
