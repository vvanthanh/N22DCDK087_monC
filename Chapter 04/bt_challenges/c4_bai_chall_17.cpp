#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

struct Vault {
    string date;
    double height;
};

bool isValidHeight(double height) {
    return (height >= 2.0 && height <= 5.0);
}

int main() {
    string vaulterName;
    vector<Vault> vaults;

    cout << "Enter the name of the pole vaulter: ";
    getline(cin, vaulterName);

    for (int i = 1; i <= 3; i++) {
        cout << "Enter the date of vault " << i << ": ";
        string date;
        cin >> date;

        double height;
        do {
            cout << "Enter the height (between 2.0 and 5.0 meters) of vault " << i << ": ";
            cin >> height;
            if (!isValidHeight(height)) {
                cout << "Invalid height. Please enter a height between 2.0 and 5.0 meters." << endl;
            }
        } while (!isValidHeight(height));

        vaults.push_back({date, height});
    }

    // Sort vaults in descending order of height
    sort(vaults.begin(), vaults.end(), [](const Vault &a, const Vault &b) {
        return a.height > b.height;
    });

    cout << "Vault heights for " << vaulterName << " (in descending order):" << endl;
    for (const Vault &vault : vaults) {
        cout << "Date: " << vault.date << ", Height: " << vault.height << " meters" << endl;
    }

    return 0;
}
