#include <bits/stdc++.h>
using namespace std;
/*extra variable required or not
 * number of times to run is known or not*/

int main()
{
    int n;
    cin >> n;
    
    while(n>0){
        cout << n << " ";
        n--;
    }
    
    /*Extra variable not required*/


    //Can be used
    for(;n>0;n--){
        cout << n << " ";
    }

}
