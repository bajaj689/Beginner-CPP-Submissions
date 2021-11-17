#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    /*for(int i = 1; i <= 10; i++)
 *         cout << num*i << " ";
 *             */
    
    /*Not possible without extra variable*/
    int uL = num*10; 
    for(; num <= uL; num += 5)
       
        cout << num << " ";

}
