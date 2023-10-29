#include <iostream>

using namespace std;

int main()
{
    int numDonations;
    
    cout << "Enter the number of donations: ";
    cin >> numDonations;

    // Dynamically allocate an array to store donations
    double* donations = new double[numDonations];

    // Input donations from the user
    cout << "Enter the donation amounts:\n";
    for (int i = 0; i < numDonations; i++)
    {
        cout << "Donation " << (i + 1) << ": ";
        cin >> donations[i];
    }

    // Calculate the total donations
    double total = 0;
    for (int i = 0; i < numDonations; i++)
    {
        total += donations[i];
    }

    // Display the total and average donations
    cout << "Total donations: $" << total << endl;
    if (numDonations > 0)
    {
        cout << "Average donation: $" << (total / numDonations) << endl;
    }
    else
    {
        cout << "No donations entered, so there is no average." << endl;
    }

    // Deallocate the dynamically allocated array
    delete[] donations;

    return 0;
}
