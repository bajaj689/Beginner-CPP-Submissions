#include<iostream>
#include<cmath>
using namespace std;

int main(){

	
	//A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one
	//
	
	int num;
	cout << "Enter the number to be revered" << endl;
	cin >> num;
	//Input : 345

	//Appr 1: 5, 54, 543
	/*int rev = 0;
	while(num > 0){

		rev = rev*10 + (num%10);
		num /= 10;

	}*/

	//Appr 2: 500 + 40 + 3

	int digits = log10(num) + 1;
	int rev = 0;
	while(num > 0){

		int rem = num%10;
		rev +=  rem * pow(10,digits-1);
		digits--;
		num /= 10;

	}

	cout << "Reversed number is " << rev << endl;

}
