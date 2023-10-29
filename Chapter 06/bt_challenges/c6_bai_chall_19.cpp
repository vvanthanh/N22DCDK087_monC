#include <iostream>
#include <fstream> // Include the file handling library
using namespace std;

class Hospital
{
private:
    string name;
    int patients;
    double income;

public:
    Hospital(string n, int p, double i)
    {
        name = n;
        patients = p;
        income = i;
    }

    void print()
    {
        cout << "Hospital Name: " << name << endl;
        cout << "Number of Patients: " << patients << endl;
        cout << "Income: $" << income << endl;
    }

    // Overloaded function to write to a file
    void print(ofstream &file)
    {
        file << "Hospital Name: " << name << endl;
        file << "Number of Patients: " << patients << endl;
        file << "Income: $" << income << endl;
    }
};

int main()
{
    ofstream outputFile("hospital_report.txt"); // Open the file for writing

    if (!outputFile.is_open())
    {
        cout << "Error opening the file." << endl;
        return 1;
    }

    Hospital h1("General Hospital", 150, 75000.0);
    Hospital h2("City Clinic", 80, 45000.0);

    cout << "Hospital Report:\n";
    h1.print();
    cout << endl;
    h2.print();
    cout << endl;

    // Write the report to the file
    outputFile << "Hospital Report:\n";
    h1.print(outputFile);
    outputFile << endl;
    h2.print(outputFile);
    outputFile << endl;

    outputFile.close(); // Close the file

    return 0;
}
