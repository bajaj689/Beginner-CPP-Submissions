#include <iostream>
using namespace std;


int main(){

int num;
cout << "Enter num: " << endl;
cin >> num;

cout << "Table is : " << endl;

int i = 1;
while(i<=10){
	cout << num << " * " << i << " is " << num*i << endl;
	i++;
}

return 0;

}
