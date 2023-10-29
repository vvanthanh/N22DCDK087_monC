#include <iostream>
#include <iomanip>
using namespace std;

class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    // Default Constructor
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    // Constructor #2
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        if (itemNum >= 0 && itemCost >= 0 && itemQuantity >= 0) {
            itemNumber = itemNum;
            cost = itemCost;
            quantity = itemQuantity;
            setTotalCost();
        }
        else {
            cout << "Invalid input. Negative values not allowed." << endl;
            itemNumber = 0;
            quantity = 0;
            cost = 0.0;
            totalCost = 0.0;
        }
    }

    // Member function to set item number
    void setItemNumber(int itemNum) {
        if (itemNum >= 0) {
            itemNumber = itemNum;
        }
        else {
            cout << "Invalid item number. Negative value not allowed." << endl;
        }
    }

    // Member function to set quantity
    void setQuantity(int itemQuantity) {
        if (itemQuantity >= 0) {
            quantity = itemQuantity;
            setTotalCost();
        }
        else {
            cout << "Invalid quantity. Negative value not allowed." << endl;
        }
    }

    // Member function to set cost
    void setCost(double itemCost) {
        if (itemCost >= 0) {
            cost = itemCost;
            setTotalCost();
        }
        else {
            cout << "Invalid cost. Negative value not allowed." << endl;
        }
    }

    // Member function to calculate and set total cost
    void setTotalCost() {
        totalCost = quantity * cost;
    }

    // Member function to get item number
    int getItemNumber() {
        return itemNumber;
    }

    // Member function to get quantity
    int getQuantity() {
        return quantity;
    }

    // Member function to get cost
    double getCost() {
        return cost;
    }

    // Member function to get total cost
    double getTotalCost() {
        return totalCost;
    }
};

int main() {
    // Create an Inventory object
    Inventory item1;

    // Set the item
