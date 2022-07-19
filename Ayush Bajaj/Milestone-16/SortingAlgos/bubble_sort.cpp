#include<bits/stdc++.h>

using namespace std;



int main(){

	//vector<int> arr = {5,2,4,56,14,21,9,9,0,1,-1};
	vector<int> arr = {5,2,4,56,0,1,-1};
	int len = arr.size();

	//ASC
	//Compare adjacent element
	//Swap them in in wrong order(means not according to desired sequence)
	bool swapped = false;
	for(int j=0; j < len - 1; j++){

		swapped = false;
		for(int i=0; i < len - j -1; i++){
			if(arr[i+1]<arr[i]){
				swap(arr[i+1],arr[i]);
				swapped = true;
			}
		}

		if(!swapped){
			break;
		}
	}	

	//Print sorted list
	for(int a: arr){
		cout << a << " "; 
	}

}
