
#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    int max = 5;
    for(int i =1; i<=5 ; i++){
        
      for(int j = 1; j <=max ; j++){
          
            cout << "* ";
         
         
      }
      
      max--;
      cout << endl;

    }

    return 0;
}
  
/*
int main()
{
    for(int i =1; i<=5 ; i++){

      for(int j = 1; j <=5 ; j++){

            if(j<=6-i)
                cout << "*";
            else
                cout << " ";
            
            cout << " ";

      }
      cout << endl;
    }

    return 0;
}*/
