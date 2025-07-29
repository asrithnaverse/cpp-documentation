#include<bits/stdc++.h>
using namespace std;
int main(){
    cout << "MENU" << endl ;
    cout << "1. Addition " << endl;
    cout << "2. Subtraction " << endl;
    cout << "3. Multiplication " << endl;
    cout << "4. Division " << endl;
    int a,b;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    int choice;
    cout << "enter your choice";
    cin >> choice;
    switch(choice){
        case 1:
            cout << a+b;
            break;
        case 2:
            cout << a-b;
            break;
        case 3:
            cout << a*b;
            break;
        case 4:
            cout << a/b;
            break;
        default:
            cout << "invalid input";
    }
}
