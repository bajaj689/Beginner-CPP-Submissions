#include<iostream>
#include<cmath>
using namespace std;

int main(){


	int num;
	cin >> num;
	/*int count = 0;
	while(num>0){
	
		count++;
		num /= 10;

	}

	cout << "Total number of digits" << count << endl;
	*/

	//Logic without loops
	int cnt = 0;
	cnt = num == 0 ? 1 : log10(num)+1;
	cout << cnt; 





}
