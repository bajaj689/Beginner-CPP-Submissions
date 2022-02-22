#include <iostream>
using namespace std;
//Program to print even numbers beween 1 and 100
int main()
{
	int num = 1;
	while(num <= 100){
			//if(num%2 == 0)
			if((num & 1) == 0)
				cout << num << " ";

		num++;
	}


	//To detect even odd using switch case
	/*	
	int num = 1;
	while(num <= 100){
		switch(num % 2)
		{
			case 0: 
				printf("Number is Even");
				break;

			case 1: 
				printf("Number is Odd");
				break;
		}
		num++;
	}*/
}
