#include<iostream>
using namespace std;

int main(){

	char c_var;
	cin >> c_var;

	switch(c_var){   //must be a CHAR/INT variable cannot be an expression(statement involving operators)


		case 'a':
			cout << "a" << endl;
			break;

		case 'b':
			cout << "b" << endl;
			break;
			//case "c"://not allowed //case label does not reduce to an integer constant
			//case "cat"://not allowed
			//case 'ball'://not allowed

			cout << "cat" << endl;
			break;

		case 'z' > 'x':
			cout << "z > x" << endl;
			break;
		default:
			cout << "default"<< endl;

	}
}
