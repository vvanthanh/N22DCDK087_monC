#include <iostream>
#include <string>

using namespace std;

class InventoryItem {
private:
    string description;
    double cost;
    int onHand;

public:
    InventoryItem(string desc, double c, int qty) {
        description = desc;
        cost = c;
        onHand = qty;
    }

    string getDescription() const {
        return description;
    }

    double getCost() const {
        return cost;
    }

    int getOnHand() const {
        return onHand;
    }

    void setOnHand(int qty) {
        onHand = qty;
    }
};

class CashRegister {
public:
    static const double PROFIT_PERCENT;
    static const double SALES_TAX_PERCENT;

    static double calculateUnitPrice(double cost) {
        return cost + cost * PROFIT_PERCENT;
    }

    static double calculatePurchaseTotal(double unitPrice, int quantity) {
        return unitPrice * quantity;
    }

    static double calculateSalesTax(double subtotal) {
        return subtotal * SALES_TAX_PERCENT;
    }
};

const double CashRegister::PROFIT_PERCENT = 0.30;
const double CashRegister::SALES_TAX_PERCENT = 0.06;

int main() {
    string itemDescription;
    double itemCost;
    int itemQuantity;

    cout << "Enter item description: ";
    getline(cin, itemDescription);

    cout << "Enter item cost: $";
    cin >> itemCost;

    cout << "Enter quantity being purchased: ";
    cin >> itemQuantity;

    if (itemQuantity < 0) {
        cout << "Invalid quantity. Quantity must be non-negative." << endl;
        return 1;
    }

    InventoryItem item(itemDescription, itemCost, itemQuantity);

    double unitPrice = CashRegister::calculateUnitPrice(item.getCost());
    double subtotal = CashRegister::calculatePurchaseTotal(unitPrice, item.getOnHand());
    double salesTax = CashRegister::calculateSalesTax(subtotal);
    double total = subtotal + salesTax;

    cout << "Purchase Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    item.setOnHand(item.getOnHand() - itemQuantity);

    return 0;
}

