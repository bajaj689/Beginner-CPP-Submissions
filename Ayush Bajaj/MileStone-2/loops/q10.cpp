
#include <iostream>
using namespace std;
//Count number of digits in number

int main() {
   
  int num;
  cin >> num;
  int count = 0;
  do
    {
        /* Increment digit count */
        count++;

        /* Remove last digit of 'num' */
        num /= 10;
    } while(num != 0);
    cout << count;  
  
    return 0;
}
