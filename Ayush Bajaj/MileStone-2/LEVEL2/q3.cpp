#include<iostream>
#include<vector>

using namespace std;

int main(){

	
	//A 4 digit number is entered through keyboard. Write a program to print a new number with digits reversed as of orignal one
	//
	
	int num;
	cout << "Enter the number to be revered" << endl;
	cin >> num;

	int rev = 0;

	while(num > 0){


		rev = rev*10 + (num%10);
		num /= 10;
		

	}

	cout << "Reversed number is " << rev << endl;

}
