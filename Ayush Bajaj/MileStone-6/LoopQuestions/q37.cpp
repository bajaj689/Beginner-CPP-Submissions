#include<iostream>
#include<cstring>
using namespace std;


int main()
{
    
    char binary[100] = {0};
    cin >> binary;
    
    char complement[100] = {0};
    for(int index = 0; index < strlen(binary); index++){
        
        binary[index] == '0' ? complement[index] = '1': complement[index] = '0';
        
    }

    
    cout << "One's complement is " << complement;
    return 0;
}

