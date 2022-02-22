#include<iostream>


using namespace std;

/*NOTES:
 *
A)
  1) Switch     : expression containing variables(int/char only) or constants
  2) Case label : constant expressions only 


B) Switch case evaluates EQUALITY only between switch expression and each of the case label expression
Like if(name=="Ayush") else if(name=="King")else if()....
So when comparing(equating) a variable with a set of values for equality , use the switch case

C) Switch case is faster than if-else ladder

D) TIP TO REM SWITCH CASE:
switch(cv_expr){

	case c_expr:
}

*/

int main(){

int var;
cout << "Enter " << endl;
cin >> var;

int temp_var = 88;
#define MY_MACRO 50

//expr: constant or variable
//switch(var>3){  //allowed.
//switch(var=8){  //allowed. evaluates to integer constant 8
//char ch='a';
char *name = "a"; //not allowed because expr must evalute to integer
char *name = "ayush";
switch(name){   //the expression must evaluate to either CHAR/INT variable


	case 0:
		cout << "Zero" << endl;
		break;

	case 1:
		cout << "One" << endl;
		break;

	case 5://Compile warning: if boolean expression is used in switch case, because possible outcomes can be 0 or 1 only
		cout << "Five" << endl;
		break;

	case 3&2: //Allowed.//Evaluates to 2
		cout << "3 > 2" << endl;
		break;

	case 97:
		cout << "a" << endl;
		break;	
		//case var>9:   //variables not allowed in constant expression
		//case temp_var: //variables not allowed in constant expression

	case MY_MACRO:
		cout << "macro" << endl;
		break;

	default:
		cout << "default"<< endl;

}

/*
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
*/

return 0;

}
