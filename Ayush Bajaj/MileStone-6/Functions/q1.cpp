#include <bits/stdc++.h>
using namespace std;

int findCube(int num){
    
    return num*num*num;
    
}

void printSignedRange(int size){
    
    cout << "size is " << size << endl;
    int n = size*8;
    cout << "Range is " << (-1)*pow(2,n-1) << " to " << pow(2,n-1) - 1 << endl;
    cout << "Range is " << DBL_MIN << " to " << DBL_MAX << endl;
}

int main()
{
 
    /*cout << "Enter the number" << endl;
 *     int num;
 *         cin >> num;
 *             cout << "Cube is " << findCube(num) << endl;*/
    
    int size =  sizeof(double);
    printSignedRange(size);
    
    
    
    
    return 0;
}
