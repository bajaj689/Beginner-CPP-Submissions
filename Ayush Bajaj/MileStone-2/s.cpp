#include <iostream>
using namespace std;

int main()
{
    int classAtt = 0, classHeld = 0;
    cin >> classAtt  >> classHeld;
    double attendance = (classAtt*100/classHeld);
    cout << attendance;



    return 0;
    
    
}
