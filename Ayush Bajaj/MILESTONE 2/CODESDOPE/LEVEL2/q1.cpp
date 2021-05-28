#include<iostream>

using namespace std;

int main(){



	//Write a program to check if a year is leap year or not
	//

	int year;
	cout << "Enter the year to check: ";
	cin >> year;

	if((year%4 == 0)){

		if((year%100 == 0)){

			if((year%400 == 0)){

				cout << "It's a leap year" << endl;

			}else

				cout << "Not a leap year" << endl;

		}
		else
			cout << "It's a leap year" << endl;

	}else
		cout << "Not a leap year" << endl;

}
