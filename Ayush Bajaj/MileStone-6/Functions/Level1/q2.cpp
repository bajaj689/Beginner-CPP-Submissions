#include <iostream>
using namespace std;

double ProductNums(double num1, double num2){

	return num1 * num2;

}

int main()
{

	cout <<"Enter the 2 numbers to be multiplied : " <<endl;
	double num1, num2;
	cin >> num1 >> num2;

	cout << "Product is " << ProductNums(num1, num2) << endl;
    return 0;
}
