
// WAP Character is Vowel or a Consonant :

#include<iostream>
using namespace std;
int main ()
{
    char ch;
    cout << "Enter the character :";
    cin >> ch;
    cout << (int)ch;                   // a to z -> 97 to 122
    int ascii = (int)ch;               // A to Z -> 65 to 90

    if((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90)){
        if (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch == 'u' ){
            cout << " the charcter is a vowel";
       }
       else {
            cout << " The character is constant";
       } 
    }
    else {
        cout << " The character is not an alphabet";
    }
    return 0;
}