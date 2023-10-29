#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    string name;
    int adult, child;
    const double aPrice = 10.00;
    const double cPrice = 6.00;
    const double distSharePct = 0.8;

    cout << "Movie: ";
    getline(cin, name);
    cout << "Adults: ";
    cin >> adult;
    cout << "Children: ";
    cin >> child;

    double gross = (adult * aPrice) + (child * cPrice);
    double distShare = gross * (1 - distSharePct);
    double net = gross - distShare;

    cout << fixed << setprecision(2);
    cout << "Movie: \"" << name << "\"" << endl;
    cout << "Adults: " << adult << endl;
    cout << "Child: " << child << endl;
    cout << "Gross: $ " << gross << endl;
    cout << "Net: $ " << net << endl;
    cout << "Distributor: $ " << distShare << endl;

    return 0;
}
