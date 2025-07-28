#include<bits/stdc++.h>
using namespace std;;
int main(){
    int a=999;
    int b=888;
    cout << "before swapping a= " << a << " " << "b= " << b << "\n";
    a=a+b;
    b=a-b;
    a=a-b;
    cout << "after swapping a= " << a << " " << "b= " << b;
}
