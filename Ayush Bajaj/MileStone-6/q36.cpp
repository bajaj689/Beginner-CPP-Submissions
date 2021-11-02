#include <iostream>
#include <cmath>
using namespace std;


//Print n terms of Fibonacci series
int main()
{
    int terms;
    cin >> terms;
    
    int first = 0;
    int second = 1;
    int current = 0;
  
    while(terms--){
        
        cout << current << " ";
        
        first = second;
        second = current;
        current = first + second;
     
    }
      
    return 0;

}
