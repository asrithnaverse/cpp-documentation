#include<bits/stdc++.h>
using namespace std;
//arrays are always pass by reference
void dosomething(int arr[]){
    arr[1] += 100;
    cout << arr[1] << endl;
}
int main(){
    int arr[2];
    cout << "arr 1= " ;
    cin >> arr[0];
    cout << "arr 2=";
    cin >> arr[1];
    cout << "arr 3=";
    cin >> arr[2];
    dosomething(arr);
    cout << arr[1];
}
