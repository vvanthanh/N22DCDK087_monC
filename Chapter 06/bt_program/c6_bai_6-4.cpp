#include <iostream>

using namespace std;

//*****************************************
// Definition of function deeper *
// This function displays a message. *
//*****************************************

void deeper()
{
    cout << "I am now inside the function deeper.\n";
}

//*****************************************
// Definition of function deep *
// This function displays a message. *
//*****************************************

void first()
{
    cout << "I am now inside the function first.\n";
}

void second()
{
    cout << "I am now inside the function second.\n";
}

int main()
{
    cout << "I am starting in function main.\n";
    first();
    second();
    cout << "Back in function main again.\n";
    return 0;
}

void deep()
{
    cout << "I am now inside the function deep.\n";
    deeper(); // Call function deeper
    cout << "Now I am back in deep.\n";
}

//*****************************************
// Function main *
//*****************************************

int main()
{
    cout << "I am starting in function main.\n";
    deep(); // Call function deep
    cout << "Back in function main again.\n";
    return 0;
}
