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
 
//type definitions
 
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int> > v;
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            v.pb({y,x,i+1});
        }
        srt(v);
        ll ans=0;
        vector<pii> req;
        for(int i=0;i<2*n;i++){
            vector<int> ele=v[i];
            ans+=1LL*ele[0];
            req.pb({ele[1],ele[2]});
        }
        srt(req);
        cout<<ans<<"\n";
        for(int i=0;i<n;i++){
            cout<<req[i].ss<<" "<<req[2*n-i-1].ss<<"\n";
        }
        cout<<"\n";
    }
 
    return 0;
}