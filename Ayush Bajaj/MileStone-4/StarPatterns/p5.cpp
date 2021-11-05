#include <iostream>
using namespace std;

int main()
{

    for(int rows=1; rows<=5; rows++){
        
        for(int column=1; column<=9; column++){
            
            if(column >= 6-rows && column <= rows+4){
                cout << "*";
            }else
                cout << " ";                                                                                                                                                                                                                                                                                                                                           
                
            cout << " ";
        }
        
        cout << endl;
    }

    return 0;
}

