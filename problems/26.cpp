#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cout << "a= ";
    cin >> a;
    if((a%5)==0 && (a%11)==0){
        cout << "the number is divisible by both 5&11";
    }
    else{
        cout << "the number is not divisible by 5&11";
    }
}
