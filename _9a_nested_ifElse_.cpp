
// The number is Divisible By 5 or 3 but not Divisible By 15 

#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number : ";
    cin >> n;
    if(n%5 == 0){
        if(n%3 == 0){
            cout << " Number is divisible by 5 and 3 both ";
        } else {
            cout << "  Number is divisible by 5 but not by 3 ";
        }
    } else {
        cout << " Not matching condition ";
    }
}