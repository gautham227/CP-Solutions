// Created by: G Gautham Krishna
#include <bits/stdc++.h>
 
using namespace std;
 
// shortforms
 
#define pb push_back
#define pf push_front
#define all(x) (x).begin(),(x).end()
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define maxv(a) *max_element(a.begin(), a.end())
#define minv(a) *min_element(a.begin(), a.end())
#define ff first
#define ss second
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int t;
    cin>>t;
    while(t--){
        int l,r,a;
        cin>>l>>r>>a;
        if(a>r){
            cout<<r<<endl;
        }
        else{
            int rem=r%a;
            int ne=r-rem-1;
            // debug(ne);
            if(ne>=l){
                cout<<max(r%a + (r/a),ne%a+(ne/a))<<endl;
            }
            else{
                cout<<r%a + (r/a)<<endl;
            }
        }
    }
    return 0;
}