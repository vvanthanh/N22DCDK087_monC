#include <iostream>
#include <string>

using namespace std;

// The PatientAccount class
class PatientAccount {
public:
    PatientAccount(double dailyRate) : totalCharges(0), daysInHospital(0), dailyRate(dailyRate) {}

    void addDailyCharge() {
        totalCharges += dailyRate;
        daysInHospital++;
    }

    void updateCharges(double amount) {
        totalCharges += amount;
    }

    double getTotalCharges() {
        return totalCharges;
    }

private:
    double totalCharges;
    int daysInHospital;
    double dailyRate;
};

// The Surgery class
class Surgery {
public:
    Surgery() : surgeryCharges{500, 1000, 1500, 2000, 2500} {}

    double getSurgeryCharge(int type) {
        return surgeryCharges[type];
    }

private:
    double surgeryCharges[5];
};

// The Pharmacy class
class Pharmacy {
public:
    Pharmacy() : medicationPrices{10, 20, 30, 40, 50} {}

    double getMedicationPrice(int type) {
        return medicationPrices[type];
    }

private:
    double medicationPrices[5];
};

int main() {
    PatientAccount patientAccount(1000);  // Assuming a daily rate of $1000
    Surgery surgery;
    Pharmacy pharmacy;

    int surgeryType, medicationType;
    while (true) {
        cout << "Enter the type of surgery (0-4) or -1 to exit: ";
        cin >> surgeryType;

        if (surgeryType == -1) {
            break;
        }

        if (surgeryType >= 0 && surgeryType < 5) {
            double surgeryCharge = surgery.getSurgeryCharge(surgeryType);
            patientAccount.updateCharges(surgeryCharge);
        } else {
            cout << "Invalid surgery type." << endl;
        }

        cout << "Enter the type of medication (0-4) or -1 to exit: ";
        cin >> medicationType;

        if (medicationType == -1) {
            break;
        }

        if (medicationType >= 0 && medicationType < 5) {
            double medicationPrice = pharmacy.getMedicationPrice(medicationType);
            patientAccount.updateCharges(medicationPrice);
        } else {
            cout << "Invalid medication type." << endl;
        }
    }

    cout << "Enter the number of days in the hospital: ";
    int days;
    cin >> days;

    for (int i = 0; i < days; i++) {
        patientAccount.addDailyCharge();
    }

    cout << "Total charges: $" << patientAccount.getTotalCharges() << endl;

    return 0;
}

