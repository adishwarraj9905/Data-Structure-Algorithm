#include<iostream>
 using namespace std;
 int main() {
    cout << "Enter an integer : ";  
    int n;
    cin >> n;
    if (n >= 100 && n<= 999)  {
        cout << "Three Digit Number : " << n;
    } else {
        cout << "Not a three digit number : " << n;
        return 0;
    }
 } 