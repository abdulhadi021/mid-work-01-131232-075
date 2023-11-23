#include<iostream>
using namespace std;

int main() {
    int initial_quantity, sold_quantity, restocked_quantity;
    char option;

    cout << "Enter the initial quantity of product in stock: ";
    cin >> initial_quantity;

    int threshold;
    int current_stock = initial_quantity;

    while (true) {
        cout << "\nCurrent stock: " << current_stock << endl;
        cout << "Enter 'S' for sold, 'R' for restocking, and 'E' to exit: ";
        cin >> option;

        if (option == 'S' || option == 's') {
            cout << "Enter the quantity which is sold: ";
            cin >> sold_quantity;

            if (sold_quantity > current_stock) {
                cout << "Stock is short" << endl;
            }
            else {
                current_stock -= sold_quantity;
                cout << sold_quantity << " quantities sold. Current stock: " << current_stock << endl;
            }
        }
        else if (option == 'R' || option == 'r') {
            cout << "Enter the restocked quantity: ";
            cin >> restocked_quantity;

            current_stock += restocked_quantity;
            cout << restocked_quantity << " restocked quantity. Current stock: " << current_stock << endl;
        }
        else if (option == 'E' || option == 'e') {
            break;
        }

        if (current_stock < threshold) {
            cout << "WARNING: Stock is below threshold (" << threshold << "). Restock immediately." << endl;
        }
    }

    cout << "Exiting program. Remaining stock: " << current_stock << endl;
    return 0;
}