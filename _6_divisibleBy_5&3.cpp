#include<iostream>
 using namespace std;
 int main() {
    cout << "Enter an integer : ";  
    int n;
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)  {
        cout << "Divisible by 5 or 3 ";
    } else {
        cout << "Not divisble by 5 or 3 " ;
    }
 } 