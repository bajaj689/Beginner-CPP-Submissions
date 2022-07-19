#include<bits/stdc++.h>

using namespace std;



int main(){

	vector<int> arr = {5,2,4,56,14,21,9,9,0,1,-1};
	int len = arr.size();

	for(int i = 0; i <= len-1; i++){
	
		int minIndex = i;
		for(int j = i+1; j<= len-1; j++){

			if(arr[j] < arr[minIndex]){
				minIndex = j;
			}

		}
		
		swap(arr[i],arr[minIndex]);
	}


	//Print sorted list
	for(int a: arr){
		cout << a << " "; 
	}

}
