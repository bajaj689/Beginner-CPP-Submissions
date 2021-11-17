#include <bits/stdc++.h>
using namespace std;
/*extra variable required or not
 * number of times to run is known or not*/

bool isEven(int num){
    if(num%2 == 0)
        return true;
    return false;
}

//Sum of all even numbers between two numbers
int main()
{

        int lowerLimit=0, upperLimit=0;
        cout << "Enter the lower limit" << endl;
        cin >> lowerLimit;

        cout << "Enter the upper limit" << endl;
        cin >> upperLimit;

        if(!isEven(lowerLimit))
                lowerLimit++;

       
        int sum = 0;
        while(lowerLimit <= upperLimit){
                if(isEven(lowerLimit))
                        sum += lowerLimit;

                lowerLimit +=2;
        }
        
        cout << "Sum is " << sum << endl;
}
