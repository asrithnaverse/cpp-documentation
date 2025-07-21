#include<bits/stdc++.h>
using namespace std;
int main(){
    int p,t;
    float r;
    cout << "principal = ";
    cin >> p;
    cout << "time = ";
    cin >> t;
    cout << "rate of interest= " ;
    cin >> r;
    int c;
    c= p*pow(1+(r/100), t);
    cout << "compound interest= "<< c;
}
