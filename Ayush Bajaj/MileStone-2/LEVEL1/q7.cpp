#include<iostream>
#include<cstdlib>
using namespace std;


//Problem 4 :Write a program to print absolute vlaue of a number entered by user
//
int main(){

	double num;
	cin >> num;

	if(num < 0){
		//cout << abs(num) << endl;
		cout << (-1)*(num) << endl;
	}else
		cout << num;
}
