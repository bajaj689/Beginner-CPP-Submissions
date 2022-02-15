
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10

//Insert element in array

int main()
{

   char arr[SIZE] = {'A','Y','U','S','H'};
   int pos;
   char ele;
   cout << "Position : ";
   cin >> pos;
   cout << "Element : ";
   cin >> ele;
   
    if(pos>SIZE-2 || pos<0){
        cout << "Invalid pos" <<endl;
        return 0 ;
    }
    
    for(int i=SIZE-2; i>=pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = ele;
    
    cout << "New Array is " << endl;
    for(int i=0; i<SIZE; i++){
        cout << "at i" << i << " is " << arr[i] << endl;
    }
   cout << sizeof(arr) << strlen(arr);
    
    return 0;
}
