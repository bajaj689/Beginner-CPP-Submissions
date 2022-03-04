#include <iostream>
using namespace std;

void swapping(int& x, int& y) {
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
}

void swapping(int& x, int& y) {
    x = x + y;
    y = x - y;
    x = x - y;
}

void swapping(int& x, int& y) {
    x = x * y;
    y = x / y;
    x = x / y;
}


int main()
{
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    swapping(n1,n2);
    cout << n1 << n2;
    return 0;
}
