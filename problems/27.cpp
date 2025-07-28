#include<bits/stdc++.h>
using namespace std;
int main(){
    int marks;
    cout << "marks= ";
    cin >> marks;
    if(marks <25){
        cout << "C";
    }
    else if(marks < 50){
        cout << "B";
    }
    else{
        cout << "A";
    }    
}
