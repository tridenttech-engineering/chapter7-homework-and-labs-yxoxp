//Lab7-6.cpp - calculates and displays the average price
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int numPrice = 0; //counter
		double price = 0.0;
		double totalPrice = 0.0; //accumulator
		double avgPrice = 0.0;

		cout << "Price (negative number to end): ";
		cin >> price;
		while (price >= 0.0)
		{
			numPrice += 1;
			totalPrice += price;
			cout << "Next price: (negative number to end): ";
			cin >> price;
		}   

		if (numPrice > 0)
			avgPrice = totalPrice / numPrice;
		else
			avgPrice = 0.0;
	
		cout << fixed << setprecision(2) << endl;
		cout << "Average price: " << avgPrice << endl;
	return 0;
}	//end of main function