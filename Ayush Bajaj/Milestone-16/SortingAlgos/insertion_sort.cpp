#include<bits/stdc++.h>

using namespace std;



int main(){

	vector<int> arr = {5,2,4,56,14,21,9,9,0,1,-1};
	//vector<int> arr = {5,2,4,56,0,1,-1};
	int len = arr.size();

	for(int i=1; i < len; i++){

		int key = arr[i];
		int ptr = i-1;
		while(ptr >= 0 && key < arr[ptr]){
			arr[ptr+1] = arr[ptr]; //Shift right
			ptr--;
		}

		arr[ptr+1] = key;
	}

	//Print sorted list
	for(int a: arr){
		cout << a << " "; 
	}

}
