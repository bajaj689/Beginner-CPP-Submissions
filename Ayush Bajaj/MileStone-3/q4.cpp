#include <bits/stdc++.h>
using namespace std;
/*extra variable required or not
 * number of times to run is known or not*/

bool isEven(int num){
    if(num%2 == 0)
        return true;
    return false;
}

int main()
{
  
        
    /*int num = 1;
    while(num<=100){
        
         if(isEven(num))
            cout << num << " ";
        
        num++;
    }*/

    //Optimized
    for(int num = 2; num <= 100;  num=num+2){
          if(isEven(num))
                      cout << num << " ";
    }

}
