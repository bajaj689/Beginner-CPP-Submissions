#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Second largest element in the array

int main()
{
    
    
    int n;
    cin >> n;
    vector<int> arr(n,0);
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }

    int max = INT_MIN;
    int max2 =  max;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max2 = max;
            max = arr[i];
        }else if(arr[i] > max2){
            max2 = arr[i];
        }
    }    
    
    cout << "Largest is" << max << " and S.L is " << max2 << endl;
    
    return 0;
}
