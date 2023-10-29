#include <iostream>
#include <string>
using namespace std;

// Define a structure to store weather data
struct WeatherData {
    double totalRainfall;
    double highTemperature;
    double lowTemperature;
    double averageTemperature;
};

int main() {
    const int numMonths = 12;
    WeatherData monthlyData[numMonths];

    double totalYearlyRainfall = 0.0;
    double highestTemperature = -100.0;
    double lowestTemperature = 140.0;
    double totalAverageTemperature = 0.0;

    for (int month = 0; month < numMonths; month++) {
        cout << "Enter weather data for Month " << month + 1 << ":" << endl;

        cout << "Total Rainfall (in inches): ";
        cin >> monthlyData[month].totalRainfall;
        totalYearlyRainfall += monthlyData[month].totalRainfall;

        cout << "High Temperature (in degrees Fahrenheit): ";
        cin >> monthlyData[month].highTemperature;
        highestTemperature = max(highestTemperature, monthlyData[month].highTemperature);
        lowestTemperature = min(lowestTemperature, monthlyData[month].highTemperature);

        cout << "Low Temperature (in degrees Fahrenheit): ";
        cin >> monthlyData[month].lowTemperature;
        highestTemperature = max(highestTemperature, monthlyData[month].lowTemperature);
        lowestTemperature = min(lowestTemperature, monthlyData[month].lowTemperature);

        // Calculate the average temperature
        monthlyData[month].averageTemperature = (monthlyData[month].highTemperature + monthlyData[month].lowTemperature) / 2.0;
        totalAverageTemperature += monthlyData[month].averageTemperature;
    }

    double averageMonthlyRainfall = totalYearlyRainfall / numMonths;
    double averageMonthlyAverageTemperature = totalAverageTemperature / numMonths;

    cout << "\nWeather Statistics for the Year:" << endl;
    cout << "Average Monthly Rainfall: " << averageMonthlyRainfall << " inches" << endl;
    cout << "Total Yearly Rainfall: " << totalYearlyRainfall << " inches" << endl;
    cout << "Highest Temperature for the Year: " << highestTemperature << " degrees Fahrenheit" << endl;
    cout << "Lowest Temperature for the Year: " << lowestTemperature << " degrees Fahrenheit" << endl;
    cout << "Average of All Monthly Average Temperatures: " << averageMonthlyAverageTemperature << " degrees Fahrenheit" << endl;

    return 0;
}
