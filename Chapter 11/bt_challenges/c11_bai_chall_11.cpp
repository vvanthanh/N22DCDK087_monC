#include <iostream>
#include <string>
using namespace std;

struct MonthlyBudget {
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;
};

// Function to input expenses for each category
void enterExpenses(MonthlyBudget &budget) {
    cout << "Enter your monthly expenses in the following categories:\n";
    cout << "Housing: $";
    cin >> budget.housing;
    cout << "Utilities: $";
    cin >> budget.utilities;
    cout << "Household Expenses: $";
    cin >> budget.householdExpenses;
    cout << "Transportation: $";
    cin >> budget.transportation;
    cout << "Food: $";
    cin >> budget.food;
    cout << "Medical: $";
    cin >> budget.medical;
    cout << "Insurance: $";
    cin >> budget.insurance;
    cout << "Entertainment: $";
    cin >> budget.entertainment;
    cout << "Clothing: $";
    cin >> budget.clothing;
    cout << "Miscellaneous: $";
    cin >> budget.miscellaneous;
}

// Function to display a report
void displayReport(const MonthlyBudget &budget) {
    double totalExpenses = budget.housing + budget.utilities + budget.householdExpenses + budget.transportation +
                          budget.food + budget.medical + budget.insurance + budget.entertainment +
                          budget.clothing + budget.miscellaneous;
    
    cout << "Monthly Budget Report\n";
    cout << "Category\tBudget\tActual\tDifference\n";
    cout << "-----------------------------------------\n";
    
    cout << "Housing\t\t$500.00\t$" << budget.housing << "\t$" << budget.housing - 500.0 << endl;
    cout << "Utilities\t$150.00\t$" << budget.utilities << "\t$" << budget.utilities - 150.0 << endl;
    cout << "Household Expenses\t$65.00\t$" << budget.householdExpenses << "\t$" << budget.householdExpenses - 65.0 << endl;
    cout << "Transportation\t$50.00\t$" << budget.transportation << "\t$" << budget.transportation - 50.0 << endl;
    cout << "Food\t\t$250.00\t$" << budget.food << "\t$" << budget.food - 250.0 << endl;
    cout << "Medical\t\t$30.00\t$" << budget.medical << "\t$" << budget.medical - 30.0 << endl;
    cout << "Insurance\t$100.00\t$" << budget.insurance << "\t$" << budget.insurance - 100.0 << endl;
    cout << "Entertainment\t$150.00\t$" << budget.entertainment << "\t$" << budget.entertainment - 150.0 << endl;
    cout << "Clothing\t$75.00\t$" << budget.clothing << "\t$" << budget.clothing - 75.0 << endl;
    cout << "Miscellaneous\t$50.00\t$" << budget.miscellaneous << "\t$" << budget.miscellaneous - 50.0 << endl;
    
    cout << "-----------------------------------------\n";
    cout << "Total\t\t$1000.00\t$" << totalExpenses << "\t$" << totalExpenses - 1000.0 << endl;
}

int main() {
    MonthlyBudget budget;
    
    enterExpenses(budget);
    displayReport(budget);
    
    return 0;
}
