#include <iostream>
using namespace std;

int main() {

	int num = 0, power = 0;
	cin >> num;
	cin >> power;

	int result = 1;

	while(power--)
		result *= num;

	cout << "Answer is " << result;


	
 
	return 0;

}
