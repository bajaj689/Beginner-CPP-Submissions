#include <iostream>
using namespace std;
bool isPrime(int num){
    
    if(num < 2)
        return false;
    
    for(int i=2; i <= num/2; i++){
        if(num%i == 0)
            return false;
    }
    
    return true;
}

int main()
{
    int n;
    cin >> n;
    
    for(int num = 1; num <= n; num++){
        if(isPrime(num))
            cout << num << " ";
    }
    return 0;
}

