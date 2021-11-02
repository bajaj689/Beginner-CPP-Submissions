#include <iostream>
#include <cmath>
using namespace std;

bool isArmStrongNumber(int num){
    
    int origNum = num;
    int totalDigits = log10(num)+1;
    
    int sum = 0;
    while(num>0){
        int rem = num%10;
        sum += pow(rem,totalDigits);
        num /= 10;
    }
    
    if(sum == origNum)
        return true;
    else
        return false;
        
}
int main()
{
    int num;
    cin >> num;
    
    for(int i=1; i<=n; i++){
        if(isArmStrongNumber(i))
            cout << n << " ";
    }

    return 0;
}

