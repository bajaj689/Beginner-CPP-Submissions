#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int stars = 1;
    int rows = 5;
    while(rows--){
        
        for(int count = 1; count <= stars; count++){
            cout << "* ";
        }
        
        cout << endl;
        stars++;
    }

    return 0;
}

/*

*
* *
* * *
* * * *
* * * * * 

*/
