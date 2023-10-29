#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct DivData {
    string name;
    int qtr;
    double sales;
};

int main() {
    const int NUM_DIV = 4;
    const int NUM_QTR = 4;
    DivData data[NUM_DIV][NUM_QTR];
    
    ofstream outputFile("div_data.txt"); 

    if (!outputFile.is_open()) {
        cout << "Error opening the file for writing." << endl;
        return 1;
    }

    for (int div = 0; div < NUM_DIV; div++) {
        for (int qtr = 0; qtr < NUM_QTR; qtr++) {
            cout << "Enter division name (e.g., East, West, North, South): ";
            cin >> data[div][qtr].name;

            cout << "Enter quarter (1, 2, 3, or 4): ";
            cin >> data[div][qtr].qtr;

            do {
                cout << "Enter sales for " << data[div][qtr].name
                     << " in quarter " << data[div][qtr].qtr << ": ";
                cin >> data[div][qtr].sales;

                if (data[div][qtr].sales < 0) {
                    cout << "Sales figure cannot be negative. Please enter a valid value." << endl;
                }
            } while (data[div][qtr].sales < 0);

            outputFile << data[div][qtr].name << " "
                       << data[div][qtr].qtr << " "
                       << data[div][qtr].sales << endl;
        }
    }

    outputFile.close();
    
    cout << "Data has been written to the file 'div_data.txt'." << endl;

    return 0;
}
