#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int num;
    cin >> num;
    
    int origNum = num;
    int totalDigits = log10(num)+1;
    
    int sum = 0;
    while(num>0){
        int rem = num%10;
        sum += pow(rem,totalDigits);
        num /= 10;
    }
    
    if(sum == origNum)
        cout << "YES ARMSTRONG NUMBER";
    else
        cout << "NOT ARMSTRONG NUMBER";
        
    return 0;
}
