#include <bits/stdc++.h>
using namespace std;

//Print number in words
//Ex: 466
//O/p: Four Six Six

void printDigit(int fd){
    
    switch(fd)
        {
            case 0: 
                printf("Zero ");
                break;
            case 1: 
                printf("One ");
                break;
            case 2: 
                printf("Two ");
                break;
            case 3: 
                printf("Three ");
                break;
            case 4: 
                printf("Four ");
                break;
            case 5: 
                printf("Five ");
                break;
            case 6: 
                printf("Six ");
                break;
            case 7: 
                printf("Seven ");
                break;
            case 8: 
                printf("Eight ");
                break;
            case 9: 
                printf("Nine ");
                break;
        }

}

int main()
{
    
    int num;
    cin >> num;
    
    if(num == 0){
        cout << "Zero" << endl;
        return 0;
    }
    
    
    int digits = log10(num)+1; //1090
    do{
        
        int first_digit = num/(pow(10,digits-1));
        printDigit(first_digit);
        num = num - (first_digit*pow(10,digits-1));;
        digits--;

    }while(digits>0);
    
    
    return 0;
}
