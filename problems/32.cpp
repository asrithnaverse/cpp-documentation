#include<bits/stdc++.h>
using namespace std;
int main(){
    char x;
    cout << "x=";
    cin >> x;
    int y;
    y=x;
    int choice;
    if ((y>=65 && y<=90) || (y>=97 && y<=122)){
        choice = 1;
    }
    else{
        choice =2;
    }
    switch(choice){
        case 1:
            cout << "Alphabet";
            break;
        case 2:
            cout << "Not an alphabet";
            break;
        default:
            cout << "Invalid";
    }
    
}
