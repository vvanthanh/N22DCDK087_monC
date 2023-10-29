#include <iostream>

class FloatArray {
private:
    float* data;
    int size;

public:
    FloatArray(int arraySize) {
        size = arraySize;
        data = new float[size];
    }

    ~FloatArray() {
        delete[] data;
    }

    void setElement(int index, float value) {
        if (index >= 0 && index < size) {
            data[index] = value;
        }
    }

    float getElement(int index) {
        if (index >= 0 && index < size) {
            return data[index];
        }
        return 0.0; // You can choose an appropriate default value or error handling here.
    }

    float getHighest() {
        float highest = data[0];
        for (int i = 1; i < size; i++) {
            if (data[i] > highest) {
                highest = data[i];
            }
        }
        return highest;
    }

    float getLowest() {
        float lowest = data[0];
        for (int i = 1; i < size; i++) {
            if (data[i] < lowest) {
                lowest = data[i];
            }
        }
        return lowest;
    }

    float getAverage() {
        float sum = 0;
        for (int i = 0; i < size; i++) {
            sum += data[i];
        }
        return (size > 0) ? sum / size : 0.0;
    }
};

int main() {
    using namespace std;

    int size = 5;
    FloatArray numbers(size);

    for (int i = 0; i < size; i++) {
        numbers.setElement(i, static_cast<float>(i));
    }

    cout << "Stored numbers: ";
    for (int i = 0; i < size; i++) {
        cout << numbers.getElement(i) << " ";
    }
    cout << endl;

    cout << "Highest value: " << numbers.getHighest() << endl;
    cout << "Lowest value: " << numbers.getLowest() << endl;
    cout << "Average: " << numbers.getAverage() << endl;

    return 0;
}
