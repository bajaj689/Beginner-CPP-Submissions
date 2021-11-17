#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

	int classAtt = 0;
	int classHeld = 0;

	cout << "Enter number of classes attended and held";
	cin >> classAtt >> classHeld;

	double attendance = (classAtt*100.0/classHeld) << endl; 

	//double attendance = (classAtt*100/classHeld) << endl; //precision lost here too: Ex: 3 9
	//double attendance = (classAtt/classHeld) * 100  << endl;//fails because intger division will result in fractional part getting ignores thus output of division will always be 0 if Nr < Dr

	if(attendance >= 75){
		cout << "Allowed to sit" << endl;
	}else{

		cout << "Did the student have medical cause ?" << endl;
		char medical;
		cin >> medical;
		if(medical == 'Y')
			cout << "Allowed to sit" << endl;
		else
			cout << "Not Allowed to sit" << endl; 

	}
	
}
