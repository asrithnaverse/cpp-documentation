#include<bits/stdc++.h>
using namespace std;
//pass by value
void edookati(string s){
    s[1] = 'a';
    cout << s << "\n";
}
int main(){
    string mm;
    cout << "mm= ";
    cin >> mm;
    edookati(mm);
    cout << mm;
}
