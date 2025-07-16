#include<bits/stdc++.h>
using namespace std;
int pedda(int x,int y){
    if(x >y) return x;
    else return y;
}
int main(){
    int a; int b;
    cout << "a= ";
    cin >> a;
    cout << "b =";
    cin >> b;
    int maxx=pedda(a,b);
    cout << maxx;
}
