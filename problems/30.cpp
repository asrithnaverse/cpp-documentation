#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    cout << "x= ";
    cin >> x;
    if(x%3==0){
        if(x%6==0){
            cout << "yes it is divisible by 3 & 6 ";
        }
        else {
            cout << "not divisible by 6 but divisible by 3";
        }
    }
    else {
        cout << "not divisible by 3 AND 6";
    }
    
}
