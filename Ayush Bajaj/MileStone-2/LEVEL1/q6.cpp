



#include<iostream>
#include<cstdlib>
using namespace std;


int main(){



	//Take input of age of 3 people by user and determine oldest and youngest among them.

	int A,B,C;
	cin >> A;
	cin >> B;
	cin >> C;


	int youngest, oldest;

	if(A<B && A<C){
		youngest = A;

		if(B>C)
			oldest = B;
		else
			oldest = C;

	}else if(B<A && B<C){

		youngest = B;

		if(A>C)
			oldest = A;
		else
			oldest = C;


	}else{

		youngest = C;

		if(B>A)
			oldest = B;
		else
			oldest = A;


	}		

	cout << "Youngest: " << youngest << endl; 
	cout << "Oldest: " << oldest << endl; 




}
