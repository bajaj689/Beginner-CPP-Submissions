#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Print unique elements in array
int main(){

	cout << "Size of array : " << endl;
	int n;
	cin >> n;

	int arr[n];
	cout << "Enter the elements : " << endl;

	for(int index=0; index<n; index++){
		cin >> arr[index];
	}

	bool found = false;
	bool visited[n];
	for(int index=0; index<n; index++){
		visited[index] = false;
	}

	cout << "List of unique elements is :" << endl;
	for(int i = 0; i < n; i++){

		if(visited[i] == true)
			continue;
		found = false;

		for(int j = i+1; j < n; j++){
			if(arr[i] == arr[j]){
				visited[j] = true;
				found = true;
			}
		}

		if(!found){  //or maintain count and if count == 1 then print
			cout << arr[i] << endl;
		}	
	}

	//Approach 2:
	//Sort and then count consecutive occurences
	/*sort(arr, arr+n);

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
	cout << "List of unique elements is :" << endl;
	for(int i = 0; i < n-1; i++){


		if(arr[i+1] == ele){
			count++;
			continue;
		}else{

			if(count == 1){
				cout << ele << endl;        
			}

			ele = arr[i+1];
			count = 1;
		}

	}

	if(count == 1)
		cout << ele;

	return 0;
	*/
}
