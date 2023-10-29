#include <iostream>
#include <fstream>
using namespace std;

const int MONTHS = 3;
const int DAYS_PER_MONTH = 30;

// Function to read weather data from a file into a 3x30 array.
void readWeatherData(char data[MONTHS][DAYS_PER_MONTH]) {
    ifstream inputFile("RainOrShine.txt");

    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        exit(1);
    }

    for (int month = 0; month < MONTHS; month++) {
        for (int day = 0; day < DAYS_PER_MONTH; day++) {
            inputFile >> data[month][day];
        }
    }

    inputFile.close();
}

// Function to calculate and display the weather report.
void generateWeatherReport(const char data[MONTHS][DAYS_PER_MONTH]) {
    const char weatherTypes[] = { 'R', 'C', 'S' };
    string months[] = { "June", "July", "August" };
    int rainyCount, cloudyCount, sunnyCount;
    int maxRainyDays = 0;
    string monthWithMaxRainyDays;

    for (int month = 0; month < MONTHS; month++) {
        rainyCount = cloudyCount = sunnyCount = 0;
        for (int day = 0; day < DAYS_PER_MONTH; day++) {
            char weather = data[month][day];
            if (weather == weatherTypes[0]) {
                rainyCount++;
            }
            else if (weather == weatherTypes[1]) {
                cloudyCount++;
            }
            else if (weather == weatherTypes[2]) {
                sunnyCount++;
            }
        }

        cout << "Weather report for " << months[month] << ":\n";
        cout << "Rainy days: " << rainyCount << endl;
        cout << "Cloudy days: " << cloudyCount << endl;
        cout << "Sunny days: " << sunnyCount << endl;
        cout << endl;

        if (rainyCount > maxRainyDays) {
            maxRainyDays = rainyCount;
            monthWithMaxRainyDays = months[month];
        }
    }

    cout << "Month with the largest number of rainy days: " << monthWithMaxRainyDays << endl;
}

int main() {
    char weatherData[MONTHS][DAYS_PER_MONTH];

    readWeatherData(weatherData);
    generateWeatherReport(weatherData);

    return 0;
}
