#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false; // If there's a divisor between 2 and the square root of num, it's not prime
        }
    }

    return true; // If no divisors are found, it's prime
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    return 0;
}
