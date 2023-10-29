#include <iostream>
#include <cstdlib> // For rand and srand
#include <ctime>   // For the time function
using namespace std;

// Function prototype
int *getRandomNumbers(int);

int main()
{
    int *numbers = nullptr; // To point to the numbers

    // Get an array of five random numbers.
    numbers = getRandomNumbers(5);

    // Display the numbers.
    for (int count = 0; count < 5; count++)
        cout << numbers[count] << endl;

    // Free the memory.
    delete[] numbers;
    numbers = nullptr; // Setting the pointer to nullptr is a good practice after deletion.
    return 0;
}

// The getRandomNumbers function returns a pointer
// to an array of random integers. The parameter
// indicates the number of numbers requested.
int *getRandomNumbers(int num)
{
    int *arr = nullptr; // Array to hold the numbers

    // Return a null pointer if num is zero or negative.
    if (num <= 0)
        return nullptr;

    // Dynamically allocate the array.
    arr = new int[num];

    // Seed the random number generator by passing
    // the return value of time(0) to srand.
