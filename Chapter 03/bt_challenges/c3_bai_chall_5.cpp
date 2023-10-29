#include <iostream>
using namespace std;

int main() {
    int numMales, numFemales;
    
    // Ask the user for the number of males and females
    cout << "Enter the number of males in the class: ";
    cin >> numMales;

    cout << "Enter the number of females in the class: ";
    cin >> numFemales;

    // Calculate the total number of students
    int totalStudents = numMales + numFemales;

    // Calculate the percentage of males and females
    double malePercentage = (static_cast<double>(numMales) / totalStudents) * 100;
    double femalePercentage = (static_cast<double>(numFemales) / totalStudents) * 100;

    // Display the results
    cout << "Percentage of males: " << malePercentage << "%" << endl;
    cout << "Percentage of females: " << femalePercentage << "%" << endl;

    return 0;
}
