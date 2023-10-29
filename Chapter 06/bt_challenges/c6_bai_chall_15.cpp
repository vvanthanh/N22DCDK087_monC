#include <iostream>
using namespace std;

// Function to calculate total charges for in-patients
double calculateTotalCharges(int days, double dailyRate, double medicationCharges, double serviceCharges) {
    if (days < 0 || dailyRate < 0 || medicationCharges < 0 || serviceCharges < 0) {
        return -1; // Invalid input, return -1
    }
    return (days * dailyRate) + medicationCharges + serviceCharges;
}

// Function to calculate total charges for out-patients
double calculateTotalCharges(double medicationCharges, double serviceCharges) {
    if (medicationCharges < 0 || serviceCharges < 0) {
        return -1; // Invalid input, return -1
    }
    return medicationCharges + serviceCharges;
}

int main() {
    char patientType;
    cout << "Was the patient admitted as an in-patient (I) or an out-patient (O)? ";
    cin >> patientType;

    if (patientType == 'I' || patientType == 'i') {
        int days;
        double dailyRate, medicationCharges, serviceCharges;
        cout << "Enter the number of days spent in the hospital: ";
        cin >> days;
        cout << "Enter the daily rate: ";
        cin >> dailyRate;
        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;
        cout << "Enter charges for hospital services: ";
        cin >> serviceCharges;

        double totalCharges = calculateTotalCharges(days, dailyRate, medicationCharges, serviceCharges);

        if (totalCharges >= 0) {
            cout << "Total charges for the in-patient: $" << totalCharges << endl;
        } else {
            cout << "Invalid input. Please enter non-negative values for all fields." << endl;
        }
    } else if (patientType == 'O' || patientType == 'o') {
        double medicationCharges, serviceCharges;
        cout << "Enter hospital medication charges: ";
        cin >> medicationCharges;
        cout << "Enter charges for hospital services: ";
        cin >> serviceCharges;

        double totalCharges = calculateTotalCharges(medicationCharges, serviceCharges);

        if (totalCharges >= 0) {
            cout << "Total charges for the out-patient: $" << totalCharges << endl;
        } else {
            cout << "Invalid input. Please enter non-negative values for all fields." << endl;
        }
    } else {
        cout << "Invalid input. Please enter 'I' for in-patient or 'O' for out-patient." << endl;
    }

    return 0;
}
