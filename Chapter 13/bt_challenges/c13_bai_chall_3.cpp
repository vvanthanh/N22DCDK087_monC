#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    int yearModel;
    string make;
    int speed;

public:
    Car(int year, string carMake) {
        yearModel = year;
        make = carMake;
        speed = 0;
    }

    int getYearModel() {
        return yearModel;
    }

    string getMake() {
        return make;
    }

    int getSpeed() {
        return speed;
    }

    void accelerate() {
        speed += 5;
    }

    void brake() {
        if (speed >= 5) {
            speed -= 5;
        } else {
            speed = 0;
        }
    }
};

int main() {
    Car myCar(2022, "Toyota");

    cout << "Car Details:\n";
    cout << "Year: " << myCar.getYearModel() << endl;
    cout << "Make: " << myCar.getMake() << endl;
    cout << "Speed: " << myCar.getSpeed() << " mph\n\n";

    cout << "Accelerating the car...\n";
    for (int i = 1; i <= 5; i++) {
        myCar.accelerate();
        cout << "Speed after acceleration " << i << ": " << myCar.getSpeed() << " mph\n";
    }

    cout << "\nBraking the car...\n";
    for (int i = 1; i <= 5; i++) {
        myCar.brake();
        cout << "Speed after braking " << i << ": " << myCar.getSpeed() << " mph\n";
    }

    return 0;
}
