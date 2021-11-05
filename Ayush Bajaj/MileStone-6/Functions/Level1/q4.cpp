#include <iostream>
using namespace std;


void MinNumber(int a, int b, int c){
    
    if(a<b){
        if(a<c){
            cout << "Min is " << a << endl;
        }else
            cout << "Min is " << c << endl;
    }else{
        if(b<c){
            cout << "Min is " << b << endl;
        }else
            cout << "Min is " << c << endl;
    
    }
}

int main()
{
    int a,b,c;
    cout << "Enter the 3 numbers:" << endl;
    cin >> a >> b >> c;
    MinNumber(a,b,c);

    return 0;
}
