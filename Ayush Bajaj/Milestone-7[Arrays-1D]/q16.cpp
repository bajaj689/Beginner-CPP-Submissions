

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Reverse a Array

void swap(int* arr, int i, int j){
    
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    
}


int main()
{

	//Other Appr : Stack, Recursion, Brute Force
	//arr[n-i-1] = arr[i]

	cout << "Size of array : " << endl;
	int n;
	cin >> n;

	int arr[n];
	cout << "Enter the elements : " << endl;

	for(int index=0; index<n; index++){
		cin >> arr[index];
	}

	int j = n-1;
	for(int i =0 ; i<j ; i++, j--){
		swap(arr,i,j);
		//swap(arr[i],arr[j]); //inbuilt swap function
	}

	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}

	return 0;
}
