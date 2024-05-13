#include<iostream>
using namespace std;
int main() 
{
    float x;
    cin >> x;            // 9.1  ,  -1.9  , -1.3
    int y = (int)x;      // y = 9  ,   

    if(y<0) y = y-1;

    int z = (float)y;    // z = 9  ,  
    x = x - z;
    cout << x;

}