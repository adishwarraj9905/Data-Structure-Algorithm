// The number is Divisible By 5 or 3 but not Divisible By 15 

#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if (( n % 3 == 0 || n % 5 == 0) && n % 15 !=0 ){
        cout <<" The number is Divisible By 5 or 3 ";
    }  else {
        cout << " Tc or 3 ";
        return 0;
    }
}