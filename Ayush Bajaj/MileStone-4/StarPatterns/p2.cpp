#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int stars = 5;
    int rows = 5;
    while(rows--){
        
      for(int count = 1; count <=5 ; count++){
          
          if(count >= stars)
            cout << "*";
          else
            cout << " ";
          
          cout << " ";
         
      }
      
      stars--;
      cout << endl;

    }

    return 0;
}

/*
 
         *
       * *
     * * * 
   * * * *
 * * * * *
 
*/
