#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;

    if (num % 2 == 0 || num % 3 == 0) return false;

    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }

    return true;
}

int main() {
    const int start = 1;
    const int end = 100;

    ofstream primeFile("primes.txt");

    if (!primeFile.is_open()) {
        cerr << "Error opening file for writing." << endl;
        return 1;
    }

    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            primeFile << num << endl;
        }
    }

    primeFile.close();

    cout << "Prime numbers from " << start << " to " << end << " have been written to 'primes.txt'." << endl;

    return 0;
}
