#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k=0;
    string a,b;
    cin>>a;
    for (int i=0;i<5;i++){
        cin>>b;
        if (b[0]==a[0] || b[1]==a[1]){
            k=1;
        }
    }
    if (k==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}