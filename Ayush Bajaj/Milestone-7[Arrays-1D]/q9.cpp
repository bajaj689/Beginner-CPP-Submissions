#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define SIZE 10
//Delete element in array
int main()
{

   char arr[SIZE] = {'A','Y','U','S','H'};
   int pos;
   char ele;
   cout << "Position : ";
   cin >> pos;
   
    if(pos>SIZE-1 || pos<0){
        cout << "Invalid pos" <<endl;
        return 0 ;
    }
    
    for(int i=pos; i<SIZE; i++){
        if(i != SIZE-1)
            arr[i] = arr[i+1];
    }
    arr[SIZE-1] = '\0';
    
    cout << "New Array is " << endl;
    for(int i=0; i<SIZE; i++){
        cout << arr[i];
    }
    
    return 0;
}

