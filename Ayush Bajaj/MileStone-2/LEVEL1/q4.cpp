#include<iostream>
#include<cstdlib>
using namespace std;


int main(){

	//Problem 3:
	//A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
	//Ask user for quantity
	//Suppose, one unit will cost 100.
	//Judge and print total cost for user.
	//

	int years_of_service = 0;
	double salary = 0;
	cout << "Enter the years of service and salary";
	cin >> years_of_service >> salary;

	double bonus = 0;
	if(years_of_service > 5)
		bonus = salary * (5.0/100);


	cout << "Bonus is " << bonus << endl;
	return 0;

}

