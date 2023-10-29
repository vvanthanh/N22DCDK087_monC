#include <iostream>
#include <string>

class Temperature {
private:
    double temperature;

public:
    Temperature(double temp) {
        temperature = temp;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    double getTemperature() {
        return temperature;
    }

    bool isEthylFreezing() {
        return temperature <= -173;
    }

    bool isEthylBoiling() {
        return temperature >= 172;
    }

    bool isOxygenFreezing() {
        return temperature <= -362;
    }

    bool isOxygenBoiling() {
        return temperature >= -306;
    }

    bool isWaterFreezing() {
        return temperature <= 32;
    }

    bool isWaterBoiling() {
        return temperature >= 212;
    }
};

int main() {
    double inputTemperature;
    std::cout << "Enter a temperature: ";
    std::cin >> inputTemperature;

    Temperature temp(inputTemperature);

    std::cout << "Substances that will freeze at " << inputTemperature << " degrees:\n";
    if (temp.isEthylFreezing()) {
        std::cout << "Ethyl Alcohol\n";
    }
    if (temp.isOxygenFreezing()) {
        std::cout << "Oxygen\n";
    }
    if (temp.isWaterFreezing()) {
        std::cout << "Water\n";
    }

    std::cout << "Substances that will boil at " << inputTemperature << " degrees:\n";
    if (temp.isEthylBoiling()) {
        std::cout << "Ethyl Alcohol\n";
    }
    if (temp.isOxygenBoiling()) {
        std::cout << "Oxygen\n";
    }
    if (temp.isWaterBoiling()) {
        std::cout << "Water\n";
    }

    return 0;
}
