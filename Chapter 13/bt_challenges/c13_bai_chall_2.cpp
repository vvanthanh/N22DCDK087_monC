#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int idNumber;
    string department;
    string position;

public:
    // Constructor with all arguments
    Employee(string empName, int empID, string empDepartment, string empPosition) {
        name = empName;
        idNumber = empID;
        department = empDepartment;
        position = empPosition;
    }

    // Constructor with name and ID, empty department and position
    Employee(string empName, int empID) {
        name = empName;
        idNumber = empID;
        department = "";
        position = "";
    }

    // Default constructor
    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    // Mutator functions
    void setName(string empName) {
        name = empName;
    }

    void setIdNumber(int empID) {
        idNumber = empID;
    }

    void setDepartment(string empDepartment) {
        department = empDepartment;
    }

    void setPosition(string empPosition) {
        position = empPosition;
    }

    // Accessor functions
    string getName() {
        return name;
    }

    int getIdNumber() {
        return idNumber;
    }

    string getDepartment() {
        return department;
    }

    string getPosition() {
        return position;
    }
};

int main() {
    Employee employee1("Susan Meyers", 47899, "Accounting", "Vice President");
    Employee employee2("Mark Jones", 39119, "IT", "Programmer");
    Employee employee3("Joy Rogers", 81774, "Manufacturing", "Engineer");

    // Display employee information
    cout << "Employee 1: " << employee1.getName() << ", ID: " << employee1.getIdNumber()
         << ", Department: " << employee1.getDepartment() << ", Position: " << employee1.getPosition() << endl;

    cout << "Employee 2: " << employee2.getName() << ", ID: " << employee2.getIdNumber()
         << ", Department: " << employee2.getDepartment() << ", Position: " << employee2.getPosition() << endl;

    cout << "Employee 3: " << employee3.getName() << ", ID: " << employee3.getIdNumber()
         << ", Department: " << employee3.getDepartment() << ", Position: " << employee3.getPosition() << endl;

    return 0;
}
