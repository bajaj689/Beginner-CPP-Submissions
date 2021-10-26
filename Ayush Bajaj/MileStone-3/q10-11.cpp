#include<iostream>


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

	//12354
	while(num >= 10){
		num/=10; 
	}

	firstDigit = num;
	cout <<  "First Digit is " << firstDigit << endl;
	cout <<  "Last Digit is " << lastDigit << endl;

	cout <<  "Sum of First and Last Digit is " << firstDigit + lastDigit << endl;

	return 0;

}
