#include<iostream>
using namespace std;
int main()
{
	int initial_quantity, sold_quantity, restocked_quantity;
	char option;
	cout << "Enter the initial quantity of product which is in stock";
	cin >> initial_quantity;
	int threshold = 100;
	int current_stock = initial_quantity;
	while (true)
		cout << "\n current stock " << current_stock << endl;
	cout << "Enter 'S' for sold 'R' for restocking and 'E' to exit ";
	cin >> option;

	if (option == 'S' || option == 's')
	{
		cout << "Enter the quantity which is sold ";
		cin >> sold_quantity;
		if (sold_quantity > current_stock)
		{
			cout << "stock is short" << endl;
		}
		else
		{
			current_stock -= sold_quantity;
			cout << sold_quantity << "quantities which are sold" << current_stock << endl;
		}
	}
	else if (option == 'R' || option == 'r')
	{
		cout << "enter the restocked quantity";
		cin >> restocked_quantity;
		current_stock += restocked_quantity;
		cout << restocked_quantity << "restocked quantity" << current_stock << endl;
	}
	else if (option == 'E' || option == 'e')
	{
		cout << endl;
	}
	if (current_stock < threshold) {
		cout << "WARNING stock is below threshold. Restock immediately" << endl;
	}
	cout << "Exiting a program. remianing stock will be " << current_stock << endl;
	return 0;

}