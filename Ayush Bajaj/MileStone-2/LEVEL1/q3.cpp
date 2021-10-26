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

	int quantity;
	cin >> quantity;

	if(100*quantity > 1000){

		cout << (100*quantity) - ((100*quantity) * 10)/100;

	}
	else

		cout << 100*quantity <<endl;



	return 0;

}

