#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout << "Your Age : ";
    cin >> age;
    if(age < 18){
        cout << "You are not eligible for job. ";
    }
    else if(age <=54){
        cout << "You are eligible for job. ";
    }
    else if(age <=57){
        cout << "You are eligible for job, but retirement soon. ";
    }
    else{
        cout << "Retirement time. ";
    }
}
