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
 
const int N=1e5+2;
std::vector<int> vis(N,0);
std::vector<pii> adj[N];
 
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
 
 
vector<ll> dist(N,inf);
vector<int> par(N,-1);
 
void dijikstra(int st){
    dist[st]=0;
    priority_queue<pll, vector<pll>, greater<pll> > pq;
    pq.push({0,st});
    while(!pq.empty()){
        ll d=pq.top().ff;
        int pos= pq.top().ss;
        pq.pop();
        if(d!=dist[pos])continue;
        for(auto x: adj[pos]){
            if(dist[x.ff]>d+x.ss){
                dist[x.ff]=1ll*d+1ll*x.ss;
                par[x.ff]=pos;
                pq.push({dist[x.ff],x.ff});
            }
        }
    }
    return;
}
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,w;
        cin>>a>>b>>w;
        adj[a].pb({b,w});
        adj[b].pb({a,w});
    }
 
    dijikstra(1);
    // debug(dist);
    if(dist[n]>=1e18){
        cout<<-1<<endl;
        return 0;
    }
 
    int ver=n;
    // vector<int> v
    stack<int> st;
    st.push(n);
    while(ver!=1){
        ver=par[ver];
        st.push(ver);
    }
 
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
 
    cout<<endl;
 
    return 0;
}