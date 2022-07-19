#include<bits/stdc++.h>
using namespace std;

int main(){


	cout << "Enter the number: " << endl;
	int num;
	cin >> num;

	cout << "Factors are: " << endl;	
	for(int i = 1; i <= num; i++){
		if(num%i == 0)
			cout << i << endl;

	}

return 0;

}
