#include<iostream>
using namespace std;
int main (){
    char ch;
    cout << "Enter the character :";
    cin >> ch;
    cout << (int)ch;
    // a to z -> 97 to 122
    // A to Z -> 65 to 90
    int ascii = (int)ch;
    if(ascii >= 97 && ascii <= 122){
        cout << " The character is lowercase alphabet ";
    }
     else if(ascii >= 65 && ascii <= 90){
        cout << " The character is uppercase alphabet ";
    }
    else {
        cout << " The number is not an alphabet";
    }
    return 0;
}