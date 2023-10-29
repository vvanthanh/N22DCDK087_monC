#include <iostream>
#include <string>
using namespace std;

const int MAX_ACCOUNTS = 10;

struct CustomerAccount {
    string name;
    string address;
    string cityStateZip;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

// Function prototypes
void displayMenu();
void addAccount(CustomerAccount[], int&);
void modifyAccount(CustomerAccount[], int);
void displayAllAccounts(const CustomerAccount[], int);

int main() {
    CustomerAccount accounts[MAX_ACCOUNTS];
    int numAccounts = 0;

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cin.ignore(); // Consume the newline character

        switch (choice) {
            case 1:
                addAccount(accounts, numAccounts);
                break;
            case 2:
                modifyAccount(accounts, numAccounts);
                break;
            case 3:
                displayAllAccounts(accounts, numAccounts);
                break;
            case 4:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 4);

    return 0;
}

void displayMenu() {
    cout << "Customer Account Management System" << endl;
    cout << "1. Add an Account" << endl;
    cout << "2. Modify an Account" << endl;
    cout << "3. Display All Accounts" << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice: ";
}

void addAccount(CustomerAccount accounts[], int& numAccounts) {
    if (numAccounts < MAX_ACCOUNTS) {
        CustomerAccount newAccount;

        cout << "Enter customer name: ";
        getline(cin, newAccount.name);
        cout << "Enter address: ";
        getline(cin, newAccount.address);
        cout << "Enter city, state, and ZIP: ";
        getline(cin, newAccount.cityStateZip);
        cout << "Enter telephone number: ";
        getline(cin, newAccount.phoneNumber);
        cout << "Enter account balance: $";
        cin >> newAccount.accountBalance;
        cin.ignore(); // Consume the newline character
        cout << "Enter date of last payment: ";
        getline(cin, newAccount.lastPaymentDate);

        accounts[numAccounts] = newAccount;
        numAccounts++;
        cout << "Account added successfully!" << endl;
    } else {
        cout << "Maximum number of accounts reached. Cannot add more." << endl;
    }
}

void modifyAccount(CustomerAccount accounts[], int numAccounts) {
    if (numAccounts == 0) {
        cout << "No accounts to modify. Please add an account first." << endl;
        return;
    }

    int accountNumber;
    cout << "Enter the account number to modify (1-" << numAccounts << "): ";
    cin >> accountNumber;
    cin.ignore(); // Consume the newline character

    if (accountNumber >= 1 && accountNumber <= numAccounts) {
        cout << "Modifying account number " << accountNumber << ":" << endl;
        cout << "Enter new customer name: ";
        getline(cin, accounts[accountNumber - 1].name);
        cout << "Enter new address: ";
        getline(cin, accounts[accountNumber - 1].address);
        cout << "Enter new city, state, and ZIP: ";
        getline(cin, accounts[accountNumber - 1].cityStateZip);
        cout << "Enter new telephone number: ";
        getline(cin, accounts[accountNumber - 1].phoneNumber);
        cout << "Enter new account balance: $";
        cin >> accounts[accountNumber - 1].accountBalance;
        cin.ignore(); // Consume the newline character
        cout << "Enter new date of last payment: ";
        getline(cin, accounts[accountNumber - 1].lastPaymentDate);
        cout << "Account modified successfully!" << endl;
    } else {
        cout << "Invalid account number. Please enter a valid account number." << endl;
    }
}

void displayAllAccounts(const CustomerAccount accounts[], int numAccounts) {
    if (numAccounts == 0) {
        cout << "No accounts to display. Please add an account first." << endl;
        return;
    }

    cout << "All Customer Accounts:" << endl;
    for (int i = 0; i < numAccounts; i++) {
        cout << "Account " << i + 1 << ":" << endl;
        cout << "Name: " << accounts[i].name << endl;
        cout << "Address: " << accounts[i].address << endl;
        cout << "City, State, ZIP: " << accounts[i].cityStateZip << endl;
        cout << "Telephone Number: " << accounts[i].phoneNumber << endl;
        cout << "Account Balance: $" << accounts[i].accountBalance << endl;
        cout << "Date of Last Payment: " << accounts[i].lastPaymentDate << endl;
        cout << "---------------------------" << endl;
    }
}
