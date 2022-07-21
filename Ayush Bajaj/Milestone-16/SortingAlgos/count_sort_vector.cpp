#include<bits/stdc++.h>
using namespace std;

int main(){

	//vector<int> arr = {5,2,4,56,14,21,9,9,0,1,-1};
	vector<int> arr = {5,2,4,56,0,1};
	int len = arr.size();

	//Find the maximum element in input array
	int max =  INT_MIN;
	for(int i=0; i<len;i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}

	vector<int> count(max+1,0);
	//Add values to count array
	for(auto a: arr){
		count[a]++;
	}


	//Modify the count array to add cumulative sum at each element
	for(int i=1; i<max+1; i++){
		count[i] = count[i] + count[i-1];
	}

	vector<int> output(len);
	//Place each element of original array at its correct position in output array
	for(int i=0; i< len; i++){
		output[count[arr[i]]-1] = arr[i];
		//Note: Value in count array gives the position of the element arr[i] in final list. But since we are storing final list in 0 based index array. the position is reduced by 1
		//Ex: Value of 3 in count[2] says that 3 is the correct position of element 2 in the final array  :)
	}

	//Print sorted list
	for(vector<int>::iterator itr = output.begin(); itr!= output.end(); itr++){
		cout << *itr << " ";
	}

	//This approach is not applicable for list with negative integers.

}
