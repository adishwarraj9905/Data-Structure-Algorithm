
// Take a input marks of a student and print the grade according to marks :

#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a marks : ";
    cin >> n;
    if (n>=91 && n <=100){
        cout << "Excelent";
    }if (n>=81 && n <=90){
        cout << "Very Good";
    }if (n>=71 && n <=80){
        cout << "Good";
    }if (n>=61 && n <=70){
        cout << "Can Do Better";
    }if (n>=51 && n <=60){
        cout << "Average";
    }if (n>=41 && n <=50){
        cout << "Below Average";
    }if (n<40 ){
        cout << "Fail";
    }
    return 0;
}