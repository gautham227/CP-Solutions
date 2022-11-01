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
 
const int N=501;
//std::vector<int> vis(N,0);
// std::vector<int> adj[N];
 
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
 
int dist[N][N];
int n,m;
vector<int> del;
vector<ll> ans;
void initialise(){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i==j){dist[i][j]=0;}
            else{dist[i][j]=1e9+1;}
        }
    }
}
 
void floyd_warshall(){
    //O(N^3)
    // while taking input assign dist[x][y]=wt
    for(int k=0;k<n;k++){
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(dist[i][del[k]]!=1e9+1 && dist[del[k]][j]!=1e9+1){
                    dist[i][j]=min(dist[i][j],dist[i][del[k]]+dist[del[k]][j]);
                }
            }
        }
        ll cnt=0;
        for(int i=0;i<=k;i++){
            for(int j=0;j<=k;j++){
                cnt+=dist[del[i]][del[j]];
            }
        }
        ans.pb(cnt);
    }
}
 
int main() {
 
    //fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    //main code starts here
    cin>>n;
    initialise();
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            int k;
            cin>>k;
            dist[i][j]=k;
        }
    }
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        del.pb(k);
    }
    reverse(all(del));
    floyd_warshall();
    rev(ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}