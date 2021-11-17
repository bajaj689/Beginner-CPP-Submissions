#include<iostream>
#include<cstdlib>
using namespace std;


//Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z ).
//
int main(){

	char ch;
	cout << "Enter the test character" << endl;
	cin >> ch;

	cout << "Entered character is " << ch << endl;
	
	if(ch >= 'a' && ch <= 'z')
		cout << "Lowercase" << endl;
	else if(ch >= 'A' && ch <= 'Z')
		cout << "Uppercase" << endl;	
	else
		cout << "Invalid character" << endl;
}
