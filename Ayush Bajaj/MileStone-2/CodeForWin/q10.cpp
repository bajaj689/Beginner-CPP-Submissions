
#include <iostream>
#include <math.h>
using namespace std;
//Count number of digits in number

int main() {

	int num;
	cin >> num;
	/*(int count = 0;
	do
	{
		count++;

		num /= 10;
	} while(num != 0);
	*/


	//Appr 2:
	/*int count = 1;
	while(num>=10){

		num=num/10;
		count++;

	}*/


	//Appr3: Use log to base 10 of number 
	int count = (num == 0)? 1 : log10(num) + 1;
        
	cout << "Total digits in " << num << " is " << count << endl;

	return 0;
}
