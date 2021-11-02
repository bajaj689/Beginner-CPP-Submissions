#include<iostream>
#include <cmath>

using namespace std;

//To find first and last digit of number

int main(){

	int firstDigit = -1;
	int lastDigit = -1;

	int rem = -1;
	int num;
	cout << "Enter the number" << endl;
	cin >> num;

	lastDigit = num%10;

	/*
	while(num >= 10){
		num/=10; 
	}
	*/

	firstDigit = num;

	//Logic 2 to find first digit
	//To find first digit we have simple formula firstDigit = n / pow(10, digits - 1). Where digits is total number of digits in given number.
	int digits = (num == 0) ? 1 : log10(num)+1;
	firstDigit = num / pow(10,digits-1);

	cout <<  "First Digit is " << firstDigit << endl;
	cout <<  "Last Digit is " << lastDigit << endl;

	cout <<  "Sum of First and Last Digit is " << firstDigit + lastDigit << endl;

	return 0;

}


