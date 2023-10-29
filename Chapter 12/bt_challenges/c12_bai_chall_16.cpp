#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Define the customer structure
struct Customer {
    string name;
    string address;
    string cityStateZIP;
    string phoneNumber;
    double accountBalance;
    string lastPaymentDate;
};

// Function to add a new customer record to the file
void addCustomerRecord(ofstream& file) {
    Customer customer;
    cout << "Enter Customer Name: ";
    cin.ignore();
    getline(cin, customer.name);
    cout << "Enter Address: ";
    getline(cin, customer.address);
    cout << "Enter City, State, and ZIP: ";
    getline(cin, customer.cityStateZIP);
    cout << "Enter Telephone Number: ";
    getline(cin, customer.phoneNumber);
    cout << "Enter Account Balance: ";
    cin >> customer.accountBalance;
    cout << "Enter Date of Last Payment: ";
    cin.ignore();
    getline(cin, customer.lastPaymentDate);

    // Validate input
    if (customer.accountBalance < 0) {
        cout << "Invalid account balance. Please enter a non-negative balance." << endl;
        return;
    }

    // Write the customer record to the file
    file.write(reinterpret_cast<char*>(&customer), sizeof(Customer));
    cout << "Customer record added successfully." << endl;
}

// Function to search for a customer record by name and display it
void searchAndDisplayCustomerRecord(ifstream& file, const string& name) {
    Customer customer;
    bool found = false;

    while (file.read(reinterpret_cast<char*>(&customer), sizeof(Customer))) {
        if (customer.name == name) {
            found = true;
            cout << "Customer Record for " << name << ":" << endl;
            cout << "Name: " << customer.name << endl;
            cout << "Address: " << customer.address << endl;
            cout << "City, State, ZIP: " << customer.cityStateZIP << endl;
            cout << "Telephone Number: " << customer.phoneNumber << endl;
            cout << "Account Balance: " << customer.accountBalance << endl;
            cout << "Last Payment Date: " << customer.lastPaymentDate << endl;
        }
    }

    if (!found) {
        cout << "Customer record not found for " << name << endl;
    }
}

// Function to search for a customer record by name and delete it
void searchAndDeleteCustomerRecord(ifstream& file, ofstream& tempFile, const string& name) {
    Customer customer;
    bool found = false;

    while (file.read(reinterpret_cast<char*>(&customer), sizeof(Customer))) {
        if (customer.name == name) {
            found = true;
            cout << "Customer record for " << name << " deleted." << endl;
        } else {
            tempFile.write(reinterpret_cast<char*>(&customer), sizeof(Customer));
        }
    }

    if (!found) {
        cout << "Customer record not found for " << name << endl;
    }
}

// Function to search for a customer record by name and update it
void searchAndUpdateCustomerRecord(ifstream& file, ofstream& tempFile, const string& name) {
    Customer customer;
    bool found = false;

    while (file.read(reinterpret_cast<char*>(&customer), sizeof(Customer))) {
        if (customer.name == name) {
            found = true;
            cout << "Enter new information for " << name << ":" << endl;
            cout << "Enter Address: ";
            cin.ignore();
            getline(cin, customer.address);
            cout << "Enter City, State, and ZIP: ";
            getline(cin, customer.cityStateZIP);
            cout << "Enter Telephone Number: ";
            getline(cin, customer.phoneNumber);
            cout << "Enter Account Balance: ";
            cin >> customer.accountBalance;
            cout << "Enter Date of Last Payment: ";
            cin.ignore();
            getline(cin, customer.lastPaymentDate);

            // Validate input
            if (customer.accountBalance < 0) {
                cout << "Invalid account balance. Please enter a non-negative balance." << endl;
                tempFile.write(reinterpret_cast<char*>(&customer), sizeof(Customer));
                return;
            }

            tempFile.write(reinterpret_cast<char*>(&customer), sizeof(Customer));
            cout << "Customer record for " << name << " updated." << endl;
        } else {
            tempFile.write(reinterpret_cast<char*>(&customer), sizeof(Customer));
        }
    }

    if (!found) {
        cout << "Customer record not found for " << name << endl;
    }
}

// Function to display the contents of the entire file
void displayAllCustomerRecords(ifstream& file) {
    Customer customer;

    cout << "Customer Records:" << endl;
    while (file.read(reinterpret_cast<char*>(&customer), sizeof(Customer))) {
        cout << "Name: " << customer.name << endl;
        cout << "Address: " << customer.address << endl;
        cout << "City, State, ZIP: " << customer.cityStateZIP << endl;
        cout << "Telephone Number: " << customer.phoneNumber << endl;
        cout << "Account Balance: " << customer.accountBalance << endl;
        cout << "Last Payment Date: " << customer.lastPaymentDate << endl;
        cout << "-------------------------" << endl;
    }
}

int main() {
    ofstream outFile("customer_records.dat", ios::binary | ios::app);
    ifstream inFile("customer_records.dat", ios::binary);

    if (!outFile || !inFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    int choice;
    string searchName;

    do {
        cout << "Customer Account Management System" << endl;
        cout << "1. Enter new records" << endl;
        cout << "2. Search and display a customer record" << endl;
        cout << "3. Search and delete a customer record" << endl;
        cout << "4. Search and update a customer record" << endl;
        cout << "5. Display all records" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addCustomerRecord(outFile);
                break;
            case 2:
                cout << "Enter customer name to search: ";
                cin.ignore();
                getline(cin, searchName);
                searchAndDisplayCustomerRecord(inFile, searchName);
                break;
            case 3:
                cout << "Enter customer name to delete: ";
                cin.ignore();
                getline(cin, searchName);
                searchAndDeleteCustomerRecord(inFile, outFile, searchName);
                break;
            case 4:
                cout << "Enter customer name to update: ";
                cin.ignore();
                getline(cin, searchName);
                searchAndUpdateCustomerRecord(inFile, outFile, searchName);
                break;
            case 5:
                displayAllCustomerRecords(inFile);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please select a valid option." << endl;
        }
    } while (choice != 6);

    outFile.close();
    inFile.close();

    return 0;
}
