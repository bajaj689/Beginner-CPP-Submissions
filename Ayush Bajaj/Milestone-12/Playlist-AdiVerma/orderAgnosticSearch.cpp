#include<bits/stdc++.h>
using namespace std;

int searchInAsc(vector<int>& nums, int target) {

	int start = 0;
	int end =  nums.size() - 1;

	while(start <= end){

		int mid =  start + (end-start)/2;
		if(nums[mid] ==  target){
			return mid;
		}else if(nums[mid] < target){
			start = mid + 1;
		}else{
			end = mid - 1;
		}

	}

	return -1;

}


int searchInDesc(vector<int>& nums, int target) {

	int start = 0;
	int end =  nums.size() - 1;

	while(start <= end){

		int mid =  start + (end-start)/2;
		if(nums[mid] ==  target){
			return mid;
		}else if(nums[mid] < target){
			end = mid - 1;
		}else{
			start = mid + 1;
		}

	}

	return -1;

}


int main(){


	cout << "Enter size of array " << endl;
	int n;
	cin >> n;

	vector<int> nums(n);
	cout<<"Enter array elements " << endl;
	for(int i = 0; i < n; i++)
		cin >> nums[i];

	while(1){
		cout<<"Enter the element to search" << endl;
		int target;
		cin >> target;

		int si = -1;
		if(nums[0] <= nums[n-1]){
			si = searchInAsc(nums,target);
		}else{
			si = searchInDesc(nums,target);
		}

		cout << "Element found at " << si << endl;
	}

	return 0;

}
