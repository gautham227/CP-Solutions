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
 
bool check(ll x, ll y,vector<int>& cl , vector<int>& cr , vector<int>& cd , vector<int>& cu , ll mid){
    
    ll n=cl.size();
    x=x-cr[n-1]*(mid/n);
    if(mid%n!=0){
        x=x-cr[mid%n -1];
    }
    x=x+cl[n-1]*(mid/n);
    // debug(x+cl[n-1]*(mid/n))
    if(mid%n!=0){
        x=x+cl[mid%n -1];
    }
 
    y-=cu[n-1]*(mid/n);
    if(mid%n!=0){
        y=y-cu[mid%n -1];
    }
    y=y+cd[n-1]*(mid/n);
    if(mid%n!=0){
        y=y+cd[mid%n -1];
    }
    // debug(x)
    // debug(y)
 
    if(abs(x)+abs(y)<=mid)return true;
    return false;
}
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int x1,y1,x2,y2;
    cin>>x1>>y1;
    cin>>x2>>y2;
 
    int x,y;
    x=x2-x1;
    y=y2-y1;
 
    int n;
    cin>>n;
    string s;
    cin>>s;
 
    if(x1==x2 && y1==y2){
        cout<<0<<endl;
        return 0;
    }
 
    vector<int> cu, cd, cl, cr;
 
    int cntu=0, cntd=0, cntl=0, cntr=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            cntu++;
        }
 
        else if(s[i]=='D'){
            cntd++;
        }
 
        else if(s[i]=='L'){
            cntl++;
        }
 
        else if(s[i]=='R'){
            cntr++;
        }
 
        cu.pb(cntu);
        cd.pb(cntd);
        cl.pb(cntl);
        cr.pb(cntr);
    }
 
    ll lo=0, hi=1e18+2;
    ll mid;
 
    // debug(cu)
    // debug(cl)
    // debug(cd)
    // debug(cr)
 
    while(hi-lo>1){
        mid=(lo+hi)/2;
        // debug(mid)
        if(check(x,y,cl,cr,cd,cu,mid)){
            hi=mid;
        }
        else{
            lo=mid+1;
        }
    }
 
    if(check(x,y,cl,cr,cd,cu,lo)){
        cout<<lo<<endl;
    }
    else if(check(x,y,cl,cr,cd,cu,hi)){
        cout<<hi<<endl;
    }
    else{
        cout<<-1<<endl;
    }
 
    return 0;
}