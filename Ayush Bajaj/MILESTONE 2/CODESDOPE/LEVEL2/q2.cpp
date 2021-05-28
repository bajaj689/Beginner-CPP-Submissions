#include<iostream>

using namespace std;

int main(){


	int age;
	char sex;
	char ms;

	cin >> age;
	cin >> sex;
	cin >> ms;


	if(sex == 'F'){
		cout << "Urban Area only" << endl;

	}else if(sex == 'M' && (age>20 && age < 40)){

		cout << "Work Anywhere" << endl;

	}else if(sex == 'M' && (age>40 && age <60)){

		cout << "Urban Area" << endl;

	}else
		cout << "Error" <<endl;

}
