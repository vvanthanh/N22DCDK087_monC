#include <iostream>
using namespace std;

int main() {
    double startTime, callMinutes, callRate;
    
    // Prompt the user for input
    cout << "Enter the starting time (HH.MM): ";
    cin >> startTime;
    
    // Input validation
    int hours = static_cast<int>(startTime);
    int minutes = static_cast<int>((startTime - hours) * 100);
    
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
        cout << "Invalid time entered. Time should be in the format HH.MM (0-23 hours, 0-59 minutes)." << endl;
        return 1; // Exit the program with an error code
    }
    
    cout << "Enter the number of minutes of the call: ";
    cin >> callMinutes;
    
    // Calculate the call rate based on the starting time
    if (startTime >= 0.0 && startTime <= 6.99) {
        callRate = 0.05;
    } else if (startTime >= 7.0 && startTime <= 19.0) {
        callRate = 0.45;
    } else {
        callRate = 0.20;
    }
    
    // Calculate and display the charges
    double totalCharge = callMinutes * callRate;
    cout << "Charges for the call: $" << totalCharge << endl;
    
    return 0; // Exit the program
}
