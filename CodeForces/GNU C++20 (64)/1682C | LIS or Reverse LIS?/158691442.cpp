// Created by: G Gautham Krishna
#include <bits/stdc++.h>
 
using namespace std;
 
// shortforms
 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define all(x) (x).begin(),(x).end()
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())
#define lb(v,x) lower_bound(v.begin(),v.end(),x)
#define ub(v,x) upper_bound(v.begin(),v.end(),x)
#define cpy(v2,v1) v2.assign(v1.begin(),v1.end())
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
 
//constants
 
const long long int inf = 1e18;
const int mod = 1000000007;
#define pi 3.141592653589793238462
 
//graphs
 
//const int N=1e5+2;
//std::vector<int> vis(N,0);
//std::vector<int> adj[N];
 
// debugger
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}
 
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(multimap <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
 
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
        map<int,int> m;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            v.pb(k);
            if(m[k]<2)m[k]++;
        }
        debug(m)
        vector<int> a(n);
        int ind1=0, ind2=n-1;
        int prev=0;
        int s=0;
        bool x=false;
        for(auto it=m.begin();it!=m.end();it++){
            if((*it).ss==1){s++;x=false;}
            else{
                x=true;
            }
        }
        for(auto it=m.begin();it!=m.end();it++){
            int val=(*it).ff;
            int cnt=(*it).ss;
            for(int i=0;i<cnt;i++){
                if(prev%2==0){
                    a[ind1]=val;
                    ind1++;
                }
                else{
                    a[ind2]=val;
                    ind2--;
                }
                prev++;
            }
        }
        int ans=INT_MAX;
        int last=INT_MIN;
        int cur=0;
        for(int i=0;i<n;i++){
            if(a[i]>last){
                cur++;
                last=a[i];
            }
        }
        ans=min(ans,cur);
        cur=0;
        last=INT_MIN;
        rev(a);
        for(int i=0;i<n;i++){
            if(a[i]>last){
                cur++;
                last=a[i];
            }
        }
        // debug(a)
 
        // int sz=m.size();
        // debug(ans)
        if(x && s%2){
            ans=max(ans,cur);
        }
        else{
            ans=min(ans,cur);
        }
        cout<<ans<<endl;
    }
    return 0;
}