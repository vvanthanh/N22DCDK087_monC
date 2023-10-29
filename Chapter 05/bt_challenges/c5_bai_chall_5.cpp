#include <iostream>
using namespace std;

int main() {
    double membershipFee = 2500; // Initial membership fee
    double annualIncrease = 0.04; // 4% annual increase

    cout << "Year\tMembership Fee" << endl;
    
    for (int year = 1; year <= 6; year++) {
        cout << year << "\t$" << membershipFee << endl;
        membershipFee += membershipFee * annualIncrease; // Increase the fee by 4% each year
    }

    return 0;
}
