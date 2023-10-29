#include <iostream>

using namespace std;

int main() {
    const double sqft_per_acre = 43560.0;
    double sqft = 391876.0;
    double acres = sqft / sqft_per_acre;

    cout << "The tract with " << sqft << " sqft is equivalent to " << acres << " acres." << endl;

    return 0;
}
