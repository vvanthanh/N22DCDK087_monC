#include <iostream>
using namespace std;

class Demo
{
public:
    Demo(); // Constructor
};

Demo::Demo()
{
    cout << "Welcome to the constructor!\n";
}

int main()
{
    Demo demoObject; // Define a Demo object;

    cout << "This program demonstrates an object\n";
    cout << "with a constructor.\n";
    return 0;
}
