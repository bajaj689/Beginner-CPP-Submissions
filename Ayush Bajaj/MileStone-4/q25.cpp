
#include <iostream>
using namespace std;

int main() {
  
     
    int num1 = 0;
    cin >> num1;

    int num2 = 0;
    cin >> num2;
    
    int smallerNum = num1;
    int largerNum = num2;
   
    
    if(num1 > num2){
        largerNum = num1;
        smallerNum = num2;
    }

    /*Logic 2 to find max and min:
 	int max = num1 > num2 ? num1: num2;
    int min = (num1+num2)-max;*/

    int i = 1;
    int LCM = largerNum;
    while(true){
        
        if((largerNum*i) % smallerNum == 0){
            LCM = largerNum*i;
            break;
        }
        
        i++;
    }
        
    cout << LCM; 
    return 0;
}

/*Approach 2: lcm = num1*num2/ hcf*/

