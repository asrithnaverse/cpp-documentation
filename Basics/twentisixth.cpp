#include<bits/stdc++.h>
using namespace std;
//pass by reference
void cricket(string &s){
    s[4] ='t';
    cout << s << "\n";
}
int main(){
    string mm;
    cout << "mm= ";
    cin >> mm;
    cricket(mm);
    cout << mm;
}
