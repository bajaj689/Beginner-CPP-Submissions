#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Print count of duplicate elements in array

int main()
{

    //Appr2: Simple increment global count variable(set to 0) in nested for loop when element matches
    
    cout << "Size of array : " << endl;
    int n;
    cin >> n;

    int arr[n];
    cout << "Enter the elements : " << endl;

    for(int index=0; index<n; index++){
            cin >> arr[index];
    }

    sort(arr,arr+n);

    int ele = arr[0];
    int count = 1;
    int duplicates = 0;
    cout << "List of unique elements is :" << endl;
    for(int i = 0; i < n-1; i++){
        
        if(arr[i+1] == ele){
            count++;
            continue;
        }else{
            
            duplicates += (count-1);
            ele = arr[i+1];
            count = 1;
        }
    }

    duplicates += (count-1);
    cout << "Total duplicates is " << duplicates << endl;
    
    return 0;
}
