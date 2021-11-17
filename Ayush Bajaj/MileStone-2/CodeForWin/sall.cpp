

#include<iostream>
using namespace std;

int main(){

	//Write a C program to print all natural numbers from 1 to n. - using while loop
	/*
	int num;
	cout << "Enter a number" << endl;
	cin >> num;

	cout << endl;
	
	int i=1;
	while(i<=num){

		cout << i << endl;
		i++;

	}

	//Write a C program to print all natural numbers from n to 1
	while(num){ //num >= 1

		cout << num << endl;
		num--;
	}

	
	//Write a C program to print all alphabets from a to z
	//int alph = 'a';  //Allowed: Prints numbers 97 to 122
	char alph = 'a';   
	while(alph <= 'z'){

		cout << alph << endl;

		alph++;
	}

	 //Characters are stored in memory as integers ranging from 0 to 255. Each char is mapped to an integer using the ASCII table. 
	 //char takes 1B=8 bits of storage. Thus possible 256 combinations


	//Print all evens between m to n

	cout << "Enter the max number" << endl;
	int max;
	cin >> max;
	
	cout << "Enter the min number" << endl;
        int min;
        cin >> min;


	int num = min;
	while((num <= max)){

		if((num & 1) == 0){

		  cout << num << endl;
	
		}
	
		num++;
	}	


	//Write a C program to find sum of all natural numbers between 1 to n.

	int n;
	cin >> n;
	int sum = 0;
	while(n >= 1){

	sum+=n;

	n--;
	}

	cout << "Sum is " << sum << endl;

	//Write a C program to find sum of all even numbers between :	
	//1 to n
	//m to n

	int m,n;
	cout << "Enter lower end" << endl;
	cin >> m;

	cout << "Enter upper end" << endl;
	cin >> n;


	int sum = 0;
	while(m <= n){

		if((m & 1) == 0){
			cout << "even" << endl;
			sum+=m;

		}else
			
			cout << "odd" << endl;

		m++;
	}	

	cout << "Sum is " << sum << endl;

	//Write a C program to print multiplication table of any number.

	cout << "Enter number whose table to be printed" << endl;
	int num;
	cin >> num;
	int i = 1;
	while(i<=10){

		cout << num*i << " ";
		i++;
	}
	cout << endl;
	*/	

	//C program to count number of digits in an integer

	int num;
	cout << "Enter num" << endl;
	cin >> num;
	int digits = 0;

	do{
		digits++;
		num /=10;
	}while(num > 0);

	cout << "Count of digits is "  << digits << endl;

	return 0;

}
