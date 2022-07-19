#include <iostream>
using namespace std;

double AddNums(double num1, double num2){

	return num1 + num2;

}

int main()
{

	cout <<"Enter the 2 numbers to be added : " <<endl;
	double num1, num2;
	cin >> num1 >> num2;

	cout << "Sum is " << AddNums(num1, num2) << endl;
    return 0;
}
