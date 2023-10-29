#include <iostream>
#include <string>

using namespace std;

struct Customer {
    string name;
    int accountNumber;
    double balance;
};

// Function to search for customer accounts by name
void searchAccountsByName(Customer customers[], int numCustomers, const string& name) {
    bool found = false;

    cout << "Matching accounts for name: " << name << endl;
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].name.find(name) != string::npos) {
            cout << "Name: " << customers[i].name << ", Account Number: " << customers[i].accountNumber << ", Balance: " << customers[i].balance << endl;
            found = true;
        }
    }

    if (!found) {
        cout << "No accounts match the given name." << endl;
    }
}

int main() {
    const int numCustomers = 5;
    Customer customers[numCustomers] = {
        {"John Doe", 1001, 1500.0},
        {"Jane Smith", 1002, 2000.0},
        {"Alice Johnson", 1003, 3500.0},
        {"Bob Brown", 1004, 1800.0},
        {"Charlie Wilson", 1005, 2700.0}
    };

    string searchName;
    cout << "Enter a part of the customer's name to search for: ";
    cin >> searchName;

    searchAccountsByName(customers, numCustomers, searchName);

    return 0;
}
