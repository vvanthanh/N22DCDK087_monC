#include <iostream>

using namespace std;

int main() {
    const double tMPG = 23.5;   // townMilesPerGallon
    const double hMPG = 28.9;   // highwayMilesPerGallon
    const double tSize = 20.0;  // tankSizeGallons

    double tDist = tSize * tMPG;  // townDistance
    double hDist = tSize * hMPG;  // highwayDistance

    cout << "When driven in town, the car can travel " << tDist << " miles on one tank of gas." << endl;
    cout << "When driven on the highway, the car can travel " << hDist << " miles on one tank of gas." << endl;

    return 0;
}
