#include <iostream>
#include <string>
using namespace std;

// Define a structure for storing date information
struct Date
{
    int month;
    int day;
    int year;
};

// Define a structure for storing a place/address
struct Place
{
    string address;
    string city;
    string state;
    string zip;
};

// Define a structure to store employee information
struct EmployeeInfo
{
    string name;
    int employeeNumber;
    Date birthDate; // Nested structure
    Place residence; // Nested structure
};

int main()
{
    // Create an instance of the EmployeeInfo structure to hold the manager's information
    EmployeeInfo manager;

    // Get the manager's name and employee number
    cout << "Enter the manager's name: ";
    getline(cin, manager.name);
    cout << "Enter the manager's employee number: ";
    cin >> manager.employeeNumber;

    // Get the manager's birth date
    cout << "Now enter the manager's date of birth." << endl;
    cout << "Month (up to 2 digits): ";
    cin >> manager.birthDate.month;
    cout << "Day (up to 2 digits): ";
    cin >> manager.birthDate.day;
    cout << "Year: ";
    cin >> manager.birthDate.year;
    cin.ignore(); // Skip the remaining newline character

    // Get the manager's residence information
    cout << "Enter the manager's street address: ";
    getline(cin, manager.residence.address);
    cout << "City: ";
    getline(cin, manager.residence.city);
    cout << "State: ";
    getline(cin, manager.residence.state);
    cout << "ZIP Code: ";
    getline(cin, manager.residence.zip);

    // Display the information just entered
    cout << "\nHere is the manager's information:\n";
    cout << manager.name << endl;
    cout << "Employee number " << manager.employeeNumber << endl;
    cout << "Date of birth: " << manager.birthDate.month << "-";
    cout << manager.birthDate.day << "-";
    cout << manager.birthDate.year << endl;
    cout << "Place of residence:" << endl;
    cout << manager.residence.address << endl;
    cout << manager.residence.city << ", ";
    cout << manager.residence.state << " ";
    cout << manager.residence.zip << endl;

    return 0;
}
