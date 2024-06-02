#include<iostream>
using namespace std;

int main () {
    cout << "Enter Cost Price : ";
    int cp;
    cin >> cp;
    cout << "Enter Selling Price : ";
    int sp;
    cin >> sp;

    if (sp > cp) {
        cout << "Profit = " << sp - cp;
    } else if (sp < cp) {
        cout << "Loss = " << cp - sp;
    } else {
        cout << "No profit No loss";
    } 
    return 0; 
}
