#include<bits/stdc++.h>
using namespace std;

int main(){

	
	int m=3,n=3;
	cout << "Enter the number of rows and columns" << endl;
	cin >> m >> n;

	//int arr[m][n] = {0}; //VLA //C-99
	//int arr[3][2] = {{1,2},{3,4},{10,11}};
	
	//Appr 1:
	/*
	int** arr = new int*[m];
	for(int i = 0; i < m; i++){
            arr[i] = new int[n];
        }
	*/

	//Appr 2:
	int* arr = new int[m*n];
	
	cout << "Enter the elements" << endl;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cin >> *(arr + i*n + j);
	        }
	}

	cout << "Entered array is " << endl;
	int sum = 0;
	int rowSum = 0, colSum= 0;
	for(int i = 0; i < m; i++){
		rowSum = 0;
                for(int j = 0; j < n; j++){
			cout << *((arr+i*n)+j)  << " ";
			sum += *((arr+i*n)+j); 
			rowSum += *((arr+i*n)+j);
                }
		cout << endl;
		cout << "Row Sum is " << rowSum << endl;
        }

	cout << endl;
	/*	
        for(int i = 0; i < n; i++){
                colSum = 0;
                for(int j = 0; j < m; j++){
                        cout << *((arr+j*n)+i)  << " ";
                        colSum += *((arr+j*n)+i);
                }
                cout << endl;
                cout << "Col Sum is " << colSum << endl;
        }
	*/

	cout << "Tranpose of array is " << endl;
	int* tranpose_arr = new int[m*n];
	//Transpose: Column sum traversal
	int k = 0;
	for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
		   	tranpose_arr[k] = *((arr+j*n)+i); 
			cout << tranpose_arr[k] << " ";
			k++;
                }
        }

	cout << "k is " << k << endl;
	cout << endl;	
	cout << "Tranpose of array in 2-D is " << endl;
        for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                        cout << *((tranpose_arr+i*m)+j)  << " ";
                }
                cout << endl;
        }
	
	
	delete [] arr;	

	/*
	if(arr){

		for(int i = 0; i < m; i++){
         		   delete [] arr[i];
		}
		delete [] arr;
        }
	*/


	return 0;
}
