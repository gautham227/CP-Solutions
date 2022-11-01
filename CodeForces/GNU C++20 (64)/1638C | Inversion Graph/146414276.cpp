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
 
int n;
vector<int> v(1e5+1);
vector<int> par(1e5+1);
 
void make_set(int x) {
    par[x] = x;
}
 
int find_set(int x) {
    if (par[x] == x) return x;
    return par[x] = find_set(par[x]);
}
 
void union_set(int x, int y) {
    int x_par = find_set(x);
    int y_par = find_set(y);
    if (x_par == y_par) return;
    par[x_par] = y_par;
}
 
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        v.clear();
        par.clear();
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<=n;i++){
            make_set(i);
        }
        stack<int> s;
        for(int i=0;i<n;i++){
            if(s.empty() || s.top() < v[i]){
                s.push(v[i]);
            }
            else{
                int x = s.top();
                s.pop();
                union_set(x,v[i]);
                if(s.empty()){
                    s.push(x);
                    continue;
                }
                // int y=s.top();
                // if(v[i]<y){
                //     union_set(x,y);
                // }
                // s.push(x);
                while(!s.empty() && s.top() > v[i]){
                    int y = s.top();
                    s.pop();
                    union_set(x,y);
                }
                s.push(x);
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(find_set(i)==i){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}