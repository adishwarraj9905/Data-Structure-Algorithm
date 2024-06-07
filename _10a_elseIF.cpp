

// Take a input marks of a student and print the grade according to marks :

#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a marks : ";
    cin >> n;
    if (n>=91){
        cout << "Excelent";
    }else if (n>=81 ){
        cout << "Very Good";
    }else if (n>=71){
        cout << "Good";
    } else if (n>=61){
        cout << "Can Do Better";
    } else if (n>=51){
        cout << "Average";
    } else if (n>=41){
        cout << "Below Average";
    }else{
        cout << "Fail";
    }
    return 0;
}