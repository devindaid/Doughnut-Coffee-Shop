#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

// Tutorial 4 Assignment
// Increment and Decrement-
// Examples: a)11  b)1  c)36

int main() {
	int coffee;
	int doughnut; 

	cout << "How many Coffees ($4.99) would you like to order: " << endl;
	cin >> coffee;
	cout << "How many Doughnuts ($1.99) would you like to order: " << endl;
	cin >> doughnut; 

	double coffeePrice = 4.99 * coffee;
	double doughnutPrice = 1.99 * doughnut;
	double subtotal = coffeePrice + doughnutPrice;
	double tax = 0.13 * subtotal;
	double total = subtotal + tax;

	cout << "Devin Daid's Wicked Awesome Cafe" << endl;
	cout << "Customer Receipt" << endl;
	cout << "-----------------" << endl;
	cout << "Coffee" << setw(7) << "" << "x" << coffee << setw(15) << "" << "$" << setw(1) << "" << setw(5) << coffeePrice << endl;
	cout << "Doughnut" << setw(5) << "" << "x" << doughnut << setw(15) << "" << "$" << setw(1) << "" << setw(5) << doughnutPrice << endl;
	cout << endl;
	cout << "Subtotal" << setw(7) << "" << " " << setw(14) << "" << "$" << setw(1) << "" << setw(5) << fixed << setprecision(2)<< subtotal << endl;
	cout << "HST" << setw(10) << "" << "%13" << setw(14) << "" << "$" << setw(1) << "" << setw(5) << fixed << setprecision(2) << tax << endl;
	cout << endl;
	cout << "Total" << setw(7) << "" << " " << setw(17) << "" << "$" << setw(1) << "" << setw(5) << fixed << setprecision(2) << total << endl;


	system("pause");

	return 0;

	
}