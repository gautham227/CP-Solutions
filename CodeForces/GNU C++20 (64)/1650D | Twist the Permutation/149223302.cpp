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
        int n;
        cin>>n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.pb(x);
        }
        // int f=0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(v[n-i-1]==n-i){
                ans.pb(0);
                continue;
            }
            int ind=0;
            for(int j=0;j<n-i;j++){
                if(v[j]==n-i){
                    ind=j;
                    break;
                }
            }
            ans.pb(ind+1);
            rotate(v.begin(),v.begin()+ind+1,v.end()-i);
            // debug(v);
        }
        rev(ans);
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}