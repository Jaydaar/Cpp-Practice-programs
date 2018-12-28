/*
This program calculates a tip based on the subtotal and gratuity rate.

2 inputs required
gratuityRate (double)
total (double)
*/

#include <iostream>
using namespace std;

int main() {
	// Accepting the subtotal and gratuity rate
	cout << "Please enter the subtotal: ";
	double subtotal;
	cin >> subtotal;

	cout << "Please enter the gratuity: ";
	double gratuityRate;
	cin >> gratuityRate;

	// Calculate gratuity and total
	double gratuity = gratuityRate / 100.0 * subtotal;
	double total = gratuity + subtotal;

	// Display the gratuity and total
	cout << "\nThe gratuity is: $" << gratuity << endl;
	cout << "\nThe total is: $" << total << endl;
	return 0;
}
