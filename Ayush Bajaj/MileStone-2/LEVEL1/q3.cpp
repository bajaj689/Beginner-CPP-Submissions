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

	int total_price = 100*quantity;
	if(total_price > 1000){

		//cout << total_price - ((total_price * 10)/100);  //data loss
		cout << total_price - (total_price * 10.0/100); //precision

	}
	else

		cout << total_price <<endl;



	return 0;

}

