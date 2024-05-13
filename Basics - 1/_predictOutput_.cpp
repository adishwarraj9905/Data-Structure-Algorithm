#include <iostream>
using namespace std;

int main() 
{
    bool p = false;
    bool q = false;
    bool r = true;
    cout << (p == q && q == r) << endl;

    bool a = true;
    bool b = true;
    bool c = true;
    cout << (a == b && b == c) << endl;

    bool x = true;
    bool y = false;
    bool z = false;
    cout << (x == y && y == z) << endl;

    return 0;
}
