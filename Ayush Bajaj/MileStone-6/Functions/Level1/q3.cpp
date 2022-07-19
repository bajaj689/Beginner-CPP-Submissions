#include <iostream>
using namespace std;

#define PIE 3.14

double circumference(double r){

	return (2*PIE*r);

}

double area(double r){

        return (PIE*r*r);

}

int main()
{

	cout <<"Enter the radius of circle: " <<endl;
	double radius;
	cin >> radius;

	cout << circumference(radius) << endl;
	cout << area(radius) << endl;

    return 0;
}
