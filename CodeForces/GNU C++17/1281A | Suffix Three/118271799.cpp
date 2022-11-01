#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i;i<t;i++){
        string a;
        cin>>a;
        reverse(a.begin(),a.end());
        if (a.substr(0,2)=="op"){
            cout<<"FILIPINO"<<endl;}
        else if (a.substr(0,4)=="used" || a.substr(0,4)=="usam"){
            cout<<"JAPANESE"<<endl;
        }
        else{
            cout<<"KOREAN"<<endl;
        }
    }
    return 0;
}