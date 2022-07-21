#include<bits/stdc++.h>

using namespace std;



int partition(vector<int>& arr, int start, int end){
    
    //Choose a pivot : We choose 1st element as pivot
    //Find count of elements lesser than pivot
    int pivot = arr[start];
    int count = 0;
    for(int i=start+1; i<=end;i++){
        if(arr[i] <= pivot){
            count++;
        }
    }
    
    //Place the pivot at its correct position
    int partitionIndex =  start + count;
    swap(arr[partitionIndex], arr[start]);
    
    //Re-arrange such that ele before pivot should be <= pivot
    int i = start;
    int j = end;
    
    while(i<partitionIndex && j > partitionIndex){
        
        while(arr[i] <= pivot){
            i++;
        }
        
        while(arr[j] > pivot){
            j--;
        }
        
        if(i < partitionIndex && j > partitionIndex)
            swap(arr[i++], arr[j--]);
    }
    
    return partitionIndex;
}

void quicksort(vector<int>& arr, int start, int end){

        if(start>=end){
                return;
        }

        int partitionIndex = partition(arr,start, end);
        quicksort(arr,start, partitionIndex-1);
        quicksort(arr,partitionIndex+1, end);
}



int main(){
	
	vector<int> arr = {9,9,9,8,2,3-6,0};
	quicksort(arr,0, arr.size()-1);
	for(auto ele:arr){
		cout << ele << " ";
	}	

}
