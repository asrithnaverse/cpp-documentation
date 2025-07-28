#include<bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cout << "a= ";
    cin >> a;
    int b=a;
    cout << b << "\n";
    if(b>=65 && b<=90){
        cout << "capital letter";
    }
    else if (b>=97 && b<=122){
        cout << "small letter";
    }
    else{
        cout << "some other character";
    }
}
