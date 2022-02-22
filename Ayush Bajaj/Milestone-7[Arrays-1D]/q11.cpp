#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

	cout << "Size of array : " << endl;
	int n;
	cin >> n;

	char arr[n];
	cout << "Enter the elements : " << endl;

	for(int index=0; index<n; index++){
		cin >> arr[index];
	}


	int count = 1;
	bool visited[n];
	for(int index=0; index<n; index++){
		visited[index] = false;
	}

	for(int i = 0; i < n; i++){

		if(visited[i] == true)
			continue;

		count = 1;

		for(int j = i+1; j < n; j++){

			if(arr[i] == arr[j]){
				count++;
				visited[j] = true;
			}
		}
		
		cout << "Element " << arr[i] << " occurs " << count << " times " << endl;
	}


	//Approach 2:
	//Using frequency array of same size. But freqeuncy is maintained in corresponding index. So it works for all array types
	//
	//Approach 3:
	//Hash map

}

